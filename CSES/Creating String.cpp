#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int n = s.length();
    
    sort(s.begin(), s.end());
    
    set<string> unique;
        unique.insert(s);
    
    while (next_permutation(s.begin(), s.end())) {
        unique.insert(s);
    }

    cout << unique.size() << endl;
    for (string str : unique) {
        cout << str << endl;
    }

    return 0;
}
