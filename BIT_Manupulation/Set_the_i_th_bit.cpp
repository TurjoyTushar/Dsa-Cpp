#include <bits/stdc++.h>
using namespace std;
int main()
{
    // brute forces methods ->
    int n, k;
    cout << "enter the number and the position = ";
    cin >> n >> k;
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
    cout << "before set -> ";
    cout << bin << endl;
    // by using right shift and or operation
    int left = 1 << k;
    cout << "after set -> ";

    // for converting the ans into binary value
    int ans = val | left;
    int pos = 1;
    int bin2 = 0;
    while (ans >= 1)
    {
        int rem = ans % 2;
        bin2 += (rem * pos);
        pos *= 10;
        ans /= 2;
    }
    cout << bin2 << endl;

    return 0;
}