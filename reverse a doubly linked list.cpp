Node* reverseDLL(Node * head)
{
    if(head==NULL || head->next==NULL){
        return head;
        
    }
    Node* temp=head;
    Node*n=NULL;
    Node*p=NULL;
    while(temp->next!=NULL){
        p=temp->next;
        temp->next=n;
        temp->prev=p;
        n=temp;
        temp=p;
        
    }
    temp->next=n;
    temp->prev=NULL;
    return temp;
}
