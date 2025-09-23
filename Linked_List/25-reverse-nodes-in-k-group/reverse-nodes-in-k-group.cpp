#include <iostream>
using namespace std;

class Solution {
public:
    // ListNode* reverseKGroup(ListNode* head, int k) {
    //     if (!head || k == 1) return head;

    //     ListNode dummy(0);
    //     dummy.next = head;
    //     ListNode* prev = &dummy;
    //     ListNode* curr = head;

    //     // Count the number of nodes in the list
    //     int count = 0;
    //     while (curr) {
    //         count++;
    //         curr = curr->next;
    //     }

    //     // Reverse k nodes at a time
    //     while (count >= k) {
    //         curr = prev->next;
    //         ListNode* next = curr->next;

    //         // Reverse k nodes
    //         for (int i = 1; i < k; i++) {
    //             curr->next = next->next;
    //             next->next = prev->next;
    //             prev->next = next;
    //             next = curr->next;
    //         }

    //         prev = curr;
    //         count -= k;
    //     }

    //     return dummy.next;
    // }
 int getLength(ListNode* head){
    ListNode* temp = head;
    int len =0;
    while(temp != NULL){
        len++;
        temp =temp->next;
    }
    return len;
 }
    ListNode* reverseKGroup(ListNode* head, int k) {
        // base case
        if(head == NULL || head ->next == NULL || k == 1){
            return head;
        }

        // ek case hum krenge 
        // jese reverse kri thi puri wese hi isme k tk ki reverse krenge
        ListNode* prev = NULL;
        ListNode* curr= head;
        int pos = 0;
         ListNode* newNode = curr->next;
         int len = getLength(head);
         
         if(len <k){
            return head;
         }

        while(pos<k){
            pos++;
            newNode = curr ->next;
            curr->next = prev;
            prev = curr;
            curr= newNode;
        }
        // recursion ka kam 
        ListNode* result = NULL;
        if(newNode != NULL){
            ListNode* result = reverseKGroup(newNode, k);
            head->next = result;
        }
        return prev;


    }
};