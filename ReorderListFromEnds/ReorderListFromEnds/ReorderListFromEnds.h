#pragma once
#include"ListNode.h"
#include<vector>

class ReorderListFromEnds {
public:
	void reorderList(ListNode* head) {
		if (!head || !head->next)
			return;
		std::vector<ListNode*> LNVec;
		for (ListNode* p = head; p; p = p->next)
			LNVec.push_back(p);
		for (int i = 0, j = LNVec.size() - 1; i <j; i++, j--) {
			LNVec[i]->next = LNVec[j];
			LNVec[j]->next = j >i + 1 ? LNVec[i + 1] : nullptr;
		}
		LNVec[LNVec.size() / 2]->next = nullptr;
		head = LNVec[0];
	}
};