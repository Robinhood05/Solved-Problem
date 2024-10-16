#include <bits/stdc++.h>
using namespace std;


bool yes(int a[],int n){
    
    for(int i = 0 ;i<n-1 ; i++){
        if(a[i]>a[i+1]){
            return false;
        }
        
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        // your code goes here
        bool ans = yes(d,n);
        if(ans){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

}
