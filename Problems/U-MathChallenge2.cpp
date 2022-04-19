#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string x;cin>>x;
    int sum=0;
    int num;
    for (int i=0;i<x.length();i++)
    {
        num=x[i]-'0';
        sum+=num;
    }
    if (sum%3==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}