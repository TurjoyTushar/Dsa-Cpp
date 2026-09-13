#include <bits/stdc++.h>
using namespace std;
int main()
{
    // brute forces methods ->
    int n;
    cout<<"enter the number = ";
    cin>>n;
      int val=n;
    int cnt=0;
 
   while(n>0){
    if(n&1>0)cnt++;
    n>>=1;

   }
   cout<<"the representation of the n in binary is = ";
   //converting the decimal to binay using bit
 
   int pos=1;
   int bin=0;
   while(val>0){
        bin+=(val&1)*pos;
        pos*=10;
        val>>=1;
   }
   cout<<bin<<endl;
   cout<<"the total count of set bit in n is = ";
   cout<<cnt<<endl;

// there is a optimization is the the two loop can be one
// while(n>0){
//     if(n&1)cnt++;
//     bin+=(n&1)*pos;
//     n>>=1
// }
//   cout<<bin<<cnt<<endl; 

  
   

    return 0;
}