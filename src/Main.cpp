#include <iostream>
#include<vector>
#include<set>
#include<Log.h>
#include<Array.h>
#include<Linked_list.h>
#include<Stack.h>
// Arrays, Linked Lists, Stack, Queue, Graph, Tree, Heap, Hash Table

// Implement their main operations and understand the Big O Time Complexity of the main operations



int main()
{
    // Pointer vs Reference
    int a = 5;
    int &b = a;
    int *c = &a; // c is a pointer and it is initialized to the memory address of a
    int d = 6;

    b = 8;
    b = d;
    std::cout << &a << std::endl;
    std::cout << &b << std::endl;

    std::cout << *c << std::endl;



    //Static Array testing
    std::cout<<"Array tesing"<<std::endl;

    Array<int, 5> data;
    std::cout << data.Size() << std::endl;

    
    for (size_t i = 0; i < data.Size(); i++)
    {
        data[i] = i;
        std::cout<< data[i] << std::endl;
    }

    //Stack testing
    std::cout<<"stack testing"<<std::endl;
    Stack<3> Stk;
    Stk.Push(1);
    Stk.Push(2);
    Stk.Push(3);
    std::cout<<Stk.Pop()<<std::endl;
    std::cout<<Stk.Pop()<<std::endl;
    std::cout<<Stk.Pop()<<std::endl;



    //Linked List testing
    std::cout<< "Linked_list tesing"<< std::endl;
    Linked_list<int> L;
    std::cout<< "size" <<L.Size()<<std::endl;
    L.Insert(0, 0);
    std::cout<< "size" <<L.Size()<<std::endl;
    L.Insert(1, 1);
    std::cout<< "size" <<L.Size()<<std::endl;
    L.Insert(2,2);
    std::cout<< "size" <<L.Size()<<std::endl;
    L.Insert(3,3);
    std::cout<< "size" <<L.Size()<<std::endl;
    L.Insert(4, 0);
    std::cout<< "size" <<L.Size()<<std::endl;
    L.Insert(5, 2);
    std::cout<< "size" <<L.Size()<<std::endl;




    
}