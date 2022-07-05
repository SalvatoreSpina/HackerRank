#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    float pcount = 0, ncount = 0, zcount = 0;
    for (int n : arr)
    {
        if (n > 0)
            pcount++;
        else if (n == 0)
            zcount++;
        else
            ncount++;
    }
    float ratiop = pcount / arr.size();
    float ratioz = zcount / arr.size();
    float ration = ncount / arr.size();
    cout << fixed<<setprecision(6)<< ratiop << endl;
    cout << fixed<<setprecision(6)<< ration << endl;
    cout << fixed<<setprecision(6)<< ratioz;
}
