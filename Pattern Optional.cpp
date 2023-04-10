#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
  int n;
    cout << "Enter the number you want to print in pattern: ";
    cin >> n;
    {
 if(n<10 && n>0){
// Loop for the top half of the pattern
        for (int i = 0; i <= n; i++) {
            // Loop to print the numbers in increasing order
            for (int j = 0; j < i + 1; j++) 
                cout <<setw(2)<< j;
            // Loop to print the empty spaces after the numbers
            for (int k = n; k > i; k--) 
                cout <<setw(2)<< " ";
            // Loop to print the empty spaces before the second set of numbers
            for (int l = 1; l < n - i; l++)
                cout <<setw(2)<< " ";
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

else if (n>9) {
    // print the upper half of the diamond
    for (int i = 0; i <= n; i++) {
        // print the numbers in the current row
        for (int j = 0; j < i + 1; j++) {
            if (j >= 10) 
                cout << setw(3) << j;
            else 
                cout << setw(2) << j;
        }
        // print the spaces between the left and right halves of the diamond
        for (int k = n; k > i; k--) {
            if (k >= 10) 
                cout << setw(3) << "   ";
            else 
                cout << setw(1) << " ";
        }

        // print the spaces between the numbers in the current row and the numbers in the next row
        for (int l = 1; l < n - i; l++) {
            if (l >= 10) 
                cout << setw(3) << " ";
            else 
                cout << setw(2) << "   ";
        }
        // print the numbers in reverse order
        for (int m = i; m >= 0; m--) {
            if (m != n) {
                if (m >= 10) 
                    cout << setw(3) << m;
                else 
                    cout << setw(2) << m;   
            }
        }
           cout << "\n"; // move to the next line
    }
    // print the lower half of the diamond
    for (int i = n - 1; i >= 0; i--) {
        // print the numbers in the current row
        for (int j = 0; j < i + 1; j++) {
            if (j >= 10) 
                cout << setw(3) << j;
             else 
                cout << setw(2) << j;     
        }
        // print the spaces between the left and right halves of the diamond
        for (int k = n; k > i; k--) {
            if (k >= 10) 
                cout << setw(3) << "   ";
             else 
                cout << setw(1) << " ";  
        }
        // print the spaces between the numbers in the current row and the numbers in the next row
        for (int l = 1; l < n - i; l++) {
            if (l >= 10) 
                cout << setw(3) << " ";
             else 
                cout << setw(2) << "   ";
        }
        // print the numbers in reverse order
        for (int m = i; m >= 0; m--) {
            if (m != n) {
                if (m >= 10)
                    cout << setw(3) << m;
                else 
                    cout << setw(2) << m;   
            }
        }
        cout << "\n"; // move to the next line
        }
        }
    }
}
