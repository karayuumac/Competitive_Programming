#include <iostream>
using namespace std;
//
// Created by karayuu on 2018-12-23.
//

int main() {
    while (true) {
        int a, b;
        char op;
        cin >> a >> op >> b;

        int ans = 0;
        if (op == '?') {
            break;
        } else if (op == '+') {
            ans = a + b;
        } else if (op == '-') {
            ans = a - b;
        } else if (op == '*') {
            ans = a * b;
        } else {
            ans = a / b;
        }
        cout << ans << endl;
    }
}