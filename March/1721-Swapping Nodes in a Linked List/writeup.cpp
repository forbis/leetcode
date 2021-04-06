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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> node_value;
        ListNode *current = head;
        while(current != nullptr) {
            node_value.push_back(current->val);
            current = current->next;
        }
        ListNode *left;
        ListNode *right;
        
        // find left.
        current = head;
        for(int i = 0; i < k - 1; i++) { 
            current = current->next;
        }
        left = current;
        
        // find right.
        current = head;
        for(int i = 0; i < (node_value.size() - k); i++) { 
            current = current->next;
        }
        right = current;
        
        // swap
        swap(left->val, right->val);
        
        return head;
    }
};
