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

int find_tripplet(ll sum,ll target){

    //ll start = 1;
    int count= 0;

    for(int i =1 ;i<target-2;++i){

        ll cur_sum = i;
        ll start = 1;
        ll end = target-2;


        while(start<=end){

            ll total_sum = (cur_sum + start+end);

            if(sum==target){
                count+=1;
            }
            else if(total_sum>target){
                end--;
            }
            else {
                start++;
            }






        }



    }


 return count;

}



int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string queen;
        cin >> queen;

        int x = 0, y = 0;
        bool can_reach = false;

        for (int i = 0; i < n * 20; ++i) {
            char step = queen[i % n];
            if (step == 'N') {
                y += 1;
            } else if (step == 'E') {
                x += 1;
            } else if (step == 'S') {
                y -= 1;
            } else if (step == 'W') {
                x -= 1;
            }

            if (x == a && y == b) {
                can_reach = true;
                break;
            }
        }

        if (can_reach) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
