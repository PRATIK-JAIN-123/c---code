/*#include<iostream>
using namespace std;
 class shop{
    int id[100];
    int price[100];
    public:
    int i;
    int counter=0;//if it is in private then we have to write the funtion to access that variable
    void initid(void){
        counter =0;
    }
    void setprice(void);
    void display(void);
 };

 void shop::setprice(void){
    cout<<"enter the item id " <<counter+1<<endl;
    cin>>id[counter];
    cout<<"enter the price of an item"<<endl;
    cin>>price[counter];
    counter++;
 }
 void shop:: display(void){
    for(i=0;i<counter;i++){
        cout<<"the price of item "<<id[i]<<" is "<<price[i]<<endl;
    }
 }

 int main(){
    shop a;
    //a.initid();
    a.setprice();
    a.setprice();
    a.setprice();
    a.display();
 }*/
 #include<iostream>
using namespace std;
class shop{
    int price[100];
    int id[100];
    public:
    int counter=0;
    void setprice(void);
    void getdata(void);
};

void shop::setprice(void){
    cout<<"the customer id is " << counter+1<<endl;
    cin>>id[counter];
    cout<<"the price of the object is "<<endl;
    cin>>price[counter];
    counter++;
}
void shop:: getdata(void){
    for(int i=0;i<counter;i++){
        cout<<"the customer id is "<<id[i]<<" and the price is "<<price[i]<<endl;
    }
}

int main(){
    shop a;
    a.setprice();
    a.setprice();
    a.setprice();
    a.getdata();
    return 0;
}