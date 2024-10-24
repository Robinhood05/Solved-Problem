#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<vector<int>> matrix(n, vector<int>(n));
        
        for (int a = 0; a < n; ++a) {
            for (int b = 0; b < n; ++b) {
                cin >> matrix[a][b];
            }
        }
        
        int total = 0; 

        for (int c = 0; c < n; ++c) {
            int min_value = 0;
            for (int d = 0; c + d < n; ++d) {
                min_value = min(min_value, matrix[d][c + d]);
            }
            total += -min_value; 
        }

        for (int c = 1; c < n; ++c) {
            int min_value = 0;
            for (int d = 0; c + d < n; ++d) {
                min_value = min(min_value, matrix[c + d][d]);
            }
            total += -min_value; 
        }

        cout << total << endl;
    }
    
    return 0;
}
