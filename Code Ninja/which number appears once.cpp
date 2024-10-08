
int getSingleElement(vector<int> &arr){


    int size = arr.size();
    int xorr =0;

    for(int i =0 ;i<size ;i++){
        xorr = xorr ^ arr[i];
    }

    return xorr;
}
