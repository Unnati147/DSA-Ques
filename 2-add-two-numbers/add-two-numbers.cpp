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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    // ListNode* dummynode = new ListNode(0);
    // ListNode* temp = dummynode;
    // int carry = 0;

    // while(l1 != NULL || l2 != NULL || carry != 0){
    //     int sum = carry;
    //     if(l1){
    //         sum+=l1->val;
    //         l1= l1->next;
    //     }
    //     if(l2){
    //         sum += l2->val;
    //         l2= l2->next;
    //     }
    //     temp->next = new ListNode(sum%10);
    //     carry = sum/10;
    //     temp = temp->next;
    // }
    // return dummynode->next;

ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
int carry =0 ;
while(l1 != NULL && l2!=NULL){
    int sum = l1->val+l2->val+carry;
    int digit = sum%10;
    carry = sum /10;
   temp->next = new ListNode(digit);   
    l1 = l1->next;
    temp = temp ->next;
    l2= l2->next;

}
while(l1){
    int sum = l1->val+carry;
    int digit = sum%10;
    carry = sum /10;
    temp->next = new ListNode(digit);
    temp = temp->next;
    l1 = l1->next;
}
while(l2){
    int sum = l2->val+carry;
    int digit = sum%10;
    carry = sum /10;
    temp->next = new ListNode(digit);
    temp = temp->next;
    l2 = l2->next;
}
if (carry>0){
    temp->next = new ListNode(carry); 
}
return dummy->next;
    }
};