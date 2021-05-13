/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int l,r,i,sum;
    int a[] = {4,5,6,7,8};
    cin>>l>>r;
    cout<<"Its prefix sum array is:";
    for(i=1;i<5;i++)
    {
        a[i]+=a[i-1];
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    sum = a[r]-a[l-1];
    if(l==0)
    {
        sum = a[r];
    }
    cout<<endl<<sum;
    
}
