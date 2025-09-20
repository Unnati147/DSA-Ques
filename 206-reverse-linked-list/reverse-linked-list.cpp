/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

ListNode* usingRecursion (ListNode* prev, ListNode* curr){
    // base case
    if(curr ==NULL){
        return prev;
    }

    // ek case jo hum krenge
    ListNode* newNode = curr->next;
    curr->next= prev;
    prev = curr; 
    curr= newNode;

    // baki recursion krega
 return usingRecursion(prev,curr);
    }

     ListNode* reverseList(ListNode* head) {
        ListNode* prev =NULL;
        ListNode* curr= head;
        return usingRecursion(prev,curr);
     }

// // iterative approach to solve this ques
//      ListNode* reverseList(ListNode* head) {
//         ListNode* prev= NULL;
//         ListNode* curr = head;
//         while(curr != NULL){
//             ListNode* newNode = curr->next;
//             curr->next= prev;
//             prev= curr;
//             curr= newNode;
//             head = prev;

//         }
//         return head;
//      }
  };