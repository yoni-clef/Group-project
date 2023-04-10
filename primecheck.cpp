#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
        {

        label:
         cout << "Enter an integer: ";
         cin >> n;
          if (n<0) {
          cout<<"invalid number please try again"<<endl;
          goto label;}

    if (isPrime(n)) {
        int sum = 0, count = 0;
        for (int i = 1; i <= n; i++) {
            if (isPrime(i)) {
                sum += i;
                count++;
            }
        }
        double avg = (double)sum / count;
             cout << "The average value of prime numbers between 1 and " << n << " is " << avg << std::endl;
    }
    else {
             cout << "The prime factors of " << n << " are: ";
        int* factors = new int[n]; // Allocate memory dynamically
        int index = 0;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                factors[index++] = i;
                n /= i;
            }
        }
        for (int i = 0; i < index; i++) {
                 cout << factors[i]<<"   ";
        }

    }
        }

    return 0;
}

