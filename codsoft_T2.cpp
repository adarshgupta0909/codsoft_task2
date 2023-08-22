#include <iostream>
using namespace std;

int main() {
    cout<< "__________________________________Hello To Adarsh Calculator_______________________________"<< endl;
    cout<<"___________________________________*************************________________________________"<<endl;
    cout<<"                                    ________________________                                 "<<endl;
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;
    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}





