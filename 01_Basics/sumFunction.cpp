//Function to print the sum of natural numbers till n and if n is 0 then print 0
#include <iostream>
using namespace std;
int sum(int n)
{
    int summ=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
        for (int i=1;i<=n;i++)
        {
             summ =  summ+i;
        }
        
    return summ;
}}
    int main()
    {
        int a;
        cout<<"Enter the number: "<<endl;
        cin>>a;
        cout<<sum(a);


    return 0;
    }
