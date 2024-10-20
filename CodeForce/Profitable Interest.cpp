#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int test;
    cin >> test;  
    
    while (test--) {
         int a, b;  
        cin >> a >> b;  
        
        if(a>=b){
            cout<<a<<endl;
        }
        else {
            cout<<max(a-(b-a), 0)<<endl;
        }
    
    }

    return 0;
}
