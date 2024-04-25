public:
    int removeDuplicates(vector<int>& nums) {
        int n=size(nums);
        int k=n;
        int i=0; int j=1;
        for(int m=1;m<n;m++){
            if(nums[m-1]==nums[m]){
                k--;
            }
        }
        while(i<k-1 && j<n){
            if(nums[i]==nums[j]){
                nums[i+1]=nums[j+1];
                j++;
            }
            else{
                i++;
            }
        }
        return k;
    }
