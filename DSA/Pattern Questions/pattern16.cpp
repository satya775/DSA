#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
         int space=n-i;

    while (space)
    {
       cout<<"";
       space--;
    }

        int j=1;
        

        while (j<=n-i+1)
        {
            cout<<" * ";
            j = j +1;
            
        }
        i++;
       
        cout<<endl;
        
    }
    
    

return 0;
}