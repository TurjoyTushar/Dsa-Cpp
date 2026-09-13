#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout << " enter tow number  ";
    cin >> n>>m;
  // AND->> IF ALL TRUE THEN THE OUTPUT IS TRUE 1&1=1 OTHERWISE 0;
    int And=n&m;
    cout<<"AND = "<<And<<endl;
    // OR -> IF ONE IS TRUE THEN OUTPUT IS TURE (O|1=1 , 1|0=1,1|1=1) OTHERWISE 0;
    int OR=n|m;
    cout<<"OR = "<<OR<<endl;
    //XOR -> IF THE COUNT OF ONE IS ODD THEN THE ANSWER IS ODD
    int XOR=n^m;
    cout<<"XOR = "<<XOR<<endl;
    //NOT-> FLIP THE BIT
    int NOT=~m;
    cout<<"NOT = "<<NOT<<endl;


    return 0;
}