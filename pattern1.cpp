#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;

    int i=1;
    while(i<=row){
        int j=1;
        while(j<=col){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }


return 0;
}


