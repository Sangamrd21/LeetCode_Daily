public:
    int findNumbers(vector<int>& nums) {
        int even_count=0;
        int count=0;
        for(int i=0;i<size(nums);i++){
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                count++;
            }
            if(count%2==0){
                even_count++;
            }
            count=0;
        }
        return even_count;
    }
