

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin>>test;
    
    while(test--){
   int n;
   cin>>n;
   vector<int>a(n);
   
   for(int &x:a) cin>>x;
   
   for(int i = 1 ;i<  n/2;i++){
       
       if (a[i]== a[i-1] || a[n-i]  == a[n-i-1]){
           swap(a[i],a[n-i-1]);
       }
       
   }
   
   int count= 0;
   for(int i = 1; i<n;i++){
       count += a[i] == a[i-1];
   }
   cout<<count<<endl;
    }
   

    return 0;
}
