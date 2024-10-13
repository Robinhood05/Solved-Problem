

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int lf = 0;
    int rf = 0;
    //unordered_map<int,int>mp;
    for(int i =0;i<n;i++){
        int x,y;
        cin>>x>>y;
        
        if(x==0){
            lf++;
        }
        if(y==0){
            rf++;
        }
        
        
    }
    int ld=(n-lf);
    int rd = (n-rf);
    int ans = min(ld,lf) + min(rd,rf);
    cout<<ans<<endl;
    

    return 0;
}
