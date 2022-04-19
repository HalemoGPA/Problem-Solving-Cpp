
#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string removal(string x)
{
    string res;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]!='0')
            res+=x[i];
    }
    return res;
}
int main()
{
    long long a,b,sum;cin>>a>>b;
    sum=a+b;
    string astring= to_string(a),bstring= to_string(b);
    string sumstring = to_string(sum);
      astring= removal(astring);
      bstring =removal (bstring );
      sumstring=removal(sumstring);
//    remove(astring.begin(), astring.end()+1, '0');
//    remove(bstring.begin(), bstring.end()+1,'0');
//    remove(sumstring.begin(), sumstring.end(), '0');
//    cout<<astring<<"\n";
//    cout<<bstring<<"\n";
//    cout<<sumstring<<"\n";

    long long numa=stoi(astring),numb=stoi(bstring),numsum=stoi(sumstring);
//    cout<<numa<<"\n";
//    cout<<numb<<"\n";
//    cout<<numsum<<"\n";
    if (numa+numb==numsum)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}