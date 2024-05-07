#include <stdio.h>
int main(){
    int arr[10]={1,2,0,1,0,5,0,1,3,0};
    int temp;
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}