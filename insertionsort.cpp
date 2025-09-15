#include<iostream>
using namespace std;

 void insertionsort(int n , int arr[])
{
    for (int i = 0; i <= n; i++)
    { int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
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
    
    cout<<" array after sorted using selection sort : "<<endl;
    insertionsort(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}