#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 * int data;
 * SinglyLinkedListNode* next;
 * };
 *
 */

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    // p1 will trail p2 and point to the result node.
    SinglyLinkedListNode* p1 = llist;
    // p2 will lead p1 and traverse the entire list.
    SinglyLinkedListNode* p2 = llist;
    
    // 1. Advance p2 by 'positionFromTail' steps.
    // This creates the required gap between p1 and p2.
    for (int i = 0; i < positionFromTail; i++) {
        // Assuming the list is long enough based on problem constraints.
        // If not, robust code would check for p2 == nullptr here.
        p2 = p2->next;
    }
    
    // 2. Move both p1 and p2 forward simultaneously until p2 hits the end.
    // When p2->next is nullptr, p2 is the tail (position 0).
    while (p2->next != nullptr) {
        p1 = p1->next;
        p2 = p2->next;
    }
    
    // 3. When the loop terminates, p1 is at the node corresponding 
    // to the 'positionFromTail' (e.g., if positionFromTail=0, p1 is at the tail).
    return p1->data;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int tests;
    cin >> tests;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        SinglyLinkedList* llist = new SinglyLinkedList();

        int llist_count;
        cin >> llist_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < llist_count; i++) {
            int llist_item;
            cin >> llist_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            llist->insert_node(llist_item);
        }

        int position;
        cin >> position;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = getNode(llist->head, position);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
