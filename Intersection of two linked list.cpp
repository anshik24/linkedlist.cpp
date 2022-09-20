* findIntersection(Node* head1, Node* head2)
{
    Node* dummy=new Node(1);
    Node* current = dummy;
    Node* t1=head1,*t2=head2;
    while(t1&&t2){
        if(t1->data==t2->data){
        Node* new_node=new Node(t1->data);
        current->next=new_node;
        current=current->next;
        t1=t1->next;
        t2=t2->next;
   Node }
    else if(t1->data>t2->data){
        t2=t2->next;
    }
    else{
        t1=t1->next;
    }
    
}
return dummy->next;
}
