#include<iostream>
using namespace std;
int sum(int i,int add){
if(i<1){
    return add;
}
return sum(i-1,add+i);

}


int main(){
int n;
cin>>n;
cout<<sum(n,0)<<endl;


return 0;}
