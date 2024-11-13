
#include<iostream>
#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define test(test) while (test--)
#define FOR(i, start, end) for (int i = start; i < end; ++i)
#define For(n) for (int i = 0; i < n; ++i)

using namespace std;



int main() {
    fast_io();
    int n;
    cin>>n;
    while (n--) {
        //cin >> n;

        int number_of_orange;
        cin>>number_of_orange;
        int slice;
        cin>>slice;

        int maxi = (12*number_of_orange);
        int mini = (10*number_of_orange);

        if(slice<mini || slice >maxi){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }

      




      




       
}

    return 0;
}
