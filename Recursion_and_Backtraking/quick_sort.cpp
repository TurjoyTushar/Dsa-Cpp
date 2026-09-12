#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout << "YES\n"
#define nn cout << "NO\n"
int partition(vector<int>&nums,int st,int end){
    int index=st-1,pivot=nums[end];
    for(int i=st;i<end;i++){
        if(nums[i]<=pivot){
            index++;
            swap(nums[index],nums[i]);
        }
    }
    index++;
    swap(nums[index],nums[end]);
    return index;
}

void quick(vector<int>&nums,int st,int end) {
    if(st<end){
        int piv=partition(nums,st,end);
        quick(nums,st,piv-1);
        quick(nums,piv+1,end);

    }
}

int main() {
    fast;
   int n;
   cin>>n;
   vector<int>nums(n);
   for(int i=0;i<n;i++){
    cin>>nums[i];
   }
   quick(nums,0,n);
   for(int i:nums){
    cout<<i<<" ";
   }cout<<endl;
    return 0;
}