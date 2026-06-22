#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans =0;
    int i =0;

   
        int bit = 8;
        unsigned int val = (1 << bit) + n;
         while (val!=0)
    {
        int bit = val&1;
        ans=(bit * pow(10,i) )+ ans;
        val=val>>1;
        i++;
    }
    cout<<"answer is "<< ans <<endl;
    return 0;
    
 
    
}
