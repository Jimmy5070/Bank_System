#include <iostream>
#include <queue>

using namespace std;

void displayQueue(queue<int> q1) {
    while (q1.empty() == false) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
}

int main() {
    int input;
    int waiting_counter = -1;
    int number_customer = 0;

    queue<int> q;

    do {
        cout << endl;
        cout << "0- EXIT" << endl;
        cout << "1- ADD Customer" << endl;
        cout << "2- REMOVE Customer" << endl;
        cout << "3- DISPLAY ALL Customers" << endl;
        cout << "Please enter your Choice" << endl;

        cin >> input;
        cout << endl;

        switch (input) {
        case 0:
            break;

        case 1:
            number_customer++;
            waiting_counter++;
            cout << "Welcome you are Customer number " << number_customer << endl;
            cout << "Waiting Customers: " << waiting_counter << endl;
            q.push(number_customer);
            break;

        case 2:
            if (waiting_counter == -1) {
                cout << "NO MORE Customers in the system" << endl;
                break;
            }
            else {
                cout << "THANK YOU Customer number " << q.front() << endl;
                waiting_counter--;
                q.pop();
            }
            break;

        case 3:
            if (waiting_counter == -1) {
                cout << "NO CUSTOMERS in the system" << endl;
                break;
            }
            else {
                cout << "CUSTOMERS in the system" << endl;
                displayQueue(q);
            }
            break;

        default:
            cout << "Invalid Choice" << endl;
        }
    } while (input != 0);

    return 0;
}
