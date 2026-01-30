#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (i >= 9 && j < 9) {
                cout << "\x1b[91m# \x1b[0m";
            }
            else if (i >= 9 && j >= 9) {
                cout << "\x1b[6m# \x1b[0m";
            }
            else if (i < 9 && j >= 9) {
                cout << "\x1b[95m# \x1b[0m";
            }
            else {
                cout << "\x1b[96m# \x1b[0m";
            }
        }
        cout << endl;
    }
}
