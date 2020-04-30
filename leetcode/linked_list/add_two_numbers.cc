#include <stdio.h>

#include "list_node.h"
#include "utils.h"
using namespace std;

/*
You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order and each of their nodes contain a single
digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the
number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    ListNode* head = l1;
    ListNode* pre;
    int add = 0;

    while (l1 && l2) {
      add = add_value(l1, l2->val + add);
      pre = l1;
      l1 = l1->next;
      l2 = l2->next;
    }
    if (l1) {
      add = deal_rest(l1, pre, add);
    }
    if (l2) {
      pre->next = l2;
      add = deal_rest(l2, pre, add);
    }

    if (add) pre->next = new ListNode(1);

    return head;
  }

  int add_value(ListNode* node, int val) {
    int s = node->val + val;
    node->val = s >= 10 ? s - 10 : s;
    return s >= 10;
  }

  int deal_rest(ListNode* node, ListNode* pre, int add) {
    while (node) {
      add = add_value(node, add);
      pre = node;
      node = node->next;
      if (!add) break;
    }
    return add;
  }
};

int main(int argc, char const* argv[]) {
  ListNode* a = new ListNode(9);
  ListNode* b = new ListNode(9);
  a->next = b;
  ListNode* c = new ListNode(1);
  Solution* s = new Solution();
  ListNode* res = s->addTwoNumbers(c, a);
  puts("==================");
  while (res) {
    printf("%d \n", res->val);
    res = res->next;
  }

  return 0;
}
