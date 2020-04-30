#include <stdio.h>

#include "list_node.h"
using namespace std;

class Solution {
 public:
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    int l = 0;
    ListNode* h = head;
    while (h) {
      h = h->next;
      l++;
    }
    if (l <= 1) return NULL;
    if (n == l) return head->next;
    h = head;
    int i = l - n;
    while (i > 0) {
      if (i - 1 == 0) h->next = h->next->next;
      h = h->next;
      i--;
    }
    return head;
  }
};

int main(int argc, const char** argv) { return 0; }