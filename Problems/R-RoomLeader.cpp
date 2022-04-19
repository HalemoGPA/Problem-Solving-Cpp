#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int n;cin>>n;
    string handle[n];
    int plus[n],minus[n],a[n],b[n],c[n],d[n],e[n],sum[n];
    int index;
    for (int i=0;i<n;i++)
    {
        cin>>handle[i]>>plus[i]>>minus[i]>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
        sum[i]=0;
        sum[i] += (plus[i]*100 - minus[i]*50 + a[i] + b[i] + c[i] + d[i] + e[i]);
    }
    index= max_element(sum,sum+n)-sum;
    cout<<handle[index];

    return 0;
}