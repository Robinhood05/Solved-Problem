
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    
    float n;
    cin>>n;
    float total = (n*100);
    
    float juice = 0;
    while(n--){
        float x;
        cin>>x;
        juice = juice + x;
    }
    
    float ans = (juice/total) * 100;
    cout<<ans;
    
    

    return 0;
}
