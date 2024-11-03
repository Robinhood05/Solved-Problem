#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;
    vector<bool> v(4, false);

    cin >> a >> b;
    v[a] = true;
    v[b] = true;

    for (int i = 1; i <= 3; i++) {
        if (!v[i]) {
            cout << i << endl;
        }
    }

    return 0;
}
