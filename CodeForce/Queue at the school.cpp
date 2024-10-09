
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    
    int size;
    
    int limit;
    
    cin>>size;
    
    cin>>limit;
    
    cin>>s;
    int sw = 0;
    
    while(limit--){
    
    for(int i=0;i<size-1;i++){
        
        if(s[i]=='B' && s[i+1] == 'G'){
              swap(s[i], s[i + 1]);
                i++;
        }
        
    }
}
cout<<s<<endl;

    return 0;
}
