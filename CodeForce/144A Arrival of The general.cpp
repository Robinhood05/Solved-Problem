#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> v(size);  

    int mini = INT_MAX;   
    int maxi = INT_MIN;   
    int max_index = -1;   
    int min_index = -1;   

    for (int i = 0; i < size; i++) {
        cin >> v[i];

        if (v[i] < mini) {
            mini = v[i];
            min_index = i;
        } else if (v[i] == mini) {
            min_index = max(min_index, i);
        }

        if (v[i] > maxi) {
            maxi = v[i];
            max_index = i;
        } else if (v[i] == maxi) {
            max_index = min(max_index, i);
        }
    }

    //cout << "Maximum Value: " << maxi << ", Index of max = " << max_index << endl;
    //cout << "Minimum Value: " << mini << ", Index of min = " << min_index << endl;
    
    if(min_index<max_index){
        int ans = (size - min_index) + (max_index -1);
        cout<<ans-1;
    }
    else if(min_index == size-1 && max_index == 0){
        cout<<0<<endl;
    }
    else {
        int ans = ((size-1)- min_index ) + (max_index);
        cout<<ans<<endl;
    }
   
   

    return 0;
}
