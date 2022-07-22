#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    multiset<int> heap;
    int queries, mode, num, min;
    cin >> queries;
      
    while (queries--) {
        cin >> mode;
        if (mode == 1) {
            cin >> num;
            heap.insert(num);
        }
        else if (mode == 2) {
            cin >> num;
            heap.erase(num);
        }
        else if (mode == 3) {
            cout << *heap.begin() << endl;
        }
    }
    return 0;
}