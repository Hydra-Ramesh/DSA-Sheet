#include <iostream>
#include <vector> // Include the vector header
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        // Fast pointer moves two steps, slow pointer moves one step
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // When fast pointer reaches the end, slow pointer is at the middle
        return slow;
    }
};

// Helper function to print a linked list from a given node
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Helper function to create a linked list from an array of values
ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return NULL;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

int main() {
    // Create a linked list [1 -> 2 -> 3 -> 4 -> 5]
    vector<int> values = {1, 2, 3, 4, 5}; // Ensure vector is recognized
    ListNode* head = createLinkedList(values);

    // Print the original list
    cout << "Original List: ";
    printList(head);

    // Create a Solution object and find the middle node
    Solution solution;
    ListNode* middle = solution.middleNode(head);

    // Print the middle node and the rest of the list starting from the middle
    cout << "Middle of the List: ";
    printList(middle);

    return 0;
}
