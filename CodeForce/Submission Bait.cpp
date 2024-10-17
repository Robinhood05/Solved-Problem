
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int test;
    cin>>test;
    
    while(test--){
        int mx = 0;
        int n;
        cin>>n;
        //queue<T> ;
        
        map<int,int> hash;
        int arra[n];
       // int hash[n];
        for(int i = 0 ;i<n;i++){
            cin>>arra[i];
            hash[arra[i]]++;
        }
        bool found = true;
        for(auto h : hash){
            if(h.second%2!=0){
                cout<<"YES"<<endl;
                found = false;
                break;
            }
        }
        if(found){
            cout<<"NO"<<endl;
        }
        
        
        
    }

    return 0;
}
