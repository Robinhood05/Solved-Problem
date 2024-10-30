#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i< T; i++) {
        int n, p, q;
        cin>>n>>p>> q;
        
        vector<int> v(n);
        
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        int count = 0;
        int gram = 0;
        for (int i = 0; i < n; i++) {
            if (count < p && gram + v[i] <= q) {
                count++;
                gram += v[i];
            } else {
                break;
            }
        }
        
        cout << "Case " <<i+1<< ": " << count << endl;
    }
    
    return 0;
}
