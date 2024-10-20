#include<iostream>
using namespace std;
bool isPrime(int num);
main()
{
 int num ;
 cout <<"Enter the number:";
 cin >>num;
 if (num<=1)
 {
  cout<<"Error";
 }
 else
 {
 cout<<isPrime(num);
 }
}
bool isPrime(int num)
{
  bool result ;
  result = 1;
  
  for(int i = 2 ; i<num ; i++)
  {
   
     if (num % i == 0)
     {
     result = 0 ;
     }
    
   }
   return result;
}

    

    
 
