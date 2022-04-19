#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int t;cin>>t;
    long long result[t];
    unsigned long long res,sum;
    long long substract;
    for (int i=0;i<t;i++)
    {
        long long n;
        cin>>n;


          //cout
        long long newnumber = long((log(n) / log(2))) + 1;
//        cout<<newnumber<<endl; //cout
        sum=(static_cast<long double>(n)/2)*(n+1);
        substract = (-1 * (1 - pow(2, newnumber))) / (1 - 2);

//        cout << substract << endl; //cout

        res = sum + (2 * substract);

        result[i]=res;
    }
    for (int i = 0; i < t; i++)
        cout << result[i] << "\n";


}
