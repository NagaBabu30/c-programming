// C# program to merge two sorted
// linked lists in-place.
using System;
  
class GFG {
  
    public class Node {
        public int data;
        public Node next;
    };
  
    // Function to create newNode in a linkedlist
    static Node newNode(int key)
    {
        Node temp = new Node();
        temp.data = key;
        temp.next = null;
        return temp;
    }
  
