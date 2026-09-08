#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* head = NULL;

void insertAtBeginning();
void insertAtEnd();
void insertAtPosition();
void deleteNode();
void show();
void searchNode();

int main()
{
    int choice;

    while (1)
    {
        cout << "\n\nPerform operations on Linked List:";
        cout << "\n1. Insert at Beginning";
        cout << "\n2. Insert at End";
        cout << "\n3. Insert at Position";
        cout << "\n4. Delete Node";
        cout << "\n5. Show";
        cout << "\n6. Search";
        cout << "\n7. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertAtBeginning();
            break;

        case 2:
            insertAtEnd();
            break;

        case 3:
            insertAtPosition();
            break;

        case 4:
            deleteNode();
            break;

        case 5:
            show();
            break;

        case 6:
            searchNode();
            break;

        case 7:
            exit(0);

        default:
            cout << "\nInvalid choice!!";
        }
    }

    return 0;
}
void insertAtBeginning()
{
    int x;

    cout << "\nEnter element: ";
    cin >> x;

    Node* newNode = new Node(x);

    newNode->next = head;

    head = newNode;

    cout << "\nElement inserted successfully!";
}
void insertAtEnd()
{
    int x;

    cout << "\nEnter element: ";
    cin >> x;

    Node* newNode = new Node(x);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "\nElement inserted successfully!";
}
void insertAtPosition()
{
    int x, position;

    cout << "\nEnter element: ";
    cin >> x;

    cout << "Enter position: ";
    cin >> position;

    Node* newNode = new Node(x);

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for (int i = 1; i < position - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "\nInvalid position!";
            delete newNode;
            return;
        }

        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "\nInvalid position!";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    cout << "\nElement inserted successfully!";
}
void deleteNode()
{
    int position;

    if (head == NULL)
    {
        cout << "\nLinked List is empty!";
        return;
    }

    cout << "\nEnter position to delete: ";
    cin >> position;

    if (position == 1)
    {
        Node* temp = head;

        head = head->next;

        delete temp;

        cout << "\nNode deleted successfully!";
        return;
    }

    Node* temp = head;

    for (int i = 1; i < position - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
        {
            cout << "\nInvalid position!";
            return;
        }

        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        cout << "\nInvalid position!";
        return;
    }

    Node* nodeToDelete = temp->next;

    temp->next = nodeToDelete->next;

    delete nodeToDelete;

    cout << "\nNode deleted successfully!";
}
void show()
{
    if (head == NULL)
    {
        cout << "\nLinked List is empty!";
        return;
    }

    Node* temp = head;

    cout << "\nLinked List: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }

    cout << endl;
}
void searchNode()
{
    int x;

    cout << "\nEnter element to search: ";
    cin >> x;

    Node* temp = head;

    int position = 1;

    while (temp != NULL)
    {
        if (temp->data == x)
        {
            cout << "\nElement found at position "
                 << position;

            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "\nElement not found!";
}