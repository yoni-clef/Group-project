#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number you want to print in pattern: ";
    cin >> n;

    // Check if the number entered is between 1 and 9, inclusive
    if(n>0){
        // Loop for the top half of the pattern
        for (int i = 0; i <= n; i++) {
            // Loop to print the numbers in increasing order
            for (int j = 0; j < i + 1; j++) {
                cout <<setw(2)<< j;
            }
            // Loop to print the empty spaces after the numbers
            for (int k = n; k > i; k--) {
                cout <<setw(2)<< " ";
            }
            // Loop to print the empty spaces before the second set of numbers
            for (int l = 1; l < n - i; l++) {
                cout <<setw(2)<< " ";
            }
            // Loop to print the numbers in decreasing order
            for (int m = i; m >= 0; m--)
                if (m != n) {
                    cout <<setw(2)<< m;
                }
            // End the line after printing one row
            cout << "\n";
        }

        // Loop for the bottom half of the pattern
        for (int i = 1; i <= n; i++) {
            // Loop to print the numbers in increasing order
            for (int j = 0; j <= n - i; j++) {
                cout <<setw(2)<< j;
            }
            // Loop to print the empty spaces before the second set of numbers
            for (int k = i - 1; k > 0; k--) {
                cout <<setw(2)<< " ";
            }
            // Loop to print the empty spaces after the numbers
            for (int l = 0; l < i; l++) {
                cout <<setw(2)<< " ";
            }
            // Loop to print the numbers in decreasing order
            for (int m = n - i; m >= 0; m--) {
                cout <<setw(2)<< m;
            }
            // End the line after printing one row
            cout << endl;
        }
        return 0;
    }
}
