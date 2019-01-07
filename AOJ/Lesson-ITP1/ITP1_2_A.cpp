#include <iostream>
using namespace std;
//
// Created by karayuu on 2018-12-19.
//
int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << "a < b" << endl;
    } else if (a == b) {
        cout << "a == b" << endl;
    } else {
        cout << "a > b" << endl;
    }
}