
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    
    int s,n;
    cin>>s>>n;
    
    vector<pair<int,int>>v(n);
    
    for(int i = 0 ;i <n;i++){
        int x,y;
      cin>>v[i].first>>v[i].second;
    }
    
    sort(v.begin(),v.end());
    
    int strength = s;
    
    bool ans = true;
    int index = 0;
    while(index<n){
        if(v[index].first<strength){
            strength = (strength + v[index].second);
        }
        else {
            ans = false;
          break;
        }
        index ++;
        
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}
