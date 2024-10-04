int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
        set<int>s;
        
        for(int i=0 ; i<arr1.size(); i++){
            s.insert(arr1[i]);
        }
        for(int i =0 ;i<arr2.size();i++){
            s.insert(arr2[i]);
        }
        int count= 0;
        for(auto c:s ){
            count++;
        }
        return count;
    }
