#include <bits/stdc++.h>

using namespace std;

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if (!head1)
        return head2;
    if (!head2)
        return head1;
    SinglyLinkedList res;
    while (head1 != nullptr || head2 != nullptr)
    {
        cerr << "Test: " << head1->data << " | " << head2->data << endl;
        if (head1->data <= head2->data)
        {
            res.insert_node(head1->data);
            if (head1->next)
                head1 = head1->next;
            else {
                while (head2->next) {
                    res.insert_node(head2->data);
                    head2 = head2->next;
                }
                res.insert_node(head2->data);
                return res.head;
            }
        }
        else {
            res.insert_node(head2->data);
            if (head2->next)
                head2 = head2->next;
            else {
                while (head1->next)
                {
                    res.insert_node(head1->data);
                    head1 = head1->next;
                }
                res.insert_node(head1->data);
                return res.head;
            }
        }
    }
    return res.head;
}
