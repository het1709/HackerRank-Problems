/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head, int data)
{
    // This is a "method only" submission
    // You only need to complete this method
    //Check if list is empty
    if(head == NULL){
        head = new Node();
        head -> data = data;
        return head;
    }
    Node* iterator = head;
    while(iterator-> next != NULL){
        iterator = iterator -> next;
    }
    // Now iterator is pointing to the last element in the Linked List.
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> next = NULL;
    iterator -> next = newNode;
    return head;
}
