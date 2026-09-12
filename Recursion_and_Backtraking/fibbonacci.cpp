#include<iostream>
using namespace std;
int fibbonacci(int n){
if(n==0||n==1)
{
    return n;
}return fibbonacci(n-1)+fibbonacci(n-2);
}
int fact(int i){
if(i<=1){
    return 1;
}
 int j=fact(i-1);
return i*j;
}

int main(){
int n;
cin>>n;
int sum=0;
cout<<fact(fibbonacci(n))<<endl;

}
