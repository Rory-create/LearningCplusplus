#include <iostream>

using namespace std;
int main() {
    bool return_to_menu = true;
    while (return_to_menu) {
        cout
                << "Welcome to Paper's First Simple calculator. \n Please choose what type of operation you would like to perform. ";
        cout << "\n Division (d,D)\n Multiplication (m,M)\n Addition (a,A)\n Subtraction (s,S)\n";
        char choice;
        cin >> choice;
        if (choice == 'd' || choice == 'D') {
            bool reset_division_program = true;
            while (reset_division_program) {
                float n3;
                float n4;
                cout << "Hello, enter two numbers and the first will be divided by the second!\n";
                cout << "Enter the dividend: \n";
                cin >> n3;
                if (cin.fail()){
                    cout <<"Invalid date type entered. Please enter valid number." << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                cout << "Enter the divisor: \n";
                cin >> n4;
                if (cin.fail()){
                    cout <<"Invalid date type entered. Please enter valid number." << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                float quotient = n3 / n4;
                cout << "The result is: ";
                cout << quotient;
                cout << "\nThank you for using my dividing machine." << endl;
                cout << "Do you wish to make another calculation? (y/n): ";
                    char reset_division_choice;
                    cin >> reset_division_choice;
                    if (reset_division_choice == 'n' || reset_division_choice == 'N') {
                        reset_division_program = false;
                    }
            }
        }
        if (choice == 'm' || choice == 'M') {
            bool reset_multiplication_program = true;
            while (reset_multiplication_program) {
                float n5;
                float n6;
                cout << "Hello, enter two numbers and they will be multiplied together!\n";
                cout << "Enter the first number: \n";
                cin >> n5;
                if (cin.fail()){
                    cout <<"Invalid date type entered. Please enter valid number." << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                cout << "Enter the second number: \n";
                cin >> n6;
                if (cin.fail()){
                    cout <<"Invalid date type entered. Please enter valid number." << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                float product = n5 * n6;
                cout << "The product is: ";
                cout << product;
                cout << "\nThank you for using my multiplication machine.\n";
                cout << "Do you wish to make another calculation? (y/n): " << endl;
                char reset_multiplication_choice;
                cin >> reset_multiplication_choice;
                if (reset_multiplication_choice == 'n' || reset_multiplication_choice == 'N') {
                    reset_multiplication_program = false;
                }
            }
        }
        if (choice == 'a' || choice == 'A') {
            bool reset_addition_program = true;
            while (reset_addition_program) {
                float n1;
                float n2;
                cout << "Hello, enter two numbers and they will be summed!\n";
                cout << "Enter a number: \n";
                cin >> n1;
                if (cin.fail()){
                    cout <<"Invalid date type entered. Please enter valid number." << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                cout << "Enter another number: \n";
                cin >> n2;
                if (cin.fail()){
                    cout <<"Invalid date type entered. Please enter valid number." << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                float sum = n1 + n2;
                cout << "The sum is: ";
                cout << sum;
                cout << "\nThank you for using my summing machine.\n";
                cout << "Do you wish to make another calculation? (y/n): " << endl;
                char reset_additon_choice;
                cin >> reset_additon_choice;
                if (reset_additon_choice == 'n' || reset_additon_choice == 'N') {
                    reset_addition_program = false;
                }
            }
            if (choice == 's' || choice == 'S') {
                bool reset_subtraction_program = true;
                while (reset_subtraction_program) {
                    float n7;
                    float n8;
                    cout << "Hello, enter two numbers and the second will be subtracted from the first!\n";
                    cout << "Enter the minuend: \n";
                    cin >> n7;
                    if (cin.fail()){
                        cout <<"Invalid date type entered. Please enter valid number." << endl;
                        cin.clear();
                        cin.ignore(100, '\n');
                        continue;
                    }
                    cout << "Enter the subtrahend: \n";
                    cin >> n8;
                    if (cin.fail()){
                        cout <<"Invalid date type entered. Please enter valid number." << endl;
                        cin.clear();
                        cin.ignore(100, '\n');
                        continue;
                    }
                    float difference = n7 - n8;
                    cout << "The difference is: ";
                    cout << difference;
                    cout << "\nThank you for using my subtraction machine.\n";
                    cout << "Do you wish to make another calculation? (y/n): " << endl;
                    char reset_subtraction_choice;
                    cin >> reset_subtraction_choice;
                    if (reset_subtraction_choice == 'n' || reset_subtraction_choice == 'N') {
                        reset_subtraction_program = false;
                    }
                }
            }
        }
        cout << "Thank you for using this program!\n" << "Press (r,R) to return to main menu.";
        char return_to_menu;
        cin >> return_to_menu;
        if (choice == 'r' || choice == 'R') {
            return_to_menu = false;
        }
    }

}