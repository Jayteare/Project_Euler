/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *current = new Node;
    current = head;
    
    if(head == NULL) { /*current = head; */ }
    else
    {
        while(current!=NULL)
        {
            cout<<current->data<<endl;  
            current = current->next;  
        }
    }
 

}
