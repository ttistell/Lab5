#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double a, b, h, n;
    int save;

    cout << "Enter: a, b, h, n:" << endl;
    cin >> a >> b >> h >> n;
    cout << "Would you like to enter the results into a file? 1/0:" << endl;
    cin >> save;;

    if (h <= 0 || a > b) {
        cout << "Error";
        return 1;
    }
    ofstream fout("test.txt");
    double x = a;
    double y = 0;
    for (x; x <= b; x += h) {
        double y = 0;
        if (x >= 0) {
            if (n < 2) {
                cout << "Error: incorrect value of n";
                return 1;
            }
            for (double i = 1; i < n; i++) {
                y += i;
            }
            y = x - y;
        }
        else {
            if (n < 2) {
                cout << "Error: incorrect value of n";
                return 1;
            }

            for (double i = 1; i < n; i++) {
                double s = 0;
                for (double j = 1; j < n; j++) {
                    s += (j / (j * j + j));
                }
                y += s;
            }
        }
        cout << "X = " << x << endl << endl;
        cout << "Y = " << y << endl << endl;
        cout << "N = " << n << endl << endl;
        
        if (save == 1) {
            fout << "X = " << x << endl;
            fout << "Y = " << y << endl;
            fout << "N = " << n << endl;
        }
    }

    return 0;
}


