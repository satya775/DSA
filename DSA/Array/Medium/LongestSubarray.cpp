#include<iostream>
using namespace std;
int longestsubarray(int arr[], int n,long long k){

int left = 0, right=0;
long long sum = arr[0];
int maxLen = 0;
while (right < n)

{
    while (left <= right && sum > k)
    {
        sum -= arr[left];
        left++;
    }
    if (sum == k)
    {
      maxLen = max(maxLen,right-left+1);
    }
    right++;
    if (right<n) sum += arr[right];
   
    
}
 return maxLen;

}
    int main(){
 int n;
 cout<<"enter the no. of element of array:";
 cin>>n;
 int arr[n];
 cout<<"enter the element of arary :"<<endl;
 for (int i = 0; i < n; i++)
 {
    cout<<"enter "<< i <<" element:";
    cin>>arr[i];
 }
 long long k;
 cout<<"enter the value of K(sum of element): ";
 cin>>k;
 cout<<"The longest array of sum of its digit  "<< k<<"is:"<<longestsubarray(arr,n,k)<<endl;
 
return 0;
}