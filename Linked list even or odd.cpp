int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     int l=0;
     Node* temp = head;
     while(temp!=NULL){
         temp=temp->next;
         l++;
     }
     if(l%2==0)
     return 0;
     return 1;
}
