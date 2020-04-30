#include <stdio.h>

#include "list_node.h"
using namespace std;

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    ListNode* next;  // 当前节点的下一个节点
    ListNode* pre = NULL;  // 新的头节点
    // 用head表示当前循环节点
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