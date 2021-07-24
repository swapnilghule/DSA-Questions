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

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

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

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* start=NULL,*end=NULL;
    
    set <int> s;
    while(head1!=NULL)
    {
        s.insert(head1->data);
        head1=head1->next;
    }
    
    while(head2 != NULL)
    {
        
       if(s.find(head2->data)!=s.end())
       {
           if(start==NULL)
           start=end=head2;
           else
           {
               end->next=head2;
               end=head2;
           }
           
           s.erase(head2->data);
       }
       head2=head2->next;
    }
    
    if(start!=NULL)
    end->next=NULL;
    
    return start;
    
}

    