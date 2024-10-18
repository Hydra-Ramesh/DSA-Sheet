#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};

// Function to create a cycle in the linked list for testing
void createCycle(ListNode* head, int pos) {
    if (pos == -1) return;
    ListNode* cycleNode = NULL;
    ListNode* tail = head;
    int index = 0;
    while (tail->next != NULL) {
        if (index == pos) {
            cycleNode = tail;
        }
        tail = tail->next;
        index++;
    }
    tail->next = cycleNode; // Create cycle
}

// Function to print if a cycle exists
void testCycleDetection(ListNode* head) {
    Solution sol;
    if (sol.hasCycle(head)) {
        cout << "Cycle detected in the linked list.\n";
    } else {
        cout << "No cycle in the linked list.\n";
    }
}

int main() {
    // Creating a linked list: 3 -> 2 -> 0 -> -4 -> (cycle back to node 1)
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Creating a cycle in the linked list (cycle at position 1, i.e., node with value 2)
    createCycle(head, 1);

    // Test the linked list for a cycle
    testCycleDetection(head);

    // Optional: Clean up memory (avoiding cleanup if there's a cycle, to prevent infinite loop)
    // Note: If a cycle exists, you'd need extra logic to safely free memory.
    return 0;
}
