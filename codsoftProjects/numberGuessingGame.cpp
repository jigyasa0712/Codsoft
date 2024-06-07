#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string name;
    char input;
    int inputuser;
    int score = 0;
    cout << "Enter your name          ";
    getline(cin, name);
    cout << endl;
    do
    {
        srand(0);
        int variable = rand() % 5 + 1;
        cout << "Enter any number between 1 to 5     ";
        cin >> inputuser;
        cout << endl;
        if (inputuser == variable)
        {
            cout << "Congratulations! You guessed the correct number " << endl;
            score++;
        }
        if (inputuser > variable)
        {
            cout << "sorry,your guessed number was so high. Try Again!" << endl;
        }
        else if (inputuser < variable)
        {
            cout << "sorry,your guessed number was so low. Try Again!" << endl;
        }
        cout << "Would you like to try again Y or N:";
        cin >> input;
        cout << endl;
    } while (input == 'Y');
    cout << "Your score is " << score << endl;
    cout << "Game End" << endl;
}