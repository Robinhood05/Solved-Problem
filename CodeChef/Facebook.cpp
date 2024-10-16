#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        int index = 0;
        int maxi = a[0];  
        
        for(int i = 1; i < n; i++) {
            if(a[i] > maxi) {
                maxi = a[i];
                index = i;
            }
            else if(a[i] == maxi) {
                if(b[i] > b[index]) {
                    index = i;
                }
            }
        }

        // Output 1-based index
        cout << index + 1 << endl;
    }
}
