public:
    void mergeSort(vector<int>& arr, int n){
        mrgSort(arr, 0, n-1);
    }
    void mrgSort(vector<int>& arr, int s, int e){
        if(s>=e){
            return;
        }
        int m=(s+e)/2;
        mrgSort(arr, s, m);
        mrgSort(arr, m+1, e);
        combine(arr, s, m, e);
    }
    void combine(vector<int>& arr, int s, int m, int e){
        int* buffer = new int [e+1];
        
        int k=s;
        while(k<=e){
            buffer[k]=arr[k];
            k=k+1;
        }
        int i=s;
        int j=m+1;
        k=s;
        while(i<=m && j<=e){
            if(buffer[i]<=buffer[j]){
                arr[k]=buffer[i];
                i++;
            }
            else{
                arr[k]=buffer[j];
                j++;
            }
            k++;
        }
        
        while(i<=m){
            arr[k]=buffer[i];
            i++;
            k++;
        }
        while(j<=e){
            arr[k]=buffer[j];
            j++;
            k++;
        }
        delete[] buffer;
    }
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr;
        mergeSort(nums, size(nums));
        // std::cout<<" ";
        // for(int i=0;i<size(nums);i++){
        //     std::cout<<nums[i]<<" ";
        // }
        // std::cout<<"]"<<endl;
        int i=0;
        int j=1;
        while(i<size(nums) && j<=size(nums)){
            if(nums[i]==j){
                j++; i++;
            }
            else if(nums[i]<j && (i+1)<size(nums)){
                i++;
            }
            else{
                arr.push_back(j);
                j++;
            }
        }
        return arr;
    }
