class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_map<int,int>m;
        Node*temp1=head1;
        Node* temp2=head2;
       
        while(temp1!=NULL ){
            m[temp1->data]++;
              temp1=temp1->next;
           
        }
         int count=0;
         while(temp2!=NULL){
             int node=(x-temp2->data);
             if(m.find(node)!=m.end()){
                 count++;
             }
           temp2=temp2->next;   
         }
        return count;
    }
};
