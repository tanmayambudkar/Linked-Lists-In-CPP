# Aim: To study and implement Linked List
# Software Required:
Visual Studio
# Theory:
In C++, a linked list is a linear data structure that allows the users to store data in non-contiguous memory locations. A linked list is defined as a collection of nodes where each node consists of two members which represents its value and a next/previous pointer which stores the address for the next/previous node.

<ins>Linked List Representation in C++</ins>:
In C++, linked lists are basically represented by a pointer to the first node, which is commonly referred to as the "head" of the list. Each node in the list is defined by a structure that includes a data field and a pointer pointing to the same type of structure. This type of structure is known as a self-referential structure.

<ins>Singly Linked List in C++</ins>:
The singly linked list is the simplest form of linked list in which the node contains two members data and a next pointer that stores the address of the next node. Each node is a singly linked list is connected through the next pointer and the next pointer of the last node points to NULL denoting the end of the linked list. The following diagram describes the structure of a singly linked list:

 <img width="985" height="280" alt="image" src="https://github.com/user-attachments/assets/a8ae710c-c19c-4b28-bb4b-f2e9a9ad03a7" />

<ins>Applications of Linked Lists</ins>:
Following are some common applications of the linked list data structure:
+ In dynamic memory allocation linked lists are used to keep track of free and allocated memory blocks.
+ Linked lists are used in text editors to implement undo and redo operations.
+ Linked lists are used to implement adjacency lists for the graph data structures.
+ Linked lists are also used to implement fundamental data structures like stack and queue.
  
# Algorithms:

Algorithm: Create and Display a Single Linked List Node

1. Start
2. Define a class `Link` with:
     Integer data member `d`.
     Pointer `next` of type `Link`.
     Constructor that initializes `d = num` and sets `next = NULL`.
3. In `main()`:
   1. Dynamically allocate a new node using `new Link(4)`.
   2. Store its address in pointer `l1`.
   3. Print the data part (`l1->d`).
   4. Print the address stored in the `next` pointer (`l1->next`).
4. End

Algorithm: Insert at Tail in a Singly Linked List

1. Start
2. Define a class `Link` with:
     Integer `data`.
     Pointer `next` of type `Link`.
     Constructor to initialize `data = num` and `next = NULL`.
3. Define a function `insert_tail(head, data)` to insert a new node at the end:
   1. Create a new node `new_node` with the given `data`.
   2. If `head == NULL`, set `head = new_node`.
   3. Else, traverse the list from `head` to the last node.
   4. Set the `next` of the last node to `new_node`.
4. Define a function `disp(head)` to display the linked list:
   1. Start from `head`.
   2. While the current node is not `NULL`:
        Print `current->data` followed by `->`.
        Move to the next node.
   3. Print `NULL` at the end.
5. In `main()`:
   1. Initialize `head = NULL`.
   2. Call `insert_tail(head, 20)` and `disp(head)`.
   3. Call `insert_tail(head, 21)` and `disp(head)`.
   4. Call `insert_tail(head, 22)` and `disp(head)`.
6. End

Algorithm: Insert at Head in a Singly Linked List

1. Start
2. Define a class `Link` with:
     Integer `data`.
     Pointer `next` of type `Link`.
     Constructor to initialize `data = num` and `next = NULL`.
3. Define a function `insert_head(head, data)` to insert a new node at the beginning:
   1. Create a new node `new_node` with the given `data`.
   2. Set `new_node->next = head`.
   3. Update `head = new_node`.
4. Define a function `disp(head)` to display the linked list:
   1. Start from `head`.
   2. While the current node is not `NULL`:
        Print `current->data` followed by `->`.
        Move to the next node.
   3. Print `NULL` at the end.
5. In `main()`:
   1. Initialize `head = NULL`.
   2. Call `insert_head(head, 20)` and `disp(head)`.
   3. Call `insert_head(head, 21)` and `disp(head)`.
   4. Call `insert_head(head, 22)` and `disp(head)`.
6. End

# Implementation:
The following codes demonstrate the use of linked list in C++,
+ Singly linked list
+ Adding multiple nodes at the end of the Linked List
+ Adding multiple nodes at the start of the Linked List

# Conclusion:
The above codes Demonstrate the use of Linked list in C++ along with its applications.
