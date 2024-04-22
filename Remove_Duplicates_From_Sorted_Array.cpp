public:
    int removeDuplicates(vector<int>& nums) {
        int n = size(nums);
        int k=n;
        for(int i=1;i<k;i++){
            int j=i;
            while(j<k && nums[i-1]==nums[j]){
                j++;
            }
            if(j>i){
                k=k-(j-i);
                for(int m=i;m<k;m++){
                    nums[m]=nums[m+j-i];
                }
            }
        }
        return k;
    }
