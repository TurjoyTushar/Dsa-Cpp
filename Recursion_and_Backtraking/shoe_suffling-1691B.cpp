#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve(){
        int n;
        cin>>n;
        int a[n];
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }

        for(int i=0;i<n;i++){
            if(freq[a[i]]<=1){
                    cout<<-1<<endl;
            return ;
            }
        }
        int index=0;
        for(int i=1;i<n;i++){
          if(a[i]==a[i-1]){
            cout<<i+1<<" ";
          }
          else{
            cout<<index+1<<" ";
            index=i;
          }
        }


  }
int main(){
     fast
    int t;
    cin>>t;
    while(t--){
            solve();
                }
    return 0;
}
