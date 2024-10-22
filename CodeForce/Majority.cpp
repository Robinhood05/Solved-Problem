#include <iostream>
#include <string>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int size;
        cin >> size;

        string s;
        cin >> s;
        bool ans = false;

        if (s.find("111") != string::npos) {
            ans = true;
        }

        int count_11 = 0;
        size_t pos = s.find("11");
        while (pos != string::npos) {
            count_11++;
            pos = s.find("11", pos + 2);  
        }

        if (count_11 >= 2) {
            ans = true;
        }

        if (s.find("11") != string::npos && (s[0] == '1' || s.back() == '1')) {
            ans = true;
        }

        if (s[0] == '1' && s.back() == '1') {
            ans = true;
        }

        if (ans) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
