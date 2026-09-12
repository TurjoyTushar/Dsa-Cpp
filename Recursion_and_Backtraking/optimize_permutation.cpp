#include<bits/stdc++.h>
using namespace std;
void optimize_permu(int index,vector<int>&a,int n){
if(index==n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
for(int j=index;j<n;j++){
    swap(a[index],a[j]);
    optimize_permu(index+1,a,n);
    swap(a[index],a[j]);

}

}

int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
optimize_permu(0,a,n);



return 0;
}
