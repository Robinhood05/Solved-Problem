#include<iostream>
#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define test(test) while (test--)
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
int solve(vector<long long int>v) {

    sort(v.begin(),v.end());
        long long int sum= 0;

    for(int i = 1 ;i<v.size();i++){

        long long diff = (v[i]-v[i-1]);
        sum+= diff;

    }

  return sum;
}





int main() {
    
    fast_io();
    int t;
    cin>>t;
    test(t){
        int size;
        cin>>size;
        vector<long long>v;
        for(int i = 0 ;i<size;i++){
           long long int x;
           cin>>x;
           v.push_back(x);

        }
        int ans = solve(v);
        cout<<ans<<endl;
 
    }
    
    
    return 0;
}