//
// Created by woo-young Choi on 2022/09/28.
//

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <cstdlib>

#define emb emplace_back

using namespace std;

string tiles;
vector<vector<int>> vec;
bool is_larger;

void input() {
    cin >> tiles;
}

void solve() {
    vec.clear();
    vec.resize(26);

    is_larger = tiles.front() < tiles.back();

    if (is_larger) {
        for (int i = 1; i < tiles.size() - 1; ++i) {
            if (tiles[i] >= tiles.front() && tiles[i] <= tiles.back())
                vec[tiles[i] - 'a'].emb(i + 1);
        }
    }
    else {
        for (int i = 1; i < tiles.size() - 1; ++i) {
            if (tiles[i] >= tiles.back() && tiles[i] <= tiles.front())
                vec[tiles[i] - 'a'].emb(i + 1);
        }
    }
}

void output() {
    int size = 0;
    for (const auto &v:vec) size += v.size();

    cout << abs(tiles.front() - tiles.back()) << ' ' << size + 2 << '\n';
    cout << 1 << ' ';
    ostream_iterator<int> os(cout, " ");
    if (is_larger) {
        auto it = vec.begin();
        while (it != vec.end()) {
            copy(it->begin(), it->end(), os);
            ++it;
        }
    }
    else {
        auto it = vec.rbegin();
        while (it != vec.rend()) {
            copy(it->begin(), it->end(), os);
            ++it;
        }
    }
    cout << tiles.size() << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        input();
        solve();
        output();
    }
}
