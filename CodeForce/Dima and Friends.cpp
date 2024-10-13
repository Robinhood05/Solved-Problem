
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=0;
   // vector<int>v(n,);
   for(int i =0;i<n;i++){
       int x ;
       cin>>x;
       f = f+ x;
   }
   
  
  int ways = 0;
  int total_friends = n+1;
  for(int i =1;i<=5;i++){
      int new_f = f + i;
      
      if(new_f % total_friends !=1){
          ways++;
      }
    
  }
  cout<<ways<<endl;
   
   

    return 0;
}
