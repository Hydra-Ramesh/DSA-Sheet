#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Recursive solution to reverse a linked list
class RecursiveSolution {
public:
    ListNode* reverseList(ListNode* head) {
        // Base case: if head is NULL or only one element is left
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        // Recursive case: reverse the rest of the list
        ListNode* p = reverseList(head->next);
        
        // Adjust the pointers
        head->next->next = head;
        head->next = nullptr;
        
        return p;
    }
};

// Iterative solution to reverse a linked list
class IterativeSolution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* Next = nullptr;

        while (curr) {
            // Store the next node
            Next = curr->next;
            // Reverse the pointer
            curr->next = prev;
            // Move the prev and curr one step forward
            prev = curr;
            curr = Next;
        }

        return prev;
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    
    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    
    return head;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    ListNode* head = createLinkedList(arr, n);

    // Print original list
    cout << "Original List: ";
    printList(head);

    // Reverse list using the recursive solution
    RecursiveSolution recursiveSolution;
    ListNode* reversedHeadRecursive = recursiveSolution.reverseList(head);
    
    cout << "Reversed List (Recursive): ";
    printList(reversedHeadRecursive);

    // Re-create the linked list for iterative solution
    head = createLinkedList(arr, n);

    // Reverse list using the iterative solution
    IterativeSolution iterativeSolution;
    ListNode* reversedHeadIterative = iterativeSolution.reverseList(head);

    cout << "Reversed List (Iterative): ";
    printList(reversedHeadIterative);

    return 0;
}
