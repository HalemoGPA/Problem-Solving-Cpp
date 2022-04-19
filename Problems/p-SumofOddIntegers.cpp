#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    FIO;
    int t;cin>>t;
    while(t--)
    {
        long long  n, k;cin >> n >> k;
        if (n>=(k*k))
        {
            if (((n - (k * k)) % 2) == 0)
            {
              cout << "YES" << "\n";
            }
            else
                cout<<"No"<<"\n";
        }

        else
            cout << "NO"<<"\n";
    }



    return 0;

}