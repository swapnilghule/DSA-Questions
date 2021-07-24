// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection 
        
       unordered_set<int> s;
       
       while(head2 != NULL)
       {
           s.insert(head2->data);
           head2=head2->next;
       }
       Node *start=NULL,*end=NULL;
       while(head1 != NULL)
       {
           if(s.find(head1->data) != s.end())
           {
               if(start==NULL)
               {
                   start=end=head1;
               }
               else
               {
                   end->next=head1;
                   end=head1;
               }
           }
           
           head1=head1->next;
       }
       
       if(start-> next !=NULL)
       end->next=NULL;
       
       
       return start;
    }

    
    
    void push(Node** head, int new_data)
    {
      Node* new_node=(Node*)malloc(sizeof(Node*));
      new_node->data = new_data;
      new_node->next=NULL;
      Node* temp=*head;
      if(*head==NULL)
      {
      *head=new_node;
      return;
      }
      while(temp->next != NULL)
      temp=temp->next;
      
      temp->next=new_node;
      
      return;
     
    
      

    }
    
    
    bool isPresent(Node* head, int data)
    {
        Node* temp=head;
        
        while(temp!=NULL)
        {
            if(temp->data==data)
            return 1;
            temp=temp->next;
        }
        
        return 0;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends