//
// Created by 99woo on 2022-09-28.
//

#include <iostream>

using namespace std;

double x = 10;

void input() {
    for (int i = 0; i < 18; ++i) {
        x *= 10;
    }
}

void solve() {

}

void output() {
    cout.precision(0);
    cout << fixed;
    cout << x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        input();
        solve();
        output();
    }
}