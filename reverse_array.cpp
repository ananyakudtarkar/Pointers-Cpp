#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* ptr = arr + n - 1; 
    cout << "Array in reverse using pointer:\n";
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr--;
    }

    return 0;
}

/*
OUTPUT:
Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Array in reverse using pointer:
50 40 30 20 10

=== Code Execution Successful ===
*/
