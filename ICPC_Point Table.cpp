#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    int index = 1;

    while (test--) {
        bool ans = false;
        int A, B, C;
        cin >> A >> B >> C;

        if (A == 6) {
            
            //If A win both match
            if ((B == 3 && C == 0) || (B == 1 && C == 1) || (C == 3 && B == 0)) {
                ans = true;
            }
        }
        else if (A == 2) {
            
            
            if ((B == 4 && C == 1) || (B == 1 && C == 4) || (B == 2 && C == 2)) {
                ans = true;
            }
        }
        else if (A == 4) {
            //if b win
            if ((B == 0 && C == 4) || (B == 3 && C == 1) || (B == 1 && C == 2)) {
                ans = true;
            }
            else if ((B == 4 && C == 0) || (B == 1 && C == 3) || (C == 1 && B == 2)) {
                ans = true;
            }
        }
        else if (A == 0) {
            if ((B == 6 && C == 3) || (B == 4 && C == 4) || (C == 6 && B == 3)) {
                ans = true;
            }
        }
        else if (A == 3) {
            if ((B == 3 && C == 3) || (B == 1 && C == 4) || (B == 0 && C == 6)) {
                ans = true;
            }
            else if ((B == 3 && C == 3) || (B == 6 && C == 0) || (B == 4 && C == 1)) {
                ans = true;
            }
        }
        else if(A==1){
            if((B==4 && C==3) || (B==1 && C==6) || B==2 && C==4){
                ans = true;
            }
            if(( B==6 && C==1) || (B==4 && C== 2) || (B==3 && C==4)){
                ans = true;
            }
        }
        else {
            ans = false;
        }

        if (ans) {
            cout << "Case " << index << ": " << "perfectus" << endl;
        }
        else {
            cout << "Case " << index << ": " << "invalidum" << endl;
        }

        index++;
    }

    return 0;
}
