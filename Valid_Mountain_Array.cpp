public:
    bool validMountainArray(vector<int>& arr) {
        int n=size(arr);
        if(n<3){
            return false;
        }
        int i=1;
        int j=0;
        while(i<n-1 && arr[i-1]<arr[i] ){
            i++;
        }
        if(i>1){
            j=i;
            while(j<n && arr[j-1]>arr[j]){
                j++;
            }
        }
        if(j==n){
            return true;
        }
        return false;
    }
