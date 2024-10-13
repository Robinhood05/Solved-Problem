
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int maxi = x;
    int mini = x;
    int count = 0;
    
    for(int i = 0;i<n-1;i++){
        int y;
        cin>>y;
        if(maxi<y){
            count++;
            maxi = y;
        }
        else if(mini>y){
            count++;
            mini = y;
        }
        
    }
    cout<<count<<endl;

    return 0;
}
