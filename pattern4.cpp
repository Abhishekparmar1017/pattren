/*
AAA
BBB
CCC
*/

#include <iostream>
using namespace std;

void mypattern() {
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int column = 1; column <= row; column++) {
            char ch = 'A' + row - 1;
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int column = 1; column <= row; column++) {
            char ch = 'A' + row - 1;
            cout << ch;
        }
        cout << endl;
    }
    mypattern();
    return 0;
}
