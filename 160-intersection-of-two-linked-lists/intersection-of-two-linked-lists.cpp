/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        int a=0, b=0;
        while(temp){
            a++;
            temp = temp->next;
        }
        temp  = headB;
        while(temp){
            b++;
            temp= temp->next;
        }
        int diff= abs(a-b);
        if (a<b){
            while(diff!=0){
                headB= headB->next;
                diff--;
            }
            }else{
                while(diff){
                    headA= headA->next;
                    diff--;
                }
            }
            while(headA && headB){
                if(headA== headB){
                    return headB;
                }
                headA= headA->next;
                headB= headB->next;
            }
        return NULL;
    }
};