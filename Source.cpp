#include <iostream>
#include <cmath>
using namespace std;

void checkValidInput() {
    if (cin.fail()) {
        throw "Incorrect input";
    }
}

void checkValidParams(double a, double b, double h, double n) {
    if (h <= 0 || a > b || n < 2) {
        throw "Input correct data";
    }
}

double calculate(double x, double n) {
    double y = 0;
    if (x >= 0) {
        for (double i = 1; i < n; i++) {
            y += i;
        }
        y = x - y;
    }
    else {
        for (double i = 1; i < n; i++) {
            double s = 0;
            for (double j = 1; j < n; j++) {
                s += (j / (j * j + j));
            }
            y += s;
        }
    }
    return y;
}

int main() {
    double a, b, h, n;
    

    try {
        cout << "Enter: a, b, h, n:" << endl;
        cin >> a >> b >> h >> n;
        if (cin.fail()) {
            throw "Error: invalid input";
        }

        checkValidParams(a, b, h, n);

        double x = a;
        for (x; x <= b; x += h) {
            double y = calculate(x, n);
            cout << "x = " << x << "; " << "y = " << y << "; " << endl;
        }
    }

    catch (const char* ex) {
    cout << ex << endl;
    return -1;
    }
    catch (...) {
        cout << "Unknown error" << endl;
        return -2;
    }

    return 0;
}


