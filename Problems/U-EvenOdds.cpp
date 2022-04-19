#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    long long n,k,evenan,oddan;cin>>n>>k;
    if (n % 2 == 1)
    {

        if (k > ((n + 1) / 2))
        {
            evenan = 2 + (k - ((n + 1) / 2) -1)*2;
            cout<<evenan;
            return 0;
        }
        else if(k<=((n+1)/2))
        {
            oddan = 1 + (k - 1) * 2;
            cout<<oddan;
            return 0;
        }
    }
    else
    {
        if(k>(n/2))
        {
            evenan = 2 + (k - (n / 2) - 1) * 2;
            cout<<evenan;
            return 0;
        }
        else if(k<=(n/2))
        {
            oddan= 1 + (k - 1) * 2;
            cout<<oddan;
            return 0;
        }
    }

    return 0;

}