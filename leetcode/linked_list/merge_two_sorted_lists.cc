#include <stdio.h>

#include "list_node.h"
using namespace std;

/*
Merge two sorted linked lists and return it as a new list. The new list should
be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/

class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    ListNode *head, *curr;
    if (l1->val < l2->val) {
      head = curr = l1;
      l1 = l1->next;
    } else {
      head = curr = l2;
      l2 = l2->next;
    }

    while (l1 && l2) {
      if (l1->val < l2->val) {
        curr->next = l1;
        l1 = l1->next;
      } else {
        curr->next = l2;
        l2 = l2->next;
      }
      curr = curr->next;
    }
    curr->next = l1 ? l1 : l2;
    return head;
  }
};

int main(int argc, char const* argv[]) { return 0; }
