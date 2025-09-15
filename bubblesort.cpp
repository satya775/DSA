#include<iostream>
using namespace std;

 void bubblesort(int n , int arr[])
{
    for (int i = n-1; i >= 1; i--)
    { 
        for (int j = 0; j <= i-1; j++)
        { 
            if (arr[j] > arr[j+1])
            {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            }
        }
            
            
        
        
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
    
    cout<<" array after sorted using bubble sort: "<<endl;
    bubblesort(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}