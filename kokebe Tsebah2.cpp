#include <iostream>
#include <set>
using namespace std;

int main() {
    int ticket_num, person_code, entrance_fee, total_attendees = 0, total_sales = 0;
    int infant_count = 0, child_count = 0, teenager_count = 0, adult_count = 0;
    set<int> ticket_numbers;

    // Welcome message
    cout<<"Welcome to Kokebe Tsibah Secondary and Preparatory School"<<endl;

    // Prompt user to enter ticket number
    cout << "Enter ticket number (negative value to stop): ";
    cin >> ticket_num;

    // Loop until user enters a negative value
    while (ticket_num >= 0) {
        // Check if ticket number has already been entered
        if (ticket_numbers.find(ticket_num) != ticket_numbers.end()) {
            cout << "Ticket number already entered. Please enter a different ticket number.\n";
        } else {
            // Add ticket number to set of ticket numbers
            ticket_numbers.insert(ticket_num);

            // Prompt user to enter person code
            label:
            cout << "Enter person code (1: infant, 2: child, 3: teenager, 4: adult): ";
            cin >> person_code;

            // Determine entrance fee based on person code
            switch (person_code) {
                case 1:
                    entrance_fee = 10;
                    infant_count++;
                    break;
                case 2:
                    entrance_fee = 5;
                    child_count++;
                    break;
                case 3:
                    entrance_fee = 20;
                    teenager_count++;
                    break;
                case 4:
                    entrance_fee = 20;
                    adult_count++;
                    break;
                default:
                    cout << "Invalid person code. Please enter a valid code.\n";
                    entrance_fee = 0;
                    goto label;
            }

            // Update total attendees and total sales
            total_attendees++;
            total_sales += entrance_fee;
        }

        // Prompt user to enter next ticket number
        cout << "Enter ticket number (negative value to stop): ";
        cin >> ticket_num;
    }

    // Output results
    cout << "Total number of attendees: " << total_attendees << endl;
    cout << "Total ticket sales: " << total_sales << " ETB" << endl;
    cout << "Infants (Code 1): " << infant_count << endl;
    cout << "Children (Code 2): " << child_count << endl;
    cout << "Teenagers (Code 3): " << teenager_count << endl;
    cout << "Adults (Code 4): " << adult_count << endl;

    return 0;
}
