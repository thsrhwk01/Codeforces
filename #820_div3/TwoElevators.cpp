//
// Created by woo-young Choi on 2022/09/28.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int a, b, c;

void input() {
    cin >> a >> b >> c;
}


void output() {
    if (a-1 == abs(b - c) + c - 1) cout << 3;
    else if (a-1 < abs(b - c) + c - 1) cout << 1;
    else cout << 2;
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        input();
        output();
    }

}
