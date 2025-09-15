#include<iostream>
using namespace std;
 int partition(int arr[],int low, int high ){
    int pivot = arr[low];
    int i= low;
    int j= high;
    while (i<j)
    {
        while (arr[i]<=pivot && i <= high-1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low+1)
        {
            j--;
        }
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
        
       
    }
     swap(arr[low] , arr[j]);
        return j;
    }

 void quicksort(int arr[], int low, int high){
    if (low<high)
    {
      int Pindex = partition(arr,low,high);
     quicksort(arr,low,Pindex-1);
     quicksort(arr,Pindex+1,high);
    }
    }
int main(){
 int n;
 cout<<"enter the no. of element of array: ";
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cout<<"enter the "<<i<<"  element :";
    cin>>arr[i];
 }
 quicksort(arr,0,n-1);

 cout<<"sorted array using quicksort is :"<<endl;
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }
    return 0;
}