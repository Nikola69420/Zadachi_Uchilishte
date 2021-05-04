#include <iostream>
using namespace std;
int main ()
{
    int year;//adding the year
    cout<<"Enter a year: ";
    cin>>year;
    if(year%4==0&&year%400==0&&year%100!=0)
    {
        cout<<"This year is a leap year";
    }
    else
    {
        cout<<"This year is not a leap year";
    }
    return 0;
}
