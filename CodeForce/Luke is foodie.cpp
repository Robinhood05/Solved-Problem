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

    int t;
    cin>>t;

    test(t){

        ll number_of_piles;

        ll maximum_difference ;

        cin>>number_of_piles;
        cin>>maximum_difference;

        vector<ll>vec;

        for(int i = 0;i<number_of_piles;i++){

            ll x;
            cin>>x;
            vec.pb(x);
        }

        int selected_index ;
        int start = 0;

        int count = 0 ;

        ll mini = vec[0];
        ll maxi = vec[0];

        for(int i = 1 ;i<vec.size() ;++i){

              mini = min(mini,vec[i]);
              maxi = max(maxi,vec[i]);

              ll max_diff = (mini+maximum_difference);
              ll mini_diff = abs(maxi-maximum_difference);

              if(mini_diff>max_diff){
                mini=vec[i];
                maxi = vec[i];

                count+=1;


              }
            


        }


  cout<<count<<endl;



    }
    return 0;
}

