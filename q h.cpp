
#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter number of rows: ";
cin >> n;

// upper half of butterfly
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) {
cout << j << " ";
}
for (int j = i + 1; j <= n; j++) {
cout << " ";
}
for (int j = n; j > i; j--) {
cout << " ";
}
for (int j = i; j >= 1; j--) {
cout << j << " ";
}
cout << endl;
}

// lower half of butterfly
for (int i = n; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
cout << j << " ";
}
for (int j = i + 1; j <= n; j++) {
cout << "  ";
}
for (int j = n; j > i; j--) {
cout << " ";
}
for (int j = i; j >= 1; j--) {
cout << j << " ";
}
cout << endl;
}

return 0;
}
