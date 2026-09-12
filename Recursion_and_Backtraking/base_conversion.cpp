#include<bits/stdc++.h>
using namespace std;
void print(vector<int>ans,int i)
{
    if(i==0)
    {
        cout<<ans[i]<<endl;
        return ;
    }
    cout<<ans[i];
    print(ans,i-1);
}
void conversion(int n, vector<int>ans={})
{
    if(n==0)
    {
        print(ans,ans.size()-1);
        return ;
    }
    int remi=n%2;
    ans.push_back(remi);
    n=n/2;
    conversion(n,ans);

}
void test(int t)
{
    if(t==0)
    {
        return ;
    }
    int n;
    cin>>n;
    conversion(n,{});
    test(t-1);
}

int main()
{
int t;
cin>>t;

test(t);

    return 0;
}
