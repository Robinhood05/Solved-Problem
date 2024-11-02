#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        vector<int> melody(n);
        
        for (int j = 0; j < n; ++j) {
            cin >> melody[j]; 
        }

        bool isPerfect = true; 
        
        for (int i = 0; i < n - 1; ++i) {
            int semitone = abs(melody[i] - melody[i + 1]);
            if (semitone != 5 && semitone != 7) {
                isPerfect = false; 
                break;
            }
        }
        if(isPerfect){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
