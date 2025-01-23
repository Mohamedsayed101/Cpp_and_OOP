#include <iostream>
using namespace std;

class Stack
{
private:
    int *data;
    int size;
    static int count;

public:
    Stack(int s = 5) : size(s)
    {
        data = new int[size];
        count++;
        cout << "Constructor called. Object count: " << count << endl;
    }

    Stack(const Stack &other)
    {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
        count++;
        cout << "Copy constructor called. Object count: " << count << endl;
    }

    ~Stack()
    {
        delete[] data;
        count--;
        cout << "Destructor called. Object count: " << count << endl;
    }

    void viewContent() const
    {
        cout << "Stack content: ";
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    static int getObjectCount()
    {
        return count;
    }
};

int Stack::count = 0;

// Function call by reference
void callByReference(Stack &stack)
{
    cout << "Inside callByReference function." << endl;
    stack.viewContent();
}

// Function call by value without explicit copy constructor
void callByValueWithoutCopy(Stack stack)
{
    cout << "Inside callByValueWithoutCopy function." << endl;
    stack.viewContent();
}

// Function call by value with copy constructor
void callByValueWithCopy(Stack stack)
{
    cout << "Inside callByValueWithCopy function." << endl;
    stack.viewContent();
}

int main()
{
    cout << "1. Call by reference:\n";
    Stack s1(3);
    callByReference(s1);

    cout << "\n2. Call by value without explicit copy constructor:\n";
    callByValueWithoutCopy(s1);

    cout << "\n3. Call by value with copy constructor:\n";
    callByValueWithCopy(s1);

    cout << "\nEnd of program. Final object count: " << Stack::getObjectCount() << endl;
    return 0;
}
