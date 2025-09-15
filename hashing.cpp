#include<iostream>
using namespace std;

int main()
{
int  n;
cin>>n;
int arr[n];

for(int i = 0; i<n; i++) 
{
    cin>>arr[i];
}

// array h 

int hash[13] = {0};
for (int i = 0; i < n; i++)
{
  hash[arr[i]] += 1;
}

// hash array h jo calculate krega ki konsa element kitni baaar aaya h 

int q;
cin>>  q;
while (q--)
{
    int number;
    cin>>number;

    cout<<hash[number]<<endl;
}
// phle ye enter kro ki kitne baar janana h suppose 2 then enter 2 differnt element then it tell you that this is appears how many time
//ye qurry lena ka h user se ki enter kro ki konsa element kitni baar aaya h


    return 0;
}