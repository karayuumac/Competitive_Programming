#include <iostream>
using namespace std;
//
// Created by karayuu on 2018-12-19.
//
int main() {
    int S;
    cin >> S;

    int h = S / 3600;
    int m = (S - h * 3600) / 60;
    int s = (S - h * 3600) % 60;

    cout << h << ":" << m << ":" << s << endl;
}