#include <iostream>
#include <vector>
using namespace std;

int Number_of_happy_people(vector<int> vec, int n, int r, int total_member) {
    int row_occupied = 0;
    int happy_people = 0;
    
    // Calculate the number of rows occupied by families
    for (int i = 0; i < n; i++) {
        row_occupied += vec[i] / 2;  // Each family occupies floor(member / 2) rows
    }
    
    // Number of happy people initially from occupied rows
    happy_people = 2 * row_occupied;
    
    // Remaining people to seat
    int remaining_people = total_member - happy_people;
    int row_available = r - row_occupied;

    // If there are more remaining people than available rows, handle accordingly
    if (remaining_people <= row_available) {
        return happy_people + remaining_people;
    }
    
    // Now seat remaining people in the available rows
    vector<pair<int, int>> v(row_available, {0, 0});
    int index = 0;
    
    // Fill the 'first' seat of the remaining available rows
    while (remaining_people > 0 && index < row_available) {
        v[index].first = 1;
        remaining_people -= 1;
        index++;
    }

    int index2 = 0;
    
    // Fill the 'second' seat if there are still remaining people
    while (remaining_people > 0 && index2 < row_available) {
        v[index2].second = 1;
        remaining_people -= 1;
        index2++;
    }
    
    // Count how many people are happy by sitting in the first seat only
    int more_happy = 0;
    for (int i = 0; i < row_available; i++) {
        if (v[i].first == 1 && v[i].second == 0) {
            more_happy += 1;
        }
    }
    
    // Add these extra happy people to the total
    happy_people += more_happy;
    
    return happy_people;
}

//I'm so happy to solve that

int main() {
    int test;
    cin >> test;
    
    while (test--) {
        int n, r;
        cin >> n >> r;
        vector<int> vec;
        int total_member = 0;
        
        // Read the number of members for each family
        for (int i = 0; i < n; i++) {
            int member;
            cin >> member;
            total_member += member;
            vec.push_back(member);
        }

        // Calculate and print the number of happy people
        int ans = Number_of_happy_people(vec, n, r, total_member);
        cout << ans << endl;
    }

    return 0;
}
