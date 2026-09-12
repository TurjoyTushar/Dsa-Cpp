//
#include "bits/stdc++.h"
using namespace std;
using ll = long long;

void Solution()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int currSum=0,maxSum=0;
  for(int i=0;i<n;i++){
    currSum+=a[i];
    maxSum=max(currSum,maxSum);
    if(currSum<0)currSum=0;
  }
cout<<maxSum<<endl;6


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
   // cin >> T;
    while (T--)
    {
        Solution();
    }
    return 0;
}
