#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout << "YES\n"
#define nn cout << "NO\n"

void insertion(vector<int>&a,int n) {
    for(int i=1;i<n;i++){
        int j=i-1,curr=a[i];
        while(j>=0&&curr<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=curr;
    }
    
}

int main() {
   int n;
   cin>>n;
   vector<int>nums(n);
   for(int i=0;i<n;i++){
    cin>>nums[i];
   }
   insertion(nums,nums.size());
   for(int i:nums){
    cout<<i<<" ";
   }cout<<endl;
    return 0;
}