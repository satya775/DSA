#include<iostream>
using namespace std;

 void selectionsort(int n , int arr[])
{
    for (int i = 0; i <= (n-2); i++)
    { int mini = i;
        for (int j = i; j <= (n-1); j++)
        { 
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
            
        
        
    }
    

}

int main(){
    int n;
   
    cout<<"enter the no. of elemets:";
    cin>>n;
     int arr[n];
    cout<<"enter array element" << endl;
    for (int i = 0; i < n; i++)
    {    cout<<"enter "<< i << "  element : ";
        cin>>arr[i];
      

    }
    
    cout<<" array after sorted using selection sort : "<<endl;
    selectionsort(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}