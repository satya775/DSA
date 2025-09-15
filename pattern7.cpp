#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number : "<<endl; 
    cin>>n;
    int i=1;
    
    
    while (i<=n)
    {
        int j=1;
        int count=i;
        while (j<=i)
        {
            cout<< count ;
            count++;
             j = j+1; 
             
        }
          i++;

        cout<<endl;
                  
    }
  
    

    return 0;
}

/*
  1
  2 3
  3 4 5
  4 5 6 7
*/