#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout << "YES\n"
#define nn cout << "NO\n"

void solve() {
    // moor voting algorithm for finding the majority element in an array(if the array has only two elements)
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=a[i];
        }
        if(ans==a[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}