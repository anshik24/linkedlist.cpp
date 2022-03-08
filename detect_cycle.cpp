Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

Example 1:

Input:
N = 3
value[] = {1,3,4}
x = 2
Output: True
Explanation: In above test case N = 3.
The linked list with nodes N = 3 is
given. Then value of x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.
Example 2:

Input:
N = 4
value[] = {1,8,3,4}
x = 0
Output: False
Explanation: For N = 4 ,x = 0 means
then lastNode->next = NULL, then
the Linked list does not contains
any loop.
Your Task:
The task is to complete the function detectloop() which contains reference to the head as only argument. This function should return true if linked list contains loop, else return false.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 104
1 ≤ Data on Node ≤ 103

View Bookmarked Problems
Company Tags
Topic Tags
Related Courses
Related Interview Experiences
We are replacing the old Disqus forum with the new Discussions section given below.
Click here to view old Disqus comments.


//code
#include<iostream>
using namespace std;
Struct Node{
int data;
Node* next;
Node(int value){
data= value;
next=NULL;
}
};


void loopHere(Node* head,Node* tail,int position){
if(position==0)
return;
Node* walk=head;
for(int i=0;i<position;i++){
walk=walk->next;
tail->neat=walk;
}


class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* fast=head;
        Node* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        if(fast==slow){
            return true;
        }
        }
       return false;
    }
};

int main(){
int t;
cin>>t;
while(t--){
int n,num,
cin>>n;
Node *head,*tail;
cin>>num;
head=taii=new Node(num);

for(int i=0;i<n-1;i++){
cin>>num;
tail->next=new Node(num);
tail=tail->next;
}
int pos;
cin>>pos;
loopHere(head,tail,pos);

Solution ob;
if(ob.detectLoop(head)){
cout<<"\ntrue";
}
else{
cout<<"\nfalse";
}
}
return 0;
}






