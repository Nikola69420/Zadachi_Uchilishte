#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int guess=0;
    int scissors=0, rock=1, paper=2;
    cout<<"Type 3 to stop the game"<<endl;
    while(1==1)
    {

        srand(time(0)); //seed random number generator
        int num = rand() % 2 + 0; // random number between 0 and 2
        cout<<"scissors(0) rock(1) paper (2):";
        cin>>guess;
        cout<<endl;
        if(guess==3)
        {
            break;
        }
        else if(guess==scissors)
        {
            if(num==rock)
            {
                cout<<"The computer was rock. You are scissors. You lost."<<endl;
            }
            else if(num==paper)
            {
                cout<<"The computer was paper. You are scissors. You won."<<endl;
            }
            else if(num==scissors)
            {
                cout<<"The computer was scissors. You are scissors. It's a draw."<<endl;
            }
        }
        else if(guess==rock)
        {
            if(num==rock)
            {
                cout<<"The computer was rock. You are rock. It's a draw."<<endl;
            }
            else if(num==paper)
            {
                cout<<"The computer was paper. You are rock. You lost."<<endl;
            }
            else if(num==scissors)
            {
                cout<<"The computer was scissors. You are rock. You won."<<endl;
            }
        }
        else if(guess==paper)
        {
            if(num==rock)
            {
                cout<<"The computer was rock. You are paper. You won."<<endl;
            }
            else if(num==paper)
            {
                cout<<"The computer was paper. You are paper. It's a draw."<<endl;
            }
            else if(num==scissors)
            {
                cout<<"The computer was scissors. You are paper. You lost."<<endl;
            }
        }

    }
    return 0;
}
