#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>a,int n,vector<int>ds,int freq[]){
    if(ds.size()==n){
        for(int j=0;j<n;j++){
            cout<<ds[j]<<",";
        }
        cout<<endl;
        return;
    }


for(int i=0;i<n;i++){
        if(!freq[i]){
            freq[i]=1;
            ds.push_back(a[i]);
            permutation(a,n,ds,freq);
            freq[i]=0;
            ds.pop_back();
        }
}
}
int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int>ds;
int freq[n]={0};
permutation(a,n,ds,freq);


return 0;
}
