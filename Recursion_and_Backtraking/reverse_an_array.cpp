#include<bits/stdc++.h>
using namespace std;
void print(int*a,int n,int i=0){
if(i==n){
    cout<<endl;
    return ;
}
cout<<a[i]<<" ";
print(a,n,i+1);

}

void revers(int*a,int n,int i,int j){
if(i>=j)
{    print(a,n);
    return;
}
swap(a[i],a[j]);
revers(a,n,i+1,j-1);
}

int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
revers(a,10,0,9);



return 0;
}
