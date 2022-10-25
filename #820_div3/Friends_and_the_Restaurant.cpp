//
// Created by 99woo on 2022-09-28.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans;
vector<int> vec;

void input() {
    cin >> n;
    vec.resize(n);

    for (auto &x: vec) cin >> x;
    int tmp;
    for (auto &x: vec) {
        cin >> tmp;
        x = tmp - x;
    }
}

void solve() {
    ans = 0;
    sort(vec.begin(), vec.end());
    auto it1 = vec.begin();
    auto it2 = vec.end() - 1;

    int tmp = 0;
    while (it1 < it2) {
        if (*it1 + *it2 < 0) {
            ++it1;
        }
        else {
            ++ans;
            ++it1; --it2;
        }
    }
}

void output() {
    cout << ans << '\n';
    /*for (auto x : vec) {
        cout << x << ' ';
    }*/
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