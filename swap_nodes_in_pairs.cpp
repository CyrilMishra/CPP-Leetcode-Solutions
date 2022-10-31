class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
		if (!head) {
			return nullptr;
		}
        ListNode *prev = nullptr;
		ListNode *cur = head;
		ListNode *next = head->next;
		while (cur) {
			if (next) {
				cur->next = next->next;
				next->next = cur;
				if (prev) {
					prev->next = next;
				}
				else {
					head = next;
				}
			}
			prev = cur;
			cur = cur->next;
			next = cur ? cur->next : nullptr;
		}
		return head;
    }
};
