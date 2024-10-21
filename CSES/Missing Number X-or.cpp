#include <iostream>
#include <vector>

using namespace std;

int missing(int n, vector<int> v) {
    int xr = 0;  
    for (int i = 1; i <= n; i++) {
        xr = xr ^ i;
    }
    for (int nums : v) {
        xr = xr ^ nums;
    }
    return xr;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int m = missing(n, v);
    cout << m << endl;

    return 0;
}
