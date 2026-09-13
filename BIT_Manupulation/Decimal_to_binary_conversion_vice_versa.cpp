#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << " enter the number n ";
    cin >> n;
    // store in a int value
    //decimal to binary;
    int bin = 0;
    int place=1;
    while (n >= 1)
    {
        int rem = n % 2;
       bin+=rem*place;
       place*=10;
       n/=2;
       
    }
    cout << bin << endl;

    //binary to decimal

    int power=1;
    int decimal=0;
    while(bin!=0){
        int rem=bin%10;
        decimal+=(rem*(power));
        power*=2;
        bin/=10;

    }
    cout<<decimal<<endl;

    return 0;
}