#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){


short int n;cin>>n;
    char st[n];
    short int count=0;
    for (short int i=0;i<n;i++)
        cin>>st[i];
    for (short int i=1;i<n;i++)
    {
        if (st[i-1]==st[i])
            count++;

    }
    cout<<count;

    return 0;

}