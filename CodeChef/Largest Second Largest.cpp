#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int second_maxi = INT_MIN;
        int maximum ;
        int n;
        cin>>n;
        //int a[n];
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        
        sort(a.begin(),a.end());
        maximum = a[a.size()-1];
        
        for(int i = 0; i<n;i++){
            if(a[i]>second_maxi && a[i]<maximum){
                second_maxi = a[i];
            }
        }
       cout<<second_maxi + maximum<<endl; 
    }
   // ;
}
