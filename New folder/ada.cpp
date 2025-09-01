#include <iostream>
using namespace std;

const int SIZE = 100;

void insert(int arr[], int &n) {
    if (n >= SIZE) {
        cout << "Array is full!\n";
        return;
    }
    cout << "Enter number: ";
    cin >> arr[n];
    n++;
    cout << "Inserted.\n";
}

void display(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void search(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    int x;
    cout << "Enter number to search: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Found at index " << i << endl;
            return;
        }
    }
    cout << "Not found.\n";
}

void findMaxMin(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    cout << "Maximum: " << maxVal << ", Minimum: " << minVal << endl;
}

void sortArray(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Array sorted.\n";
}

int main() {
    int arr[SIZE], n = 0;
    int choice;

    while (true) {
        cout << "\n--- Array Manager ---\n";
        cout << "1. Insert\n";
        cout << "2. Display\n";
        cout << "3. Search\n";
        cout << "4. Find Max & Min\n";
        cout << "5. Sort\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: insert(arr, n); break;
            case 2: display(arr, n); break;
            case 3: search(arr, n); break;
            case 4: findMaxMin(arr, n); break;
            case 5: sortArray(arr, n); break;
            case 6: cout << "Goodbye!\n"; return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
