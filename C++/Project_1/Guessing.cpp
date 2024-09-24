
#include <iostream>

using namespace std;

void foundIt (int tries){
        if(tries % 10 == 1){
            if (tries == 1){
                cout << "How lucky!! You got it in your first try." << endl;
            } else {
                cout << "Great! you got it in your " << tries << " st try." << endl;
            }
        } else if(tries % 10 == 2){
            if (tries == 2){
                cout << "Lucky! You got it in you second try" << endl;
            } else {
                cout << "Great! you got it in your " << tries << " nd try." << endl;
            }
        } else if(tries % 10 == 3){
            cout << "Great! you got it in your " << tries << " rd try" << endl;
        } else{
            cout << "Great! you got it in your " << tries << " th try" << endl;
        }
    }

void determineAccuracy(int Number, int guess, int tries){
    if (guess > Number){
        cout << "Too high!" << endl;
    } else if (guess < Number){
        cout << "Too low!" << endl;
    } else {
        foundIt(tries);
    }
}

int main(){
    // Simple Number guessing game
    int Number;
    int maxRangeByUser;
    cout << "Enter the maximum range you want to play in (i.e '100' to say that the computer picks a random number that is between 0 and 100): ";
    cin >> maxRangeByUser;
    srand(time(NULL));
    Number = (rand() % maxRangeByUser) + 1;
    cout << "By now a random value is already taken, and your job is to try to guess it" << endl;
    int guess;
    int tries = 0;
    do{
        cout << "Have a guess: " ;
        cin >> guess;
        tries++;
        determineAccuracy(Number, guess, tries);
    }while(guess != Number);

    return 0;
}