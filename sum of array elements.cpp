#include <iostream>
using namespace std;
 int main ()
 { /* an array with 5 rows and 2 columns*/ 
int n ;
cin>> n;
int arr[n];//= {34,56,32,67,89,90,32,21,20}; 
int i, j; /* output each array element's value */
 for(int i=0;i<n;++i)//loop 
{
cin>>arr[i];
cout<<arr[i]<<" ";
}
int sum;
sum=0;
for(i=0;i<n;++i)//loop 
{
sum=sum+arr[i];
}
cout<<endl<<sum;
return 0;
}