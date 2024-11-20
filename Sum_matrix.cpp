#include<iostream>
using namespace std;
int main()
{
    int mat[3][4];
    int i,j,s=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            s=s+mat[i][j];
        }
    }

        cout<<"Matrix:";
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int j = 0; j < 4; j++)
        {
            cout<<mat[i][j];
        }
    }

    cout<<endl<<"Sum of matrix data elements: "<<s;
       
}