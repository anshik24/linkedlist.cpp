Node* insertInMiddle(Node* head, int x)
{
	// Code here
	if(head==NULL){
	    return NULL;
	}
	Node*slow=head;
	Node*fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
	    slow=slow->next;
	    fast=fast->next->next;
	}
	Node* temp = new Node(x);
	temp->next=slow->next;
	slow->next=temp;
	return head;
	
}
