#include <iostream>
using namespace std;

class Calculator {
    double a, b;
    string op;

public:
    Calculator(double x, double y, string o) {
        a = x;
        b = y;
        op = o;
    }

    double calculate() {
        if (op == "add") return a + b;
        else if (op == "sub") return a - b;
        else if (op == "mul") return a * b;
        else if (op == "div") {
            if (b == 0) {
                cout << "Error: Division by zero" << endl;
                return 0;
            }
            return a / b;
        } else {
            cout << "Invalid operation" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Operation (add/sub/mul/div): ";
    cin >> op;

    Calculator calc(a, b, op);
    cout << "Result: " << calc.calculate() << endl;

    return 0;
}
