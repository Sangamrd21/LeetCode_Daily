public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sizeOfArray=size(nums);
        for(int i=0;i<sizeOfArray;i++){
            nums[i]=nums[i]*nums[i];
        }
        insSort(nums, sizeOfArray);
        return nums;
    }
    void insSort(vector<int>& arr, int n){
        int i=1;
        while(i<n){
            insertIth(arr, n, i);
            i++;
        }
    }
    void insertIth(vector<int>& arr, int n, int i){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
