#include <stdio.h>

int main() {
    // Write C code here
    int a[50],n,i,j,b,target,index[2];
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the target number : ");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((a[i]+a[j])==target && i!=j){
                index[0]=i;
                index[1]=j;
                printf("%d\t",index[0]);
                printf("%d\t",index[1]);
                break;
            }
        }
    }
    printf("the indexes are:\n");
    for(i=0;i<2;i++){
        printf("%d\t",index[i]);
    }
    return 0;
}
