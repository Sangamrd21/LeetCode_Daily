public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int temp=0;
        for(int i=0;i<size(nums);i++){
            nums[i]=nums[i]*nums[i];
        }
        for(int i=0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                if(nums[j]<nums[i]){
                    temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
    }
