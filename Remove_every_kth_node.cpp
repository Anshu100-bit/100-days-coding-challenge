class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      if(K==1){
          return NULL;
      }
      int count=1;
      Node*curr=head;
      Node*prev=NULL;
      while(curr!=NULL && curr->next!=NULL){
          prev=curr;
          curr=curr->next;
          count++;
          if(count==K){
              Node*front=curr->next;
              prev->next=front;
              delete curr;
              curr=front;
              count=1;
          }
       }
      return head;
     }
};
