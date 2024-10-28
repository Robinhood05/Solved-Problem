#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;

        int r, c;
        cin >> r >> c;

        long long row_left = (n - r);
        long long col_left = (m - c);

        long long ans = row_left * (2LL * m - 1) + col_left;

        cout << ans << endl;
    }

    return 0;
}
