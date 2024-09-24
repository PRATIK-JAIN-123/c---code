// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    using namespace std;
    int i,j,k,a[10][10],n,m;
    cout<<"enter the size of 2d array"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    int ans=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           for(k=0;k<n;k++){
               if(j!=k){
               if(a[i][j]==a[i][k]){
                   ans=0;
                   cout<<a[i][j]<<" and "<< a[i][k]<<" in row "<<i+1<<" "<<endl;
                   exit(0);
               }
               }
           }
        }
            
    }
    if(ans){
        cout<<"its right "<<" ";
    }
    else 
    cout<<"wrong"<<" ";
}