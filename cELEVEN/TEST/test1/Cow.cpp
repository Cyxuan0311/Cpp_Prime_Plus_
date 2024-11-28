#include <iostream>
#include <cstring>
#include "Cow.h"

using namespace std;

// Default constructor
Cow::Cow() : weight(0.0) {
    name[0] = '\0'; // Initialize the name to an empty string
    hobby = nullptr; // Initialize hobby pointer to nullptr
}

// Parameterized constructor
Cow::Cow(const char *nm, const char *ho, double wt) : weight(wt) {
    strncpy(name, nm, 19); // Copy name, limit to 19 chars + 1 for null terminator
    name[19] = '\0'; // Ensure name is null-terminated

    if (ho) {
        hobby = new char[strlen(ho) + 1]; // Allocate memory for hobby
        strcpy(hobby, ho); // Copy hobby string
    } else {
        hobby = nullptr; // If no hobby provided, set to nullptr
    }
}

// Copy constructor
Cow::Cow(const Cow &c) : weight(c.weight) {
    strncpy(name, c.name, 19); // Copy the name
    name[19] = '\0'; // Ensure null-termination

    if (c.hobby) {
        hobby = new char[strlen(c.hobby) + 1]; // Allocate new memory for hobby
        strcpy(hobby, c.hobby); // Copy the hobby
    } else {
        hobby = nullptr; // If no hobby in the source, set to nullptr
    }
}

// Destructor
Cow::~Cow() {
    delete[] hobby; // Free dynamically allocated memory
}

// Assignment operator
Cow &Cow::operator=(const Cow &c) {
    if (this != &c) { // Check for self-assignment
        strncpy(name, c.name, 19);
        name[19] = '\0'; // Ensure null-termination

        weight = c.weight;

        delete[] hobby; // Free existing hobby memory

        if (c.hobby) {
            hobby = new char[strlen(c.hobby) + 1]; // Allocate new memory for hobby
            strcpy(hobby, c.hobby); // Copy hobby
        } else {
            hobby = nullptr; // If no hobby, set to nullptr
        }
    }

    return *this;
}

// Show cow details
void Cow::ShowCow() const {
    cout << "Name: " << name << endl;
    cout << "Hobby: " << (hobby ? hobby : "None") << endl;
    cout << "Weight: " << weight << endl;
}


