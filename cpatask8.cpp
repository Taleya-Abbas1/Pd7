#include<iostream>
#include<iomanip>
using namespace std;
main()
{
  double count , average , p1  , p2 , p3 ;
  cout<<"Enter the count of cargo for transportation:";
  cin>>count ;  
  for(int i = 1 ; i<= count ; i++)
  {
   int cargo;
   cout<<"Enter the tonage of cargo:" <<i<<":";
   cin>>cargo;
   if(cargo<=3)
   {
     p1 += cargo ;
   } 
   if(cargo> 3 && cargo<=11)
   {
     p2 += cargo ;
   }
   if(cargo > 14)
   {
     p3 += cargo;
   }
  }
  cout<< fixed ;
  cout<< setprecision (2);
  cout<<((p1*200)+(p2*175)+(p3*120))/(p1+p2+p3) <<"%"<<endl ;
  cout<<(p1/(p1+p2+p3))*100.0 <<"%" <<endl;
  cout<<(p2/(p1+p2+p3))*100.0 <<"%" <<endl;
  cout<<(p3/(p1+p2+p3))*100.0 <<"%" <<endl;
  
}



