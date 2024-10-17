
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  vector<int>v;
  
  for(int i = 0 ;i < 7;i++){
      int x;
      cin>>x;
      v.push_back(x);
  }
  int index = 0;
  int read = 0;
  int i = 6;
   while(read<n){
       
       if(index == 6){
           read = read + v[index];
           if(read>= n){
               index = index +1;
               break;
           }
           //if(read)
           index = 0;
           continue;
       }
       index = index % i;
       
       read = read + v[index];
       
       index++;
       //cout<<"Page readed "<<read<<" now at index "<<index<<endl;
       
   }
  // if(index==6)
   cout<<index <<endl;
  
  
    return 0;
}
