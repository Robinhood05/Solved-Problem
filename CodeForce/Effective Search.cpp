#include<iostream>
#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long;
#define pb push_back;
#define test(test) while (test--);
#define FOR(i, start, end) for (int i = start; i < end; ++i)
#define For(n) for (int i = 0; i < n; ++i)

using namespace std;

void sort_By_Highest_Pair_Second(vector<pair<int, long long int>>& vec);

long long int get_Total_Of_N(const vector<pair<int, long long int>>& vec, int n);



//find sub string available or not
bool contains_Substring(const string& str, const string& sub) {
	return str.find(sub) != string::npos;
}

//Sort vetor pair's second value
void sort_By_Highest_Pair_Second(vector<pair<int, long long int>>& vec) {
	sort(vec.begin(), vec.end(), [](const pair<int, long long int>& a, const pair<int, long long int>& b) {
		return a.second > b.second;
	});
}

// total sum between 1 to n

long long int get_Total_Of_N(const vector<pair<int, long long int>>& vec, int n) {
	long long int total = 0;
	for (int i = 0; i < min(n, static_cast<int>(vec.size())); i++) {
		total += vec[i].second;
	}
	return total;
}


//solve function
void solve() {

}


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
    fast_io();
    int t;
    cin >> t;
    
    vector<pair<int, int>> v(t);
    unordered_map<int, int> position_map;  
    int x;

    for (int i = 0; i < t; i++) {
        cin >> x;
        v[i] = {i, x};
        position_map[x] = i;  
    }

    int m;
    cin >> m;
    long long vasya = 0;
    long long petya = 0;

    while (m--) {
        int value;
        cin >> value;

        int idx = position_map[value];  
        vasya += idx + 1;
        petya += t - idx;
    }
    
    cout << vasya << " " << petya << endl;
    return 0;
}


