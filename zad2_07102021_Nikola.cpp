#include<iostream>
using namespace std;
int main ()
{
    int n=0;
    cin>>n;
    char arr[n];
    int sum=0,chislo,i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        chislo=0;
        if(arr[i]>='0'&&arr[i]<='9')
        {
            while((i<n)&&(arr[i]>='0'&&arr[i]<='9'))
            {
                i++;
                chislo=chislo*10+(arr[i]-'0');
                cin>>arr[i];

            };
        }
        sum+=chislo;
        cout<<sum<<endl;

    }
    //if(arr[i]>='0'&&arr[i]<='9')
  //  {
  ///      chislo=chislo*10+(arr[i]-'0');
  //      sum+=chislo;
    /////}
    cout<<sum;
    return 0;
}
