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
    ListNode* reverseList(ListNode* head) {
        stack<int> stk;
        auto p = head;
        while(p!=NULL){
            stk.push(p->val);
            p = p->next;
        }
        p = head;
        while(stk.size()!=0){
            p->val = stk.top();
            stk.pop();
            p = p->next;
        }
        return head;
    }
    //使用stack来实现反转
};