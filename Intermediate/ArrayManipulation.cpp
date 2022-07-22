#include <vector>
#include <iostream>

using namespace std;

/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> res(n+1, 0);
        
    for (const vector<int> &v : queries) {
        res[v[0]-1] += v[2];
        res[v[1]] -= v[2];
    }
    
    long max = res[0];
    
    vector<long>::const_iterator tmp = res.begin();
        
    for (vector<long>::iterator it = ++res.begin(); it != res.end(); it++) {
        *it += *tmp;
        max = *it * (*it > max) + max * (*it <= max);
        tmp = it;
    }
    return max;
}

int main()
{
    int n, m, num, counter = 0;
    cin >> n >> m;
    
    vector<vector<int>> queries;
    
    while (counter < m) {
        queries.push_back({0, 0, 0});
        for (int i = 0; i < 3; i++) {
            cin >> num;
            queries[counter][i] = num;
        }
        counter++;
    }
    
    cout << arrayManipulation(n, queries) << endl;
    return 0;
        
}
