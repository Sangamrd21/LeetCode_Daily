public:
    void duplicateZeros(vector<int>& arr) {
        int n=size(arr);
        int j=n-1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                shiftArray(arr, i, n);
                i++;
            }
        }
    }
    void shiftArray(vector<int>& arr, int i, int n){
        int j=n-1;
        for(j=n-1;j>i;j--){
            arr[j]=arr[j-1];
        }
    }
