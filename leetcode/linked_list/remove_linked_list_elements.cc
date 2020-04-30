#include <stdio.h>

#include "list_node.h"
using namespace std;
/*
Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
*/

class Solution {
 public:
  ListNode* removeElements(ListNode* head, int val) {
    ListNode* curr = head;
    ListNode* pre = head;
    while (curr) {
      if (curr->val == val) {
        if (curr == head)
          pre = head = head->next;
        else
          pre->next = curr->next;
      } else {
        pre = curr;
      }
      curr = curr->next;
    }
    return head;
  }
};

int main(int argc, const char** argv) { return 0; }
