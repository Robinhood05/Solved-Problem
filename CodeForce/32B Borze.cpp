
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
    

    
    cin>>s;
    string ans ="";
    
    
    for(int i=0;i<s.size();i++){
        
        if(s[i]=='.'){
            ans = ans + "0";
        }
        else if(s[i+1]=='.'){
            ans += "1";
            i++;
        }
        else {
            ans +="2";
            i = i+1;
        }
        
    }
    cout<<ans<<endl;

    return 0;
}
