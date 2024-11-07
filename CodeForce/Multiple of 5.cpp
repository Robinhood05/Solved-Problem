#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define test(test) while (test--)
#define FOR(i, start, end) for (int i = start; i < end; ++i)
#define For(n) for (int i = 0; i < n; ++i)

using namespace std;

void sort_By_Highest_Pair_Second(vector<pair<int, ll>>& vec);

ll get_Total_Of_N(const vector<pair<int, ll>>& vec, int n);

// Check if substring exists
bool contains_Substring(const string& str, const string& sub) {
	return str.find(sub) != string::npos;
}

// Sort vector by second value in descending order
void sort_By_Highest_Pair_Second(vector<pair<int, ll>>& vec) {
	sort(vec.begin(), vec.end(), [](const pair<int, ll>& a, const pair<int, ll>& b) {
		return a.second > b.second;
	});
}

// Get total sum of the second values for the first n pairs
ll get_Total_Of_N(const vector<pair<int, ll>>& vec, int n) {
	ll total = 0;
	for (int i = 0; i < min(n, static_cast<int>(vec.size())); ++i) {
		total += vec[i].second;
	}
	return total;
}

// Solve function
void solve() {

}

int main() {
	fast_io();
	int test;
	cin>>test;
	while(test--) {
		long long n;
		cin>>n;

		long long ans = 0;


		for(int i = 0; i<n; i++) {

			long long a;
			cin>>a;
			string s;
			cin>>s;
			if(s == "A") s = "10";
			ans += (a*stoi(s));
		}
		//cout<<ans<<endl;
		if(ans % 5 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}
