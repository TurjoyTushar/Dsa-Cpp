#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << " enter the number  ";
    int k;
    cout<<"enter the number of time want to  shift -> ";
    cin>>k;
    //right shift -> shift the binary bit from 31 bit to right making it banish
    int right_shift=n>>k;
    cout<<"right shift ->>"<<right_shift<<endl;
    // left shift ->> it shift the binary bit in left to inside of 31 bit
    int left_shift=n<<k;
    cout<<"left shift -> "<<left_shift<<endl;
    


    return 0;
}