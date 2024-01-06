#include <iostream>
#define CAPACITY 100

using namespace std;

class ArrayDeletion {
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

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index!" << endl;
            return;
        }else if(index==size-1){
        	deleteAtEnd();
		}else if(index==0){
			deleteAtBeg();
		}

        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size = size - 1;
        cout << "ELEMENT DELETED" << endl;
    }

    void deleteAtBeg() {
        if (size == 0) {
            cout << "Array is empty, cannot delete from beginning!" << endl;
            return;
        }

        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size = size - 1;
        cout << "ELEMENT DELETED FROM BEGINNING" << endl;
    }

    void deleteAtEnd() {
        if (size == 0) {
            cout << "Array is empty, cannot delete from end!" << endl;
            return;
        }

        size = size - 1;
        cout << "ELEMENT DELETED FROM END" << endl;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayDeletion arrayDeletion;
    arrayDeletion.initialize();

    int ch, in, y;
    do {
        cout << "Press 1 to delete at given index\n";
        cout << "Press 2 to delete from beginning\n";
        cout << "Press 3 to delete from end\n";
        cout << "Press 4 to display the array\n";
        cout << "Enter choice here: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter valid index to delete: ";
                cin >> in;
                arrayDeletion.deleteAtIndex(in);
                break;

            case 2:
                arrayDeletion.deleteAtBeg();
                break;

            case 3:
                arrayDeletion.deleteAtEnd();
                break;

            case 4:
                arrayDeletion.display();
                break;

            default:
                cout << "SYNTAX ERROR" << endl;
                break;
        }

        cout << "\nPress 1 to ReDelete Data: ";
        cin >> y;
    } while (y == 1);

    return 0;
}

