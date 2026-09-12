#include<bits/stdc++.h>
using namespace std;
bool is_sort(int*a,int n,int i=1)
{
    if(i==n)
    {
        return true;
    }
    return (a[i]>=a[i-1])&&is_sort(a,n,i+1);

}
void input(int*arr,int n,int i=0)
{
    if(i==n)
    {
        cout<<is_sort(arr,n)<<endl;
        return ;
    }
    cin>>arr[i];
    input(arr,n,i+1);


}

int main()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);

    return 0;
}
