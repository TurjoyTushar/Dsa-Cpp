#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout << "YES\n"
#define nn cout << "NO\n"

void merge(vector<int>&nums,int st,int mid,int end) {
    int i=st,j=mid+1;
    vector<int>temp;
    while(i<=mid&&j<=end){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(nums[j]);
        j++;
    }
    for(int in=0;in<temp.size();in++){
        nums[in+st]=temp[in];
    }

    
}
void mergeSort(vector<int>&nums,int st,int end){
    int mid=(st+end)/2;
    if(st<end){
        mergeSort(nums,st,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,st,mid,end);

    }
}

int main() {
    fast;
    vector<int> nums={1,3,9,1,2};
    mergeSort(nums,0,nums.size());
    for(int i=0;i<5;i++){
        cout<<nums[i]<<" ";
    }
   
    return 0;
}