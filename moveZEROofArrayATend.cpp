#include<iostream>
using namespace std;
int movezero(int arr[] , int n){

int j = -1;
for (int i = 0; i < n; i++)
{
    if (arr[i] == 0)
    {
        j = i;
        break;
    }
    
    
}
for (int i = j+1; i < n; i++)
{
    if (arr[i] != 0)
    {
        swap(arr[i] , arr[j]);
        j++;
    }
    
}



}
int main(){

int n;
cout<<"enter the no. of element of array:";
cin>>n;
int arr[n];
cout<<"enter the elements of array:"<<endl;
for (int i = 0; i < n; i++)
{
 cout<<"enter "<< i <<" element:";
 cin>>arr[i];
}
movezero(arr,n);

cout<<"array after moving all zero at the end :";
for (int i = 0; i < n; i++)
{
 cout<<arr[i]<<" ";
}


   return 0;
}