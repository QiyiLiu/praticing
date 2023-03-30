# pragma once
#include<Log.h>
template<typename T>
struct Node
{
    /* data */
    T data;
    Node<T>* next = NULL;

};
template<typename T>
class Linked_list
{
    public:
        Linked_list()
        {
            head = NULL;
        }
        size_t Size()
        {
            size_t i = 0;
            current = head;
            while (current != NULL)
            {
                current = current -> next;
                i ++;
            }
            return i;
        }



        void Insert(T data, size_t index)
        {
            if (index > Size() + 1)
            {
                std::cout<< "[Error]: index out of range"<< std::endl;

            }
            else
            {
                size_t ii = 0;
                current = head;


                while (current!= NULL and ii < index) 
                {
                    previous = current;
                    current = current -> next; // current = NULL
                    ii++;
                }
                Node<T>* newnode = new Node<T>;
                newnode -> data = data;

                if(index == 0)
                {
                    Log("head");
                    newnode -> next = head;
                    head = newnode;
                    bool yes = newnode == NULL; // if newnode == NULL, yes = 1, therefore newnode is not NULL
                    std::cout<<yes<<std::endl;
 
                }
                else if(index == Size() )
                {
                    Log("tail");
                    previous -> next = newnode;
                    newnode -> next = current;
                }
                else
                {
                    Log("mid");
                    previous -> next = newnode;
                    newnode -> next = current;

                }
  




            }
            
        }
    private:
        Node<T>* head;
        Node<T>* current;
        Node<T>* previous;
};

