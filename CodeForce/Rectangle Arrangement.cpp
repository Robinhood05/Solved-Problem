#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
    
    int n;
    cin>>n;
    vector<pair<int, int>>v(n);
    vector<int>vh(n,0);
    vector<int>vw(n,0);
    for(int i=0;i<n;i++){

        cin>>vw[i]>>vh[i];
        

    }
    sort(vh.begin(), vh.end());
    sort(vw.begin(), vw.end());
    int s=0;
    int tt=vh[n-1]*2 + vw[n-1];
    for(int i=0;i<n;i++){
        
       tt+=abs(s-vw[i]);
       s=vw[i];


    }
    cout<<tt<<endl;
    

    

}



    return 0;
}
