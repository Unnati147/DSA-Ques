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
    // ListNode* rotateRight(ListNode* head, int k) {
        // if (!head){
        //     return head;
        // }
        // int length=1;
        // ListNode* tail=head;
        // ListNode* cur=head;
        // while (tail->next){
        //     tail=tail->next;
        //     length++;
        // }
        // k=k%length;
        // if (k==0){
        //     return head;
        // }
        // for(int i=0;i<length-k-1;i++){
        //     cur=cur->next;
        // }
        // ListNode* newh=cur->next;
        // cur->next=nullptr;
        // tail->next=head;
        // return newh;


int getLength (ListNode* &head){
      ListNode* temp = head;
    int len =0;
        while(temp!=NULL){
            len++;
            temp = temp ->next;
        }
        return len;
}
      ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL)
        return head;

        int len = getLength(head);
        ListNode* temp = head;
        k = k % len;
        if(k == 0)
        return head;
        
        for( int i = 1; i< len - k; i++){
            temp = temp ->next;
        }
        ListNode* newNode = temp -> next;
        temp->next =NULL;

        ListNode* tail = newNode;
    while(tail->next != NULL){
        tail = tail->next;
    }
     tail->next = head;

    return newNode;
    }
};