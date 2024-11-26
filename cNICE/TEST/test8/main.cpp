#include "list.h"

int main() {
    List myList;
    ListItem item1 = {1, 3.14, "Hello"};
    ListItem item2 = {2, 2.71, "World"};
    
    myList.add(item1);
    myList.add(item2);
    
    myList.display();
    
    int index = myList.find(item1);
    if (index != -1) {
        cout << "Item found at index: " << index << endl;
    } else {
        cout << "Item not found." << endl;
    }
    
    return 0;
}
