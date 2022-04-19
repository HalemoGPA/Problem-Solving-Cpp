#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int n;cin>>n;
    int x=0;
    string ex;
    for (int i=0;i<n;i++)
    {
        cin>>ex;
        if ((ex=="++X") || ex=="X++")
            x++;
        else
            x--;
    }
    cout<<x;
    return 0;
}