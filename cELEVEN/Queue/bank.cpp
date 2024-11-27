/*
Program:
    The program uses the queue interface.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;

// Function to determine whether a new customer arrives
bool newcustomer(double x);

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ios_base;
    std::srand(std::time(0)); // Seed for random number generation

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs); // Create a queue of size qs

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours; // Total simulation cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour;
    cin >> perhour;
    double min_per_cust = MIN_PER_HR / perhour; // Average time between arrivals

    Item temp; // New customer data
    long turnaways = 0;  // Count of customers turned away
    long customers = 0;  // Count of customers
    long served = 0;     // Count of customers served
    long sum_line = 0;   // Cumulative line length
    long wait_time = 0;  // Time until teller is free
    long line_wait = 0;  // Cumulative time in line

    for (int cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) {
            if (line.isfull()) {
                turnaways++;
            } else {
                customers++;
                temp.set(cycle); // Cycle time when customer arrives
                line.enqueue(temp);
            }
        }
        if (wait_time <= 0 && !line.isempty()) {
            line.dequeue(temp);      // Attend the next customer
            wait_time = temp.prime(); // Set wait time for the customer
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }

    // Display results
    if (customers > 0) {
        cout << "Customers accepted: " << customers << endl;
        cout << " Customers served: " << served << endl;
        cout << "         Turnaways: " << turnaways << endl;
        cout << "Average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double)sum_line / cyclelimit << endl;
        cout << "Average wait time: "
             << (double)line_wait / served << " minutes\n";
    } else {
        cout << "No customers!\n";
    }
    cout << "Done.\n";

    return 0;
}

// Function to determine whether a new customer arrives
bool newcustomer(double x) {
    return (std::rand() / (RAND_MAX / x) < 1);
}
