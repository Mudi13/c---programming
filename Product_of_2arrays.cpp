#include<iostream>
using namespace std;
int main()
{
    int arr1[6],arr2[6],arr3[6];
    for (int i = 0; i < 6; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin>>arr2[i];
    }

    for (int i = 0; i < 6; i++)
    {
        arr3[i]=arr1[i]*arr2[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<"Product is= "<<arr3[i]<<endl;
    }

}
