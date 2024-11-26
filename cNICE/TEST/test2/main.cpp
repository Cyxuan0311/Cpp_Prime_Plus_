#include <iostream>
#include "Person.h"

int main() {
    Person p1("Smith", "John");
    p1.show();       // 输出 Name: John Smith
    p1.FormalShow(); // 输出 Formal Name: Smith, John

    Person p2("Doe");
    p2.show();       // 输出 Name: Heyyou Doe
    p2.FormalShow(); // 输出 Formal Name: Doe, Heyyou

    return 0;
}
