// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
      
    void FindMiddle(Node* curr,Node** first, Node** second)
    {
        Node* slow=curr;
        Node* fast=curr->next;
        
        while(fast != NULL&& fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        *first=curr;
        *second=slow->next;
        slow->next=NULL;
    } 
    Node *MergeBoth(Node *a, Node *b)
    {
            if(a == NULL)
            {
                return b;
            }       
        
            if(b == NULL)
            {
                return a;
            }
    
            Node *head = NULL, *tail = NULL;
            if(a->data < b->data)
            {
                head = tail = a;
                a = a->next;
            }
            else
            {
                head = tail = b;
                b = b->next;
            }
            
            while(a != NULL && b != NULL)
            {
                if(a->data < b->data)
                {
                    tail->next = a;
                    tail = a;
                    a = a->next;
                }
                else
                {
                    tail->next = b;
                    tail = b;
                    b = b->next;
                }
            }
            
            if(a == NULL)
            {
                tail->next = b;
            }
            else
            {
                tail->next = a;
            }
            
            return head;
    }
    
 
    void MergeSorting(Node **head)
    {
        Node* curr=*head;
        Node* first;
        Node* second;
        
        int i=0;
        i++;
        cout<<"Iteration"<<i<<"\n";
        
        if((curr==NULL) || (curr->next ==NULL))
        return;
        
        FindMiddle(curr,&first,&second);
        
        
        MergeSorting(&first);
        MergeSorting(&second);
        
        *head= MergeBoth(first,second);
    }
    
    
   
    
 
    
    
    Node* mergeSort(Node* head) {
        // your code here
        MergeSorting(&head);
        return head;
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends