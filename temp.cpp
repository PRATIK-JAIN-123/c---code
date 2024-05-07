#include <iostream>
int main(){
	// Write your code here.
	// Christmas tree
	/*int spaces=5-1;
	int stars=1;
	for(int i=1;i<=5;i++){
		for(int k=1;k<=spaces;k++){
			std::cout<<" ";
		}
		for(int j=1;j<=stars;j++){
				std::cout<<"*";
		}
        std::cout<<std::endl;
		spaces-=1;
		stars+=2;
	}*/
	//binary triangle
	/*for(int i=0;i<5;i++){
		for(int j=1;j<=i+1;j++){
		   std::cout<<(i+j)%2<<" ";
		}
		std::cout<<std::endl;
	}*/
	//Symetric pattern
	/*int spaces=0;
	for(int i=0;i<3;i++){
		for(int j=3;j>i;j--){
			std::cout<<"*";
		}
		for(int k=0;k<spaces;k++){
			std::cout<<" ";
		}
		for(int l=3;l>i;l--){
			std::cout<<"*";
		}
		spaces+=2;
		std::cout<<std::endl;
	}*/
	// Hollow Rectangle
	/*for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==1 || i==5 || j==1 || j==5)
			std::cout<<"* ";
			else
			std::cout<<"  ";
		}
		std::cout<<std::endl;
	}*/
	/*int n=5;
	int count=(n*(n+1))/2;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			std::cout<<count--<<" ";
		}
		std::cout<<std::endl;
	}*/
}
