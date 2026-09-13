#include <bits/stdc++.h>
using namespace std;
int main()
{
    // brute forces methods ->
    int n;
    cout << "enter the number  = ";
    cin >> n ;
    int val = n;
    int bin = 0;
    int place = 1;
    while (n >= 1)
    {
        int rem = n % 2;
        bin += rem * place;
        place *= 10;
        n /= 2;
    }
    cout << "before  -> ";
    cout << bin << endl;
    // by using  And operation to clean the last set bit
   
   //the final ans;
    int ans = val & val-1;
    // for converting the ans into binary value
    
    int pos = 1;
    int bin2 = 0;
    while (ans >= 1)
    {
        int rem = ans % 2;
        bin2 += (rem * pos);
        pos *= 10;
        ans /= 2;
    }
     cout<<"after -> ";
    cout << bin2 << endl;

    return 0;
}