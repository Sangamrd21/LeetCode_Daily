int j=0;
        int k=0;
        int low=heights[0];
        for(int i=0;i<size(heights);i++){
            std::cout<<"i="<<i;
            std::cout<<"  j="<<j<<endl;
            if(heights[i]<=low){
                if(heights[i]<heights[j]){
                    k++;
                }
                low=heights[i];
                heights[i]=heights[j];
                heights[j]=low;
                j++;
            }
            if(i==size(heights)-1 && heights[i]<heights[j]){
                low=heights[i];
                heights[i]=heights[j];
                heights[j]=low;
                i=j-1;
                k=k+2;
            }
            else if(i==size(heights)-1){
                i=j-1;
                low =heights[j];
            }
            if(j==size(heights)){
                break;
            }
            std::cout<<"[ ";
            for(int i=0;i<size(heights);i++){
                std::cout<<heights[i]<<" ";
            }
            std::cout<<" ]"<<endl;
            std::cout<<"----------------"<<endl;
        }
