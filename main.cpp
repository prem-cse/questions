#include <iostream>

using namespace std;
int A[100] ; //global variables are initialized by zero
int main()
{  int n ; int x ;
    cin>>n ;
    //filling up the element with value x at index x
   for(int i =0; i<n;i++)
    {cin>>x ;
    A[x]++ ; }
        //output in a sorted way
    for(int i=0;i<n;i++)
     for(int j=0;j<A[i];j++)
      cout<<i<<" " ;


    return 0;
}
