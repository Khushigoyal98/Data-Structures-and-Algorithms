#include <iostream>
#define CAPACITY 100

using namespace std;

class ArrayInsertion {
private:
    int arr[CAPACITY];
    int size;

public:
    
    void initialize() {
        size = 6;
       
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1;
        }
    }

    void insertAtIndex(int index, int x) {
        if (size >= CAPACITY) {
            cout << "Array Capacity is FULL!!!" << endl;
            return;
        }
        if (index == 0) {
            insertAtBeg(x);
            return;
        }

        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = x;
        size = size + 1;
        cout << "ELEMENT INSERTED" << endl;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void insertAtBeg(int x) {
        for (int i = size - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size = size + 1;
        cout << "ELEMENT INSERTED" << endl;
    }

    void insertAtEnd(int x) {
        arr[size++] = x;
        cout << "ELEMENT INSERTED" << endl;
    }
};

int main() {
    ArrayInsertion arrayInsertion;
    arrayInsertion.initialize();

    int ch, x, in, y;
    do {
        cout << "Press 1 to insert at Beginning\n";
        cout << "Press 2 to insert at End\n";
        cout << "Press 3 to insert at given index\n";
        cout << "Press 4 to display the array\n";
        cout << "Enter choice here: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter the element to be inserted: ";
                cin >> x;
                arrayInsertion.insertAtBeg(x);
                break;

            case 2:
                cout << "Enter the element to be inserted: ";
                cin >> x;
                arrayInsertion.insertAtEnd(x);
                break;

            case 3:
                cout << "Enter the element to be inserted: ";
                cin >> x;
                cout << "Enter valid index: ";
                cin >> in;
                arrayInsertion.insertAtIndex(in, x);
                break;

            case 4:
                arrayInsertion.display();
                break;

            default:
                cout << "SYNTAX ERROR" << endl;
                break;
        }

        cout << "\nPress 1 to ReInsert Data: ";
        cin >> y;
    } while (y == 1);

    return 0;
}

