#include<time.h>
#include<iostream>
using namespace std;
  
   int main()
{
           int a1=12,a2=20,a3=23;
          if (a1 > a2)
                if (a1 > a3)
                   printf("a1");
                else 
                   printf("a3");
           else if(a2 > a3)
              printf("a2"); 
           else
                 printf("a3");           

}