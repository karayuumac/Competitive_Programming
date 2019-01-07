#include <iostream>
#include <stdio.h>
#include <cmath>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORN(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
//
// Created by karayuu on 2018-12-31.
//

int main() {
    int w, a, b;
    cin >> w >> a >> b;

    if (0 <= a + w - b && a + w - b <= 2 * w) {
        printf("%d\n", 0);
    } else {
        printf("%d\n", min(abs(b + w - a), abs(a + w - b)));
    }
}