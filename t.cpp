#include<time.h>
#include<iostream>
using namespace std;
  
  void func()
 {      srand(time(NULL));
      for(int i=0;i<5;i++)
      {  
           cout<<rand()<<"\n";
      }
 } 
   int main()
{
      func();
      return 0;
}