public:
    void mergeSort(int* arr, int n){
        mrgSort(arr, 0, n-1);
    }
    void mrgSort(int* arr, int s, int e){
        if(s>=e){
            return;
        }
        int m=(s+e)/2;
        mrgSort(arr, s, m);
        mrgSort(arr, m+1, e);
        combine(arr, s, m, e);
    }
    void combine(int* arr, int s, int m, int e){
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
    int heightChecker(vector<int>& heights) {
        int arr[size(heights)];
        for(int i=0;i<size(heights);i++){
            arr[i]=heights[i];
        }
        mergeSort(arr,size(heights));
        int k=0;
        for(int i=0;i<size(heights);i++){
            if(heights[i]!=arr[i]){
                k++;
            }
        }
        return k;
    }
