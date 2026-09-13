#include <bits/stdc++.h>
using namespace std;
int main()
{
    // brute forces methods ->
    int n, k;
    cout << "enter the number and the position = ";
    cin >> n >> k;
    int val = n;
    int place = 1;
    int bin = 0;
    int cnt = 0;
    while (n >= 1)
    {

        int rem = n % 2;
        if (cnt == k)
        {
            cout << ((rem == 1) ? "it a set " : "it is not a set") << endl;
        }
        bin += rem * place;
        place *= 10;
        n /= 2;
        cnt++;
    }
    cout << bin << endl;

    // optimization using left shif
    // TC(o(1));

    if (val & (1 << k))
        cout << "set" << endl;
    else
        cout << "not set" << endl;

    // optimization using right shift

    if ((val >> k) & 1)
        cout << "set" << endl;
    else
        cout << "not set" << endl;

    return 0;
}