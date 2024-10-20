#include<iostream>
using namespace std;
int triangle( int num );
main()
{
 int num = 0 ;
 cout<<"Enter the number of triangle: ";
 cin>>num ;
 cout<<"Number of dots in triangle are:" <<triangle(num);

}
int triangle(int num)
{
 int dots = 0;
 for ( int i = 1 ; i <= num ; i ++)
 {
   dots += i ;

 }
 return dots;




}