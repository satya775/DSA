#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 50

int top = -1;
int array[SIZE];

void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        cout << "\nPerform operations on the stack:";
        cout << "\n1. Push the element";
        cout << "\n2. Pop the element";
        cout << "\n3. Show";
        cout << "\n4. End";

        cout << "\n\nEnter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);

        default:
            cout << "\nInvalid choice!!";
        }
    }

    return 0;
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        cout << "\nOverflow!!";
    }
    else
    {
        cout << "\nEnter the element to be added onto the stack: ";
        cin >> x;

        top = top + 1;
        array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "\nUnderflow!!";
    }
    else
    {
        cout << "\nPopped element: " << array[top];
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        cout << "\nUnderflow!!";
    }
    else
    {
        cout << "\nElements present in the stack:\n";

        for (int i = top; i >= 0; --i)
        {
            cout << array[i] << endl;
        }
    }
}