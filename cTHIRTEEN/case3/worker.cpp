#include "worker.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Worker method

void Worker::Set() {
    cout << "Enter the worker's name: ";
    getline(cin, fullname);
    cout << "Enter the worker's id: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Worker::show() const {
    cout << "The name is " << fullname << endl;
    cout << "The id is " << id << endl;
}

// Waiter method
void Waiter::Set() {
    Worker::Set();
    cout << "Enter the waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

void Waiter::show() const {
    Worker::show();
    cout << "The panache is " << panache << endl;
}

// Singer Method
const char* Singer::pv[] = {
    "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"
};

void Singer::Set() {
    Worker::Set();
    cout << "Enter number for singer's vocal range: " << endl;
    int i;
    for (i = 0; i < Vtypes; i++) {
        cout << i << ": " << pv[i] << endl;
        if (i % 4 == 0)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    while (cin >> voice && (voice < 0 || voice >= Vtypes))
        cout << "Please enter a value >= 0 and <" << Vtypes << endl;
    while (cin.get() != '\n')
        continue;
}

void Singer::show() const {
    cout << "Category: singer\n";
    Worker::show();
    cout << "Vocal range: " << pv[voice] << endl;
}
