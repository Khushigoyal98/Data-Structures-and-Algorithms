#include<iostream>
#define CAPACITY 100
using namespace std;

class Insertion {
public:
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
    int arr[CAPACITY] = {1, 5, 6, 2, 9, 5, 0};
    int size = 7;
    int index;
    int x;

    cout << "Before Insertion: ";
    obj.display(arr, size);

    cout << "\nCurrent size of array= " << size << " Please enter a valid index for insertion: ";
    cin >> index;

    cout << "\nEnter element to be inserted: ";
    cin >> x;

    obj.insertElement(arr, size, index, x);
    size++;

    cout << "\nAfter insertion: ";
    obj.display(arr, size);

    return 0;
}

