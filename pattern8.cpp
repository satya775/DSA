#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int i=1;
   
    while (i<=n)
    {
        int j=1;
        char ch = 'A' + i - 1; 

        while (j<=n)
        {
            cout<< ch  ;
            j = j+1; 
            
        }
          i++;

        cout<<endl;
    }



return 0;
}
/*
   AAAAA
   BBBBB
   CCCCC
   DDDDD
   EEEEE
*/