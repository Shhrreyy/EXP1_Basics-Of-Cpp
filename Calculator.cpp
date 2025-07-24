#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/') {
        if (num2 != 0)
            result = num1 / num2;
        else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }
    else {
        cout << "Invalid operator!" << endl;
        return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}
