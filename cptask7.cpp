#include<iostream>
using namespace std;
main()
{
  int num ;
  int treated = 0 ;
  int doctor  = 7 ;
  int untreated = 0 ;
  cout<<"Enter the number of days you visited you hospital:" ;
  cin>>num;
  for(int i = 1 ; i<=num ; i++)
  {
   int n ;
   cout<<"Number of patients who visited hospital on Day "<<i<<":" ;
   cin>>n; 
   
   treated += doctor ;
   if(i%3 && i !=0 )
   {
     if(untreated > treated)
     {
     doctor++ ;
     }
   }
    if(n<doctor)
   { 
     treated += n;
   }
   else
   {
       treated +=doctor ;
       untreated += n - doctor ;
   }
  }
  cout<< treated<<endl ;
  cout<< untreated ;




}