

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    std::cout<<"Hello World";
    
    int test;
    cin>>test;
    
    while(test--){
        int n;
        cin>>n;
        vector<int>v;
        
        for(int i = 0 ;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int remv = n;
        for(int i = 0 ;i<n;i++){
            int count = i;
            
            for(int j = i+1;j<n;j++){
                if(v[i]<v[j]){
                    count++;
                }
            }
            remv = min(remv,count);
            
        }
        cout<<remv<<endl;
    }

    return 0;
}
