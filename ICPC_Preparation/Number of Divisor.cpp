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

void solved()
{   
    ll n,x;
    cin>>n>>x;
    
    ll count=0;
 
    for (int a = 1; a <= x; ++a) {
            
            for (int b = 1; b <= x; ++b) {
                
                ll max_c_sum = x - a - b;
                if (max_c_sum < 1) break;  
 
                if (a * b >= n) break;
                ll max_c_prod = (n - a * b) / (a + b);
 
    
                ll max_c = min(max_c_sum, max_c_prod);
 
                if (max_c >= 1) {
                    count += max_c;   
                }
            }
        }
 
        cout << count << "\n";
}

int Summation_Proper_Divisor(int n) {
    if (n <= 1) return 0; 

    ll sum = 1; 
    std::set<int> uniqueMultiple;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int multiple = n / i;
            uniqueMultiple.insert(i);
            uniqueMultiple.insert(multiple);
        }
    }

    for (auto mul : uniqueMultiple) {
        sum += mul;
    }

    return sum;
}


int main() {
    fast_io();

    int t;
    cin >> t;

    test(t){

        int number;
        cin>>number;

        ll ans = Summation_Proper_Divisor(number);
        cout<<ans<<endl;

       


    }
   
   
    return 0;
}
