public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            for(int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
        }
        else if(n==0){
            return;
            }
        else{
            int arr[m];
            for(int i=0;i<m;i++){
                arr[i]=nums1[i];
            }   
            int i=0;
            int k=0;
            int j=0;
            while(i<m && j<n){
                if(arr[i]<nums2[j]){
                    nums1[k]=arr[i];
                    k++;
                    i++;
                }
                else{
                    nums1[k]=nums2[j];
                    j++;
                    k++;
                }
            }
            while(i<m){
                nums1[k]=arr[i];
                i++;
                k++;
            }
            while(j<n){
                nums1[k]=nums2[j];
                j++;
                k++;
            }
            }
        }
