#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int masiv[9];
    for(int i=0;i<9;i++)
    {
        cin>>masiv[i];
    }
    int extra=1,extra1=1;
    while(abs(masiv[5])/extra!=0)
    {
        extra*=10;
    }
    int number1=abs(masiv[2]*extra)+abs(masiv[5]);
    if(masiv[2]||masiv[5]<0)
    {

        //number1*=-1;
        cout<<number1;
    }
    ////////////////////////////
    while(abs(masiv[8])/extra1!=0)
    {
        extra1*=10;
    }
    int number2=abs(masiv[3])*extra1+abs(masiv[8]);
    if(masiv[3]||masiv[8]<0)
    {

        //number2*=-1;
        cout<<number2;
    }
    int sum=number1+number2;
    cout<<endl<<sum;
    return 0;
}
