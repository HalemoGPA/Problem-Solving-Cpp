#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int cost,multicost,result,r;cin>>cost>>r;
    multicost=cost;
    while (true)
    {
        if(((multicost % 10) != 0 ) &&  ((multicost % 10) != r ))
        {
            multicost+=cost;
            continue;
        }
        else
        {
            result=multicost/cost;
            break;
        }
    }
    cout<<result;
}


