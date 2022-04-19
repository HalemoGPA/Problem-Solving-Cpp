
#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string x;cin>>x;
    char  y=x[x.length()-1];
    int res=y-'0';
    if (res%2==0)
        cout<<"Even";
    else
        cout<<"Odd";

    return 0;
}