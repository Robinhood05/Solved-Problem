#include <iostream>
#include <string>

using namespace std;

int main() {
    int test;
    cin >> test;
    
    while (test--) {
        string d1, d2;
        cin >> d1 >> d2;
        
        int match = 0;  // To count matching prefix length
        int minLength = min(d1.length(), d2.length());
        
        // Calculate the matching prefix length
        while (match < minLength && d1[match] == d2[match]) {
            match++;
        }
        
        // Calculate the total time taken
        int totalTime=0;
        if (match == 0) {
            // No matches, just type both strings fully
            totalTime = d1.length() + d2.length();
        } else {
            // Some matches, type remaining + copy
            totalTime = (d1.length() + d2.length() - match + 1); // +1 for the copy operation
        }
        
        cout << totalTime << endl;
    }

    return 0;
}
