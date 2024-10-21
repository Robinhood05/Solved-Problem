/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
long long int solve(long long int n){
    
    
    cout<<n<<" ";
    
    if(n==1){
        return 0;
    }
    
    else if(n%2==0){
        n = n/2;
        solve(n);
    }
    else {
        n = (n*3) + 1;
        solve(n);
    }
    return 0;
    
    
}
int main()
{
  long long int n ;
  cin>>n;
  solve(n);
  cout<<endl;
    return 0;
}
