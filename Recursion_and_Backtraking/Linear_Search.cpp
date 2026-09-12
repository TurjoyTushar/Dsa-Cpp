#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int target,int i=0){
    if(i<=n-1){
        if(arr[i]==target){
    return i+1;
}
else{
    return LinearSearch(arr,n,target,i+1);
}
    }

return -1;

}
int main(){
int a[]={2,2,34,4,5,56,78};
int target;
cin>>target;
int n=sizeof(a)/sizeof(a[0]);
cout<<LinearSearch(a,n,target);

return 0;}
