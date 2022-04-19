#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string x,y;cin>>x>>y;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]!=y[x.length()-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";





    return 0;
}