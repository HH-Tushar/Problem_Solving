#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoSortedLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* current = & dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // If there are remaining nodes in either list, append them to the merged list
    if (l1) {
        current->next = l1;
    }
    if (l2) {
        current->next = l2;
    }

    return dummy.next;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head->val) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "nullptr" << std::endl;
}

int main() {
    // Create two sorted linked lists
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);
    list1->next->next->next = new ListNode(9);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);
    list2->next->next->next = new ListNode(8);
    list2->next->next->next->next = new ListNode(10);


    // Merge the two sorted linked lists
    ListNode* mergedList = mergeTwoSortedLists(list1, list2);

    // Print the merged linked list
    cout << "Merged Linked List: ";
    printLinkedList(mergedList);

    return 0;
}
