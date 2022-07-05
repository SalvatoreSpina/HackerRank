#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    stack<int> inbox, outbox;
    int num_query, mode, num;
    cin >> num_query;
    while (num_query--)
    {
        cin >> mode;
        if (mode == 1) // Enqueue
            cin >> num, inbox.push(num);
        else if (mode == 2 || mode == 3) // Dequeue || Print
        {
            if (outbox.empty()) {
                while (!inbox.empty()) {
                    outbox.push(inbox.top());
                    inbox.pop();
                }
            }
            if (mode == 2)
                outbox.pop();
            else
                cout << outbox.top() << endl;
        }
    }

    return 0;
}
