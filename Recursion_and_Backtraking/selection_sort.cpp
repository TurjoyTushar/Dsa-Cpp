#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout << "YES\n"
#define nn cout << "NO\n"

void selection(vector<int>&a,int n) {
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                mini=j;
            }
        }
        swap(a[i],a[mini]);
    }
    
}

int main() {
   int n;
   cin>>n;
   vector<int>nums(n);
   for(int i=0;i<n;i++){
    cin>>nums[i];
   }
  
   selection(nums,nums.size());
    for(int i:nums)cout<<i<<" ";cout<<endl;
    return 0;
}