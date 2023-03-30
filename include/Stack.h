#pragma once
template<int S>
class Stack
{
    private:
        int arr[5];
        int top;
        int capacity ;
        
    public:
        Stack()
        {

            top = -1;
            capacity = S;

        }

        void Push(int x)
        {
            if (isFull())
            {
                std::cout<<"stack is full"<< std::endl;

            }
            else{
                
                arr[++top] = x;
            }
        }
        int Pop()
        {
            if (isEmpty())
            {
                std::cout<<"nothing to pop"<< std::endl;
                return 0;
            }
            else{
                
                return arr[top--];
            }

        }
        bool isFull()
        {
            return top == (capacity - 1);
        }
        bool isEmpty()
        {
            return top == -1;
        }

};