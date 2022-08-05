class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
         Node* dummy=new Node(0);
        dummy->next=head;
        if(head==NULL || head->next==NULL)
        return head;
          Node* prev=dummy;
        while(head!=NULL){
    if(head->next!=NULL && head->data==head->next->data){
    while(head->next!=NULL && head->data==head->next->data){
        head=head->next;
    }
       prev->next=head->next;
    }

else{
    prev=prev->next;
}    
head=head->next;
    }
    return dummy->next;
    }
};
