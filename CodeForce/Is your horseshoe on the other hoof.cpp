
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    
   
   set<int>s;
   for(int i = 0;i<4;i++){
       int x;
       cin>>x;
       s.insert(x);
   }
   int size = s.size();
   cout<<abs(4-size)<<endl;
   
    return 0;
}
