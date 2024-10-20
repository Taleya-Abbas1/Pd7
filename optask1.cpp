#include<iostream>
using namespace std;

main()
{
  
 int rowSize = 15 ;
 

 for(int row = 0  ; row < rowSize ; row++ )
  {
   int numAsterick = 15 - row ;
  for(int col = 0 ; col < numAsterick ; col++ )
  {
    cout<< "*" ;
  }
  cout <<  endl ;
  }

}

