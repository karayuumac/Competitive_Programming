#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//
// Created by karayuu on 2018-12-31.
//

int main() {
    long a, b, x;
    cin >> a >> b >> x;

    long count;
    for (long i = a; i <= b; i++) {
        if (i % x == 0) {
            count++;
        }
    }

    cout << count << endl;
}