#include <stdio.h>

#include "list_node.h"
using namespace std;
/*
Given a linked list, rotate the list to the right by k places, where k is
non-negative.
*/

class Solution {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    ListNode* curr = head;
    ListNode* pre = NULL;
    ListNode* tail = NULL;
    int len = 0;
    while (curr) {
      len++;
      tail = curr;
      curr = curr->next;
    }
    if (len <= 1 || k % len == 0) return head;

    curr = head;
    int count = len - k % len;
    while (count > 0) {
      pre = curr;
      curr = curr->next;
      count--;
    }

    pre->next = NULL;
    tail->next = head;
    return curr;
  }
};