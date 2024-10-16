#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<pair<int, int>> &p) {
    pair<int, int> first_element = p[0];
    for (int i = 1; i < p.size(); i++) {
        p[i - 1] = p[i];  
    }
    p[p.size() - 1] = first_element; 
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> originalArray(n);  
    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;  
        originalArray[i] = x;
        p.push_back(make_pair(i, x));  
    }

    int last_index = -1; 
    while (!p.empty()) {
        
        int index = p[0].first;
        int remaining_candies = p[0].second;

        
        remaining_candies -= m;

        p.erase(p.begin());

        if (remaining_candies <= 0) {
            last_index = index; 
        } else {
            p.push_back(make_pair(index, remaining_candies));
        }
    }

    cout << last_index + 1 << endl; 
    return 0;
}
