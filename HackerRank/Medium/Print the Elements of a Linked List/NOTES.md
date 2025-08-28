
          Print the Elements of a Linked List

          - Summary: The code uses a singly linked list to store a sequence of integers.  The `main` function first takes input to determine the number of nodes and then inserts each integer input into the linked list. Finally, it iterates through the linked list using the `printLinkedList` function, printing the `data` value of each node until the end of the list (null pointer) is reached.  Memory management is handled using `new` and `free`.

          - Time Complexity: O(n), where n is the number of nodes in the linked list. This is because the `printLinkedList` function iterates through each node once to print its data.
          - Space Complexity: O(n), where n is the number of nodes in the linked list. The space used is proportional to the number of nodes stored in the linked list.
          