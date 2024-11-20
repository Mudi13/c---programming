#include<iostream>
using namespace std;
int main()
{
    int i,rev[6],j=0,ar[6];

    for (int i = 0; i < 6; i++)
    {
        cin>>ar[i];
    }

    for (int i = 5; i >= 0; i--)
    {
        rev[j]=ar[i];
        j++;
    }

    for (int i = 0; i < 6; i++)
    {
       cout<<rev[i]<<" ";
    }
}