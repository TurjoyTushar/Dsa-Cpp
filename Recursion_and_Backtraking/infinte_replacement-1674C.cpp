#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve(){
string a;
cin>>a;
string b;
cin>>b;
int n=b.size();
int count=0;
if(b.size()==1){
        if(b[0]=='a'){
            cout<<1<<endl;
            return ;
        }
}
for(int i=0;i<n;i++){
    if(b[i]=='a'){
        cout<<-1<<endl;
        return ;
    }
}
ll k=pow(2,a.size());
cout<<k<<endl;
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
