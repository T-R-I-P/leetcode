#ifndef SOL_HPP
#define SOL_HPP

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

typedef struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
} ListNode;

class Solution {
  public:
    ListNode *detectCycle(ListNode *head) {
      ListNode *meet = hasCycle(head);
      if(!meet)
        return meet;

      ListNode *cur, *prev;
      int loop_length = 1;
      prev = meet;
      cur = prev->next;
      prev->next = (ListNode*)set_mark(prev->next);
      while(cur!=meet) {
        prev = cur;
        cur = cur->next;
        prev->next = (ListNode*)set_mark(prev->next);
        loop_length++;
      }

      cur = head;
      while(!is_marked(cur->next)) {
        cur = (ListNode*)unset_mark(cur->next);
      }

      return cur;
    }

    // return the meet node
    ListNode *hasCycle(ListNode *head) {
      ListNode *turtle, *rabbit;
      turtle = rabbit = head;

      while(rabbit!=NULL) {
        turtle = turtle->next;
        rabbit = rabbit->next;
        if(!rabbit) {// rabbit is NULL
          return rabbit;
        }
        rabbit = rabbit->next;
        if(rabbit==turtle) {// find
          return rabbit;
        }
      }

      return rabbit;
    }

    // is marked
    long is_marked(void* address) {

      return ((long)address & 0x1L);
    }

    // set mark
    void* set_mark(void* address) {
      return (void*)((long)address | 0x1L);
    }

    // unset mark
    void* unset_mark(void* address) {
      return (void*)((long)address & ~0x1L);
    }
};

#endif
