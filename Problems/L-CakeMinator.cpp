#include <bits/stdc++.h>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{

    int r, c;cin >> r >> c;
    char arr[30][30]={0};
    int rowsum = 0, colsum = 0, staterow = 0, statecol = 0;

    // putting data in array
    for (int i = 4; i < r + 4; i++)
    {

        for (int j = 4; j < c + 4; j++)
        {

            cin >> arr[i][j];
        }
    }

    // looping through the array
    for (int i = 4; i < r + 4; i++)
    {
        statecol = 0;
        for (int j = 4; j < c + 4; j++)
        {

            if (arr[i][j] == 'S')
            {

                statecol = 1;
                break;

            }
            statecol=0;
        }
        if (statecol == 0)
            rowsum++;


        staterow = 0;

    }
    for (int i=4;i<c+4;i++)
    {
        staterow=0;
        for (int j=4;j<r+4;j++)
        {
            if (arr[j][i] == 'S')
            {

                staterow = 1;
                break;
            }
            staterow=0;
        }
        if (staterow == 0) {

            colsum++;
        }
    }


    cout << (rowsum *c + colsum * r - (rowsum * colsum));







    return 0;
}