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
    // by using  And operation to check the num is power of 2 or not?

   //the final ans;
    int ans = val & (val-1);
    if(ans==0){
        cout<<"it is power of 2"<<endl;
    
    }
    else{
        cout<<"it is not power of 2"<<endl;
    }
    // for converting the ans into binary value
  

    return 0;
}