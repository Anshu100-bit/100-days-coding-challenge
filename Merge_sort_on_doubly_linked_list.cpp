class Solution {
  public:
    // Function to sort the given doubly linked list using Merge Sort.
    struct Node *sortDoubly(struct Node *head) {
        // Your code here
         vector<int>v;
        struct Node *temp=head;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        
        temp=head;
        for(int i=0;i<v.size();i++){
            temp->data=v[i];
            temp=temp->next;
        }
        
        return head;
    }
};
