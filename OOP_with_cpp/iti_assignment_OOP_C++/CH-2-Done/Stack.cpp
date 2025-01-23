#include<iostream>
#include<string>
using namespace std;

class Stack
{
private:
    static int top;
    int *stack;
    int size;
    static int No_of_Stack;
public:
    // default and paramteries constructor
    Stack(int size=10){
        this->size = size;
        stack = new int[size];
        No_of_Stack++;
    }
    
    bool isFull(){
        return top == size;
    }
    bool isEmpty(){
        return top == 0;
    }
    void push(int value){
        if(isFull()){
            cout << "Stack is Full" << endl;
        }
        else{
            stack[top++] = value;
        }        
    }
    int pop(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else{
            return stack[--top];//prefix top then pop stack
        }
    }
    static int getNo_of_Stack(){
        return No_of_Stack;
    }
    ~Stack(){
        delete[] stack;
        No_of_Stack--;
    };
};

    int Stack::top = 0;
    int Stack::No_of_Stack = 0;

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50); // This will cause an overflow error
    cout <<s.getNo_of_Stack()<<endl;
    cout << "Top element: " << s.pop() << endl; // This will also cause an underflow error
    cout << "Top element: " << s.pop() << endl;
    cout << "Top element: " << s.pop() << endl;
    cout << "Top element: " << s.pop() << endl;
    cout << "Top element: " << s.pop() << endl; // This will cause an underflow error again
    return 0;
}