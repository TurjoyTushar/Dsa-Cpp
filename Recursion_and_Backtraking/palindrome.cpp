#include<iostream>
using namespace std;
string palindrome(int i,int n,string a){
if(i>=n/2)return a;
if(a[i]!=a[n-i-1]){
    return "-1";
}
 return palindrome(i+1,n,a);
}
int main(){
int n;
cin>>n;
string a;
cin>>a;
cout<<palindrome(0,n,a)<<endl;

return 0;}
