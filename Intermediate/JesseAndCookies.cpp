#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'cookies' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 */
 
int cookies(int k, vector<int> A) {
    
    int count = 0;
    
    multiset<int> set (A.begin(), A.end());
    multiset<int>::iterator tmp1, tmp2;
    
    for (multiset<int>::iterator iter = set.begin(); iter != set.end(); ) {
        iter = set.begin();
        if (*iter >= k) 
            return count;
        tmp1 = tmp2 = iter;
        tmp2++;
        iter++;
        iter++;
        set.insert(*tmp1 + (*tmp2)*2);
        count++;
        set.erase(tmp1);
        set.erase(tmp2);
    }
    tmp1 = set.begin();
    if (*tmp1 >= k)
        return count;
    else
        return -1;
}
