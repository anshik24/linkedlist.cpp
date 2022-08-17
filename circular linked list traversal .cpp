void printList(struct Node *head)
{
  
  Node * temp=head;
  do{
      cout<<temp->data<<" ";
      temp=temp->next;
      
  }
  while(temp!=head);
}
