#include <iostream>

using namespace std;

int main()
{
-
int code, ticketNumber, entranceFee;
int infants = 0, children = 0, teenagers = 0, adults = 0;
int totalTickets = 0, totalSales = 0;

cout << "Kokebe Tsibah School Function Attendance" << endl;
cout << "Enter ticket number (negative to stop): ";
cin >> ticketNumber;

while (ticketNumber >= 0) {
cout << "Enter person code (1=infant, 2=child, 3=teenager, 4=adult): ";
cin >> code;
if (code < 1 || code > 4) {
cout << "Invalid person code. Please enter a valid code." << endl;
continue;
}

cout << "Enter entrance fee: ";
cin >> entranceFee;

if (code == 1)
infants++;
else if (code == 2)
children++;
else if (code == 3)
teenagers++;
else if (code == 4)
adults++;

totalTickets++;
totalSales += entranceFee;

cout << "Enter ticket number (negative to stop): ";
cin >> ticketNumber;
}

cout << "Total number of people: " << totalTickets << endl;
cout << "Total ticket sales: " << totalSales << endl;
cout << "Infants (code 1): " << infants << endl;
cout << "Children (code 2): " << children << endl;
cout << "Teenagers (code 3): " << teenagers << endl;
cout << "Adults (code 4): " << adults << endl;

return 0;
}


