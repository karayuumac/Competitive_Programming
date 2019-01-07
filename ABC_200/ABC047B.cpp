#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//
// Created by karayuu on 2018-12-29.
//

int main() {
    int w, h, n;
    cin >> w >> h >> n;

    bool a[100][100] = {};

    for (int i = 1; i <= n; i++) {
        int x, y, m;
        cin >> x >> y >> m;

        switch (m) {
            case 1:
                for (int j = 0; j < x; j++) {
                    for (int k = 0; k <= h; h++) {
                        a[j][k] = true;
                    }
                }
                continue;
            case 2:
                for (int j = x + 1; j <= h; j++) {
                    for (int k = 0; k <= h; h++) {
                        a[j][k] = true;
                    }
                }
                continue;
            case 3:
                for (int j = 0; j <= w; j++) {
                    for (int k = 0; k < h; h++) {
                        a[j][k] = true;
                    }
                }
                continue;
            case 4:
                for (int j = 0; j <= w; j++) {
                    for (int k = y + 1; k <= h; h++) {
                        a[j][k] = true;
                    }
                }
                continue;
            default:
                break;
        }
    }

    int count;
    for (int i = 0; i <= w; i++) {
        for (int j = 0; j <= h; j++) {
            if (!a[i][j]) {
                count++;
            }
        }
    }
    cout << count << endl;
}