#include "list_node.h"
#include "utils.h"

using namespace std;

class Solution {
 public:
  // 使用set复杂度o(n), 但是理解简单
  ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *encounter = NULL;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        encounter = slow;
        break;
      }
    }
    if (!encounter) return NULL;
    slow = head;
    fast = encounter;
    while (slow != fast) {
      slow = slow->next;
      fast = fast->next;
    }
    return slow;
  }
};

int main() { return 0; }