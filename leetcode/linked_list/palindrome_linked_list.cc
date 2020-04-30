#include <stdio.h>

#include "list_node.h"
using namespace std;

/*
Given a singly linked list, determine if it is a palindrome.

Example 1:

Input: 1->2
Output: false
Example 2:

Input: 1->2->2->1
Output: true
*/

class Solution {
 public:
  bool isPalindrome(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;
    }
    // 如果长度为奇数, 跳过中间位置元素
    if (fast) slow = slow->next;
    fast = head;
    // 反转slow后列表
    slow = reverse(slow);
    while (slow) {
      if (slow->val != fast->val) return false;
      slow = slow->next;
      fast = fast->next;
    }
    return true;
  }

  ListNode* reverse(ListNode* head) {
    ListNode* pre = NULL;
    ListNode* next;
    while (head) {
      next = head->next;
      head->next = pre;
      pre = head;
      head = next;
    }
    return pre;
  }
};

int main(int argc, const char** argv) { return 0; }