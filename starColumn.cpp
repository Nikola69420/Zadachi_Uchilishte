#include<iostream>
using namespace std;
int main()
{
    int column=0;
    cout<<"Enter a number: ";
    cin>>column;
    for(int i=0; i<column; i++)
    {
        for(int m=0; m<i; m++)
        {
            cout<<" ";
        }
        for(int n=column; n>i; n--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/****
 ***
  **
   */
