#include <bits/stdc++.h>
using namespace std;
int main()
{
   // we swap the element of and array;
   int n;
 cout<<"enter the number of array size "<<endl;
 cin>>n;
 cout<<"enter the array ";
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 cout<<" brefore swaping the array = ";
 int i=0,j=n-1;
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
 // by using xor operation 
 while(i<j){
    a[i]=a[i]^a[j];
    a[j]=a[i]^a[j];
    a[i]=a[i]^a[j];
    i++;
    j--;
 }
 cout<<" after swaping the array = ";
 for(int i=0;i<n ;i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
    


    return 0;
}