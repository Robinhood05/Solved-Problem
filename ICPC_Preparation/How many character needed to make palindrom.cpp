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


// Find sub string available or not
bool contains_Substring(const string& str, const string& sub) {
    return str.find(sub) != string::npos; 
}

// Sort vector pair's second value
void sort_By_Highest_Pair_Second(vector<pair<int, long long int>>& vec) {
    sort(vec.begin(), vec.end(), [](const pair<int, long long int>& a, const pair<int, long long int>& b) {
        return a.second > b.second;
    });
}

// Total sum between 1 to n
long long int get_Total_Of_N(const vector<pair<int, long long int>>& vec, int n) {
    long long int total = 0;
    for (int i = 0; i < min(n, static_cast<int>(vec.size())); i++) {
        total += vec[i].second;
    }
    return total;
}

int solve(ll int n,ll int x)
{   
    
  ll count=0;

    for(int i =1 ;i<=x;++i){

        int a = i;

        for(int j = 1;j<=x;++j){

            

            ll int max_c_for_x = x - i-j;

            if(max_c_for_x<1){
                break;
            }
            if(i*j>n)break;
            ll int max_c_for_n = (n-i*j)/ (i+j);

            ll int taken = min(max_c_for_n,max_c_for_x);

            if(taken>=1){
                count+=taken;
            }
            






        }


    }
 
    



return count;
}

void count_frequency(string s){

 unordered_map<char, int> hashMap;

for (int i = 0; i < s.length(); ++i) {
    char a = s[i];
    hashMap[a]++;
}

int odd_count = 0;

for (auto c : hashMap) {
    int frequency = c.second; 

    if (frequency % 2 != 0) {
        odd_count += 1;
    }
}

if(odd_count<=1){
    cout<<0<<endl;
}
else {
    cout<<(odd_count-1)<<endl;
}



}

int main() {
    fast_io();

    int t;
    cin >> t;

    test(t){

        string chef;
        cin>>chef;

        count_frequency(chef);
        
        

    }
   
   
    return 0;
}
