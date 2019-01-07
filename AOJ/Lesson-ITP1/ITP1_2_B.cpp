#include <iostream>
using namespace std;
//
// Created by karayuu on 2018-12-19.
//
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}