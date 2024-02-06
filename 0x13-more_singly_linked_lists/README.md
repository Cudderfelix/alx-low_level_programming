#### Overview of what a Linked List is? #####
* A Linked list is a linear data structure used for storing a collection of elements. Unlike arrays, linked lists use nodes to store elements which are not stored in contiguous memory locations.
 * A linked list is a collection of nodes where each node contains data as well as the memory address of the next node in the list.
........     .... ....       .... ....
.2 ..4 .     .3 . .7 .       .6 . .8 .
........     .... ....       .... .  .
data next    data next       data next

<-- Illustration of a linked list with three nodes -->
In the illustration above, the addresses of the nodes are not necessarily immediately sequential. The first node in the list has an address of 4 and the next node an address of 7, instead of 5 as expected.
		<-- How are the nodes stored linearly? -->
Even though the nodes are not in a contaguous memory, the nodes are stored linearly through links. Every node has the address of its succeding node. That is how each node can access its succeeding node.

<-- Nodes in a Linked List -->
Nodes are the building block of the linked list. After all, a linked list is a collection of nodes.

..........
.11..null.
..........

A node in a linked list consist of two parts:
* Data: Which denotes the value of the node.
* Next: Which is a reference to the succeeding node.

<--- Head and Tail in a Linked List --->
As mentioned earlier, a linked list is a collection of nodes.

(head)                        (tail)
data next    data next       data next
.........    .........       ..........
.11..200.    .18..801.       .24..null.
.........    .........       ..........
 
 <- Illustration of a linked list showing the head and tail ->
* The first node of the linked list is called the head node. It is the starting point of a linked list.
* The last node is called the tail node. As there is no node after the last node, the last node always points to the null.
* A null pointer does not point to any memory location.


Source: https://www.freecodecamp.org/news/how-linked-lists-work/


