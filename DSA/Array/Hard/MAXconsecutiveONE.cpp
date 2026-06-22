#include<iostream>
using namespace std;
int CONones(int arr[] , int n){
  int maxi = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
        count++;
        maxi = max(maxi , count);
    }
    else{ 
        count = 0;
    }
    
  }
  return maxi;
  



}
int main(){
 int n;
 cout<<"enter the no. of element of array:";
 cin>>n;
 int arr[n];
 cout<<"enter the element of arary (only 0 & 1)"<<endl;
 for (int i = 0; i < n; i++)
 {
    cout<<"enter "<< i <<" element:";
    cin>>arr[i];
 }
 cout<<"The Maximum No. Of 1s in Given Array is : "<<CONones(arr,n)<<endl;
 


    return  0;
}