#include<iostream>
using namespace std;
int main(){
    int n,c;
  cout<<"enter the no. of rows and column="<<endl;
  cin>>n>>c;

  int i=1;
  while (i<=n)
  {int j=1;
    while (j<=c)
    {
      cout<< j << " ";

      j++;
    }

    cout<<endl;
    i++;
    
    }
  

return 0;
}