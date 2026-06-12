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
// ListNode* findMiddle(ListNode* head){
//     ListNode* slow= head;
//     ListNode* fast = head;

//     while(fast->next != NULL){
//         fast = fast->next;
//         if(fast->next != NULL){
//             fast = fast->next;
//             slow= slow->next;
//         }
//     }
//     return slow;
// }

// ListNode* reverseList(ListNode* prev, ListNode* curr){

//     while(curr != NULL){
//         ListNode* newNode= curr ->next;
//         curr ->next= prev;
//         prev = curr;
//          curr= newNode;

//     }
//    return prev;
// }

// bool compareList(ListNode* head, ListNode* head2){
//     while(head2 != NULL){
//         if(head ->val != head2->val){
//             return false;
//         }else{
//             head= head->next;
//             head2= head2->next;
//         }

//     }
//     return true;

// }
//     bool isPalindrome(ListNode* head) {
//         // middle nikalke list divide kr denge
//        ListNode* middleNode= findMiddle(head);
//        ListNode* head2 = middleNode->next;
//        middleNode->next = NULL;
//     //    reverse kr do

//         ListNode* prev =NULL;
//         ListNode* curr= head2;

//         head2 = reverseList(prev, curr);

//         // compare
//         bool ans= compareList(head, head2);
//         return ans;



int getLength(ListNode* head){
    int len = 0;
    ListNode* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
            
ListNode* reverse(ListNode* &head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr!= NULL){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

bool isPalindrome(ListNode* head) {
    ListNode* temp = head;
    ListNode* pre = new ListNode(0);
    ListNode* secondList = new ListNode(-1);

      if (head == NULL || head->next == NULL)
            return true;

            int len  = getLength(head);
            if(len %2 ==0){
            for( int i = 1; i< len/2; i++){
                  temp = temp -> next;
                }
                 secondList = temp ->next;
                 temp -> next = NULL;
                 pre = reverse(head);
            }
            else{
                for (int i =1; i<len/2; i++){
                    temp = temp ->next;
                }
                secondList = temp ->next->next;
                temp ->next = NULL;
                 pre = reverse(head);
            }

            while(pre!=NULL){
                if(pre->val == secondList->val){
                    pre = pre->next;
                    secondList = secondList ->next;
                }else{
                    return false;
                }
            }
              return true;

    }
    };