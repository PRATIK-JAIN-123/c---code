for(int i=0;i<10;i++){
        if(arr[i]==0){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }