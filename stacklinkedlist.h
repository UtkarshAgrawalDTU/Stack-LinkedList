#include<iostream>
using namespace std;

/* Implementation of Stack as Linked Lists using Classes in C++.
Code by Utkarsh Agrawal 
Please suggest edits wherever required! */

template<typename T>
class Node {			// class Node

    public :
    T data;
    Node <T> *next;
    
    Node(T data) : data(data), next(NULL)		//initialisation list
    {}
    
};


template <typename T>
class Stack {			// class Stack
    Node <T> *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() : head(NULL), size(0)	//initialisation list
    {}
       
    int Size() 		//return size of stack
	{    
      return size;  
    }
    
    bool isEmpty() 		//checks whether stack is empty or not
	{    
     return size == 0 ; 
    }
    
    void push(T element) {		//pushes element in stack
      
      Node <T> *temp= new Node <T> (element);
      
      if(size==0)		//empty stack
      {
        head=temp;
        head->next=NULL;
        size++;
        return;
      }
      
      temp->next=head;
      head=temp;
      size++;
      
    }
    
    void pop() 		// removes element from stack
	{
      if(size==0)
        return ;
      
      Node <T> *temp=head->next;
      T elem=head->data;
      delete head;
      head=temp;
      size--;
    }
    
    T top() 		//returns top element from stack
	{  
      if(size == 0)
        return 0;
      
      return head->data;   
    }
    
};

