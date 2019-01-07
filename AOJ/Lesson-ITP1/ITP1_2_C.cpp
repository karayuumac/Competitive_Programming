#include <iostream>
#include <utility>
using namespace std;
//
// Created by karayuu on 2018-12-19.
//
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    while (!(a <= b && b <= c)) {
        if (a > b) {
            swap(a, b);
        }
        if (b > c) {
            swap(b, c);
        }
        if (a > c) {
            swap(a, c);
        }
    }

    cout << a << " " << b << " " << c << endl;
}