#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

    int n,m;cin>>n>>m;
    int lineNO=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(lineNO%2==0)
                cout<<"#";
            else
            {
                if((lineNO+1)%2==0 && (lineNO+1)%4!=0)
                {
                    if (j!=m-1)
                        cout<<".";
                    else
                        cout<<"#";
                }
                else
                {
                    if (j!=0)
                        cout<<".";
                    else
                        cout<<"#";
                }
            }
        }
        cout<<"\n";
        lineNO++;
    }

}