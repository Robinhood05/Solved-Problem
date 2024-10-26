#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int counts = 0;
unordered_set<long long int> s;

bool check_sort(vector<long long int> v) {
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] > v[i - 1]) {
            return false;
        }
    }
    return true;
}

int stalin_sort(vector<long long int> v) {
    counts++;
    vector<long long int> new_vector;

    if (!v.empty()) {
        new_vector.push_back(v[0]);
    }

    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < new_vector.back()) {
            new_vector.push_back(v[i]);
        } else {
            s.insert(v[i]);
           // cout << v[i] << " will be removed" << endl;
        }
    }

    if (check_sort(new_vector)) {
        return counts;
    } else {
        //cout << "Stalin called one time" << endl;
        return stalin_sort(new_vector); 
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int size;
        cin >> size;

        vector<long long int> v(size);
        for (int i = 0; i < size; i++) {
            cin >> v[i];
        }

        if (check_sort(v)) {
            cout << 0 << endl;
        } else {
            int ans = stalin_sort(v);
            cout << ans+1 << endl;
        }
    }

    return 0;
}

//link: https://codeforces.com/contest/2027/problem/B
