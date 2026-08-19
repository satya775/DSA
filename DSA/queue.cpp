#include<iostream>
#include<cstdlib>
using namespace std;
#define SIZE 100
class queue{
    private:
        int arr[SIZE];
        int front , rear;
    public:
        queue(){
        front = -1;
        rear = -1;
  }

  void enqueue(){
    int x;
    cout<<"enter element:";
    cin>>x;

    if(rear == SIZE-1) cout<<"overflow";
    
    if(front == -1) front = 0; 

    rear += 1;
    arr[rear] = x;
        
}

void dequeue(){

    if(front == -1 || front > rear) cout<<"underflow";

    else {cout<<"\ndeleted element:"<<arr[front];
    front += 1;}

    if(front > rear) front = rear = -1;
}

void show(){

    if(front == -1) cout<<"queue is empty";
      
    else{
    cout << "\nElements present in the queue:\n";

        for (int i = front; i <= rear; i++ )
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
    
}
    
};

int main(){
     int choice;
     queue q;

    while (1)
    {
        cout << "\nPerform operations on the queue:";
        cout << "\n1. enqueue the element";
        cout << "\n2. dequeue the element";
        cout << "\n3. Show element";
        cout << "\n4. End";

        cout << "\n\nEnter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.enqueue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.show();
            break;

        case 4:
            exit(0);

        default:
            cout << "\nInvalid choice!!";
        }
    }


    return 0;
}
