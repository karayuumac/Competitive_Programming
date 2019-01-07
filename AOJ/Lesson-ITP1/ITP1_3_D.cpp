#include <iostream>
using namespace std;

//
// Created by karayuu on 2018-12-23.
//

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (c % i == 0) {
            ans++;
        }
    }

    cout << ans << endl;
}