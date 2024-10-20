#include<iostream>
using namespace std;
void printStar(int rowSize);
main()
{
 int rowSize ;
 cout<<"Enter the desired number of rows:" ;
 cin>>rowSize;
 printStar(rowSize);

}
void printStar(int rowSize)
{
 for(int row = 1 ; row <= rowSize ; row++ )
 {
  for(int col = 1; col <= row ; col++ )
  {
    cout<< "*" ;
  }
  cout <<  endl ;
 }





}