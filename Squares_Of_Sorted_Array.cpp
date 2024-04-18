public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sizeOfArray=size(nums);
        for(int i=0;i<sizeOfArray;i++){
            nums[i]=nums[i]*nums[i];
        }
        bblSort(nums, sizeOfArray);
        return nums;
    }
    void bubble(vector<int>& arr, int n){
        int i=n-1;
        while(i>0){
            if(arr[i]<arr[i-1]){
                swap(arr, i, i-1);
            }
            i--;
        }
    }
    void bblSort(vector<int>& arr, int n){
        int i=0;
        while(i<n-1){
            bubble(arr, n);
            i++;
        }
    }
    void swap(vector<int>& arr, int m, int n){
        int temp = arr[m];
        arr[m] = arr[n];
        arr[n] = temp; 
    }
