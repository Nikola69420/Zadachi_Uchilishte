#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    /// zad1
    /*
    int N=0;
    cin>>N;
    int fakeN = N, newNumber=0;
    //int br=0;
    int mini=N;
    while(fakeN!=0)
    {
        int cifra=fakeN%10;
        newNumber=newNumber*10 + cifra;
        fakeN/=10;
        if(mini>cifra)
        {
            mini=cifra;
        }
        //br++;
    }
    /// a podtochka
    //cout<<br;
    /// b podtochka
    //cout<<newNumber+N;
    /// w podtochka
    //int petcif=mini*10000+mini*1000+mini*100+mini*10+mini;
    //cout<<abs(N-petcif);
    */
    ///zad2 , da se napishe programa koqto razdelq masiw ot 10 chisla
    ///na dwe chasti chiqto razlika e wuzmozhno nai malka

    int arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    int num1, num2, extra=10000;
    int mini=2147483646, index=0;
    int m=0, n=0;
    for(int i=0; i<5; i++)
    {
        index=i;
        for(m=0; m<5; m++)
        {
            index%=10;
            num1=arr[index]*extra;
            extra/=10;
            index++;
        }
        extra=10000;
        for(n=0; n<5; n++)
        {
            index%=10;
            num2=arr[index]*extra;
            extra/=10;
            index++;

        }
        if(mini>abs(num1-num2))
        {
            mini=abs(num1-num2);
        }

    }
    cout<<endl<<mini;
    return 0;
}

/*for(i;i<i+5;i++)
{



}

for(i%10;i<(i+5)%10;i++)
{



}*/
