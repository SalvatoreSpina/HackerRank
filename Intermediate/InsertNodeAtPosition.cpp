#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode *current = llist;
    
    while (position-- != 1)
        current = current->next;
    
    SinglyLinkedListNode *tmp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *tmp2 = current->next;
    
    current->next = tmp;
    tmp->data = data;
    tmp->next = tmp2;
    
    return llist;
}