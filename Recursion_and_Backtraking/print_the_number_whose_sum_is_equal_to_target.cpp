#include<bits/stdc++.h>
using namespace std;
void print(int i,vector<int>ds,int s,vector<int>nums,int n,int target){
    if(i==n){
        if(s==target){
            for(auto ch:ds){
                cout<<ch<<" ";
            }cout<<'\n';
        }
        return;
    }
    ds.push_back(nums[i]);
    s+=nums[i];
    print(i+1,ds,s,nums,n,target);
    ds.pop_back();
    s-=nums[i];
    print(i + 1, ds, s, nums, n, target);
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    vector<int>ds;
    print(0,ds,0,nums,n,target);
return 0;

}