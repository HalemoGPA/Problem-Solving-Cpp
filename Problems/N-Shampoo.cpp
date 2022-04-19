#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int V,a,b,c;cin>>V>>a>>b>>c;
    int sum=V;
    while (true)
    {
        sum-=a;
        if(sum<0) {
            cout << "F";
            break;
        }
        sum-=b;
        if(sum<0)
        {
            cout<<"M";
            break;
        }
        sum-=c;
        if(sum<0)
        {
            cout<<"T";
            break;
        }


    }


}

