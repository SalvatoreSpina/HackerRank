#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
 
    DoublyLinkedListNode *temp = NULL; 
    DoublyLinkedListNode *current = llist; 

    while (current != NULL) { 
        temp = current->prev; 
        current->prev = current->next; 
        current->next = temp;             
        current = current->prev; 
    }
    
    if (temp != NULL ) 
        llist = temp->prev;

    return llist;
}