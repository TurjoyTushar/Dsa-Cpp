#include<bits/stdc++.h>
using namespace std;
void digit(string n,int i=0){
if(i<=n.size()-1){
   cout<<n[i]<<" ";
   digit(n,i+1);
}
return ;
}
void test(int n){
if(n!=0){
        string a;
        cin>>a;
    digit(a);
    cout<<endl;
   test(n-1);
}

}

int main(){
    int t;
    cin>>t;
   test(t);
return 0;
}
