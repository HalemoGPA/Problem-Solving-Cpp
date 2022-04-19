#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){


 int n;cin>>n;
    int count=1;
    string x[n];
    for ( int i=0;i<n;i++)
        cin>>x[i];
    for (int i=1;i<n;i++) {
        if (x[i - 1] != x[i])
            count++;
    }
    cout<<count;

}