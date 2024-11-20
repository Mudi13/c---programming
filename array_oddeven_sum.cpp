#include<iostream>
using namespace std;
int main()
{
    int num[15],index,oddsum=0,evensum=0;

    for (int index = 0; index < 15; index++)
    {
        cin>>num[index];     
    }

    for (int index = 0; index < 15; index++)
    {
        if (num[index]%2==0)
        {
            evensum=evensum+num[index];
        }

        else
        {
            oddsum=oddsum+num[index];
        }
    }

        cout<<"sum of odd number in array: "<<oddsum<<endl;
        cout<<"sum of even number in array: "<<evensum;
    
}