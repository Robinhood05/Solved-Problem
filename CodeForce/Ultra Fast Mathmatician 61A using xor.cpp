
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string a,b;
    cin>>a>>b;
    vector<int>s;
    int previous_size =  a.length();
    //int next_size = 2*previous_size ;
    
    vector<int>aa;
    vector<int>bb;
    vector<int>ans;
    
     for (char c : a) {
        aa.push_back(c - '0'); 
    }
    for( char c : b) {
        bb.push_back(c - '0');
    }
    
   for(int i = 0;i<previous_size ;i++){
       int x = aa[i] ^ bb[i];
       cout << x;
   }
   cout<<endl;
    
   
    
    
    

    return 0;
}
