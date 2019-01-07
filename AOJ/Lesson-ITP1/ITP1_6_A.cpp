#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//
// Created by karayuu on 2018-12-25.
//

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = n; i <= 1; i--) {
        if (i > 0) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
}