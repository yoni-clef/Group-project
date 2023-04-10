#include <iostream>
#include <iomanip>  // include iomanip library for setw function
using namespace std;

int main()
{
    int n;

    cout << "Enter the number you want to print in pattern: ";
    cin >> n;

    if (n > 0) {
        // First half of the diamond pattern
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j < i + 1; j++) {
                cout << setw(2) << j; // Increase space for the numbers
            }

            for (int k = n; k > i; k--) {
                cout << "  "; // Increase space between the two halves
            }

            for (int l = 1; l < n - i; l++) {
                cout << "  "; // Increase space between the numbers and the right edge
            }

            for (int m = i; m >= 0; m--) {
                cout << setw(2) << m; // Increase space for the numbers
            }

            cout << "\n";
        }

        // Second half of the diamond pattern
        for (int i = n-1; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                cout << setw(2) << j; // Increase space for the numbers
            }

            for (int k = n-1; k > i; k--) {
                cout << "  "; // Increase space between the two halves
            }

            for (int l = n-i-1; l > 0; l--) {
                cout << "  "; // Increase space between the numbers and the right edge
            }

            for (int m = i; m >= 0; m--) {
                cout << setw(2) << m;
            }

            cout << "\n";
        }
    }
    else {
        cout << "Invalid input. Please enter a positive integer.\n";
    }

    return 0;
}
