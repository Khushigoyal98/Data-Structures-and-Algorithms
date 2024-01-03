#include<iostream>
#define CAPACITY 100
using namespace std;

class Insertion {
public:
    int arr[CAPACITY] = {1, 5, 6, 2, 9, 5, 0};
    int size = 7;
    int index;
    int x;

    void insertElement(int arr[], int size, int index, int x) {
        if (size >= CAPACITY) {
            cout << "Array capacity is full" << endl;
            return;
        }

        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }

        arr[index] = x;
    }

    void display(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Insertion obj;

    cout << "Before Insertion: ";
    obj.display(obj.arr, obj.size);

    cout << "\nCurrent size of array = " << obj.size << " Please enter a valid index for insertion: ";
    cin >> obj.index;

    cout << "\nEnter element to be inserted: ";
    cin >> obj.x;

    obj.insertElement(obj.arr, obj.size, obj.index, obj.x);
    obj.size++;

    cout << "\nAfter insertion: ";
    obj.display(obj.arr, obj.size);

    return 0;
}

