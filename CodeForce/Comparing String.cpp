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

void solve(){
    
}

int main() {
    fast_io();

    string s,t;
    cin>>s>>t;

    if(s.length()!=t.length()){
        cout<<"NO"<<endl;
    }
    else {
        int mismatch = 0;
        //miss_match_index1=0;
        //miss_match_index2=0;
        //vector<pair<int,int>>index
        vector<int>indexs;

        for(int i = 0 ;i<s.length();++i){
            if(s[i]!=t[i]){
                mismatch+=1;
                indexs.push_back(i);

            }

        }
        if(mismatch!=2){
            cout<<"NO"<<endl;
            return 0;

        }
         int index1 = indexs[0];
            int index2 = indexs[1];
            swap(s[index1],s[index2]);

      if(s==t){
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }


    }



    return 0;
}
