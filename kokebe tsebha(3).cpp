#include <iostream>
using namespace std;

int main() {
    // Declare variables for ticket number, person code, and entrance fee
    int ticketNum;
    int personCode;
    int entranceFee;

    // Initialize variables for total people, total sales, infants, children, teenagers, and adults to 0
    int totalPeople = 0;
    int totalSales = 0;
    int infants = 0;
    int children = 0;
    int teenagers = 0;
    int adults = 0;

    // Initialize pointers for total people and total sales
    int *pTotalPeople = &totalPeople;
    int *pTotalSales = &totalSales;

    // Prompt the user to enter a ticket number
    cout << "Enter ticket number: ";
    cin >> ticketNum;

    // While the ticket number is not negative
    while (ticketNum >= 0) {
        // Prompt the user to enter a person code (1 for infant, 2 for child, 3 for teenager, 4 for adult)
        cout << "Enter person code (1 for infant, 2 for child, 3 for teenager, 4 for adult): ";
        cin >> personCode;

        // If the person code is 1 (infant), set the entrance fee to 10 and increment the number of infants
        if (personCode == 1) {
            entranceFee = 10;
            infants++;
        }
        // If the person code is 2 (child), set the entrance fee to 5 and increment the number of children
        else if (personCode == 2) {
            entranceFee = 5;
            children++;
        }
        // If the person code is 3 (teenager), set the entrance fee to 20 and increment the number of teenagers
        else if (personCode == 3) {
            entranceFee = 20;
            teenagers++;
        }
        // If the person code is 4 (adult), set the entrance fee to 20 and increment the number of adults
        else if (personCode == 4) {
            entranceFee = 20;
            adults++;
        }
        // If the person code is not valid, display an error message and continue to the next iteration of the loop
        else {
            cout << "Invalid person code. Please enter a valid code." << endl;
            continue;
        }

        // Increment the total number of people using the pointer
        (*pTotalPeople)++;
        // Add the entrance fee to the total sales using the pointer
        (*pTotalSales) += (entranceFee)*ticketNum;

        // Prompt the user to enter another ticket number
        cout << "Enter ticket number: ";
        cin >> ticketNum;
    }

    // Display the total number of people using the pointer
    cout << "Total people: " << *pTotalPeople << endl;
    // Display the total amount of ticket sales using the pointer
    cout << "Total sales: " << *pTotalSales << " ETB" << endl;
    // Display the number of infants, children, teenagers, and adults
    cout << "Infants (code 1): " << infants << endl;
    cout << "Children (code 2): " << children << endl;
    cout << "Teenagers (code 3): " << teenagers << endl;
    cout << "Adults (code 4): " << adults << endl;

    return 0;
}
