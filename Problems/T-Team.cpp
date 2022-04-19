#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

    short int n;cin>>n;
    int counter =0;
    for (int i=0;i<n;i++)
    {
        bool a,b,c;cin>>a>>b>>c;
        if( a & b | a & c | b & c)
            counter++;
    }
    cout<<counter;


}