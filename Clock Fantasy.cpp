//A TOPH problem.
//https://toph.co/p/clock-fantasy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    double a,b;
    double sum;
    cout << fixed<< setprecision(9);
    for(int i = 0; i<tc; i++)
    {
        cin >> a;
        cin >> b;
        sum = (a*b)/2;
        cout  << sum << endl;
    }
    return 0;
}

