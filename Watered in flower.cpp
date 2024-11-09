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

int main() {
    //optimize();

    int testCases;
    cin >> testCases;
    int index=1;
    while (testCases--) {

        int flower,days;
        cin>>flower>>days;
        int total=0;

        for(int i = 0 ;i<flower;i++){

            int xi,ki;

            cin>>xi>>ki;

            int water = days/xi;
            total+=water;
        }

        cout<<"Case "<<index<<": "<<total<<endl;

       
    }
    return 0;
}

