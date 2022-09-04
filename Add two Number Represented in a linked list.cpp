class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    Node *reverse(Node* head){
        if(head==NULL)
        return NULL;
        Node* prev=NULL;
        Node* curr=head;
        Node* nxt;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       
      
     // Node* head=NULL;
       Node *l1=reverse(first);
       Node *l2=reverse(second);
       Node *dummy=new Node(0);
       Node *temp=dummy;
       int carry=0;
       while(l1||l2||carry){
           int sum=0;
           if(l1){
           sum+=l1->data;
           l1=l1->next;
           }
           if(l2){
               sum+=l2->data;
               l2=l2->next;
           }
          sum+=carry;
          carry=sum/10;
          Node*n =new Node(sum%10);
          temp->next=n;
          temp=temp->next;
           
       }
       return reverse(dummy->next);
    }
};
