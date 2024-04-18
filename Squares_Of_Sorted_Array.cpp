public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int temp=0;
        for(int i=0;i<size(nums);i++){
            nums[i]=nums[i]*nums[i];
        }
        // for(int i=0;i<size(nums);i++){
        //     for(int j=i+1;j<size(nums);j++){
        //         if(nums[j]<nums[i]){
        //             temp=nums[j];
        //             nums[j]=nums[i];
        //             nums[i]=temp;
        //         }
        //     }
        // }
        int sizeOfArray=size(nums);
        selSort(nums, sizeOfArray);
        return nums;
    }
    void swap(vector<int>& arr, int m, int n){
        int temp = arr[m];
        arr[m] = arr[n];
        arr[n] = temp; 
    }
    int locOfSmallest(vector<int>& arr, int s, int e){
        int i=s;
        int j=i;
        while(i<=e){
            if(arr[i]<arr[j]){
                j=i;
            }
            i++;
        }
        return j;
    }
    void selSort(vector<int>& arr, int n){
        int i=0;
        while(i<n-1){
            int j = locOfSmallest(arr, i, n-1);
            swap(arr, i, j);
            i++;
        }
    }
