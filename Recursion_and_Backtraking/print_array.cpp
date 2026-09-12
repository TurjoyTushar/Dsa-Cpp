#include<bits/stdc++.h>
using namespace std;
void print (int*a,int n,int i=0 )
{
    if(i==n)
    {
        cout<<endl;
        return ;
    }
    cout<<a[i]<<" ";
    print(a,n,i+1);
}
void input(int*a,int n,int i=0)
{
    if(i==n)
    {
        print(a,n);
        return ;
    }
    cin>>a[i];
    input(a,n,i+1);
}

void test(int t)
{
    if(t==0)
    {
        return ;
    }
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    test(t-1);
}

int main()
{
    int t;
    cin>>t;
    test(t);
    return 0;
}
