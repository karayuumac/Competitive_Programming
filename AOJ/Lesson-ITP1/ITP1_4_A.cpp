#include <iostream>
#include <stdio.h>
using namespace std;
//
// Created by karayuu on 2018-12-23.
//

int main() {
    int a, b;
    cin >> a >>b;

    int d = a / b;
    int r = a % b;
    double f = (double)a / (double)b;

    printf("%d %d %.5lf\n", d, r, f);
}