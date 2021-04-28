#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int maks, mini;//maximal and minimal number
    cout<<"Enter the highest and the lowest border:"<<endl<<"Enter the highest one: ";
    cin>>maks;
    cout<<endl<<"Enter the lowest one: ";
    cin>>mini;
    srand(time(0)); //seed random number generator
    int num = rand() % maks + mini; // random number between max and min
    cout << "Guess My Number Game"<<endl<<"If you type zero you can stop the game"<<endl;

    int guess = 0;
    int tries=0;// adding the integer tries indicating the number of guesses
    while (guess != num)
    {
        cout << "Enter a guess between "<<mini<<" and "<<maks<<" : ";
        cin >> guess;
        tries++;
        if(guess==0)
        {
            cout<<"You stopped the game.";
            break;

        }

        if (guess > num)
        {
            cout << "Too high!"<<endl;
        }
        else if (guess < num)
        {
            cout << "Too low!"<<endl;
        }
        else
        {
            cout <<endl<< "Correct! You got it in. You tried "<<tries<<" times";
        }
    }

    return 0;
}
