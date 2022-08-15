class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(!head || !head->next||k==0)
        return head;
        Node *curr= head;
        int length=1;
        while(curr->next!=NULL){
            length++;
            curr= curr->next;
        }
            //go till that node
            curr->next = head;
            k= k%length;
           // k=length-k;
        
            while(k>0){
                curr=curr->next;
                k--;
            }
                // make the node head and break connection
                head= curr->next;
                curr->next= NULL;
            
        return head;
    }
};
    
