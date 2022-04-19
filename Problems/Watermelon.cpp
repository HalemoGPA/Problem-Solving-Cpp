#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

short int w;cin>>w;
    for (int i=2;i<w;i+=2)
    {
        if ((w-i)%2==0)
        {
            cout<<"YES";
            return 0;
        }

    }
    cout<<"NO";



}