#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //std::cout<<"Hello World";
    int test;
    cin>>test;
    while(test--){
        long long int n;
        cin>>n;
        
        vector<int>a(n);
       long long int sum = 0;
        
        for(int &x:a) cin>>x;
        for(int i = 0 ;i<n;i++){
            sum = sum+ a[i];
        }
        cout<<sum - 2* a[n-2]<<endl;
        
    }

    return 0;
}
