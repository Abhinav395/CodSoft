#include<iostream>
#include<cstdlib> // to generate random numbers
#include<ctime>
using namespace std;

int main(){
    // Use current time for seed for random generator
    srand(time(0));  

    int randomNumber = rand() % 100 +1;
    int guess;
    int attempts =0;
    bool guessed =false;

    cout<<"Welcome to the Number Guessing game"<<endl;
    
    cout<<"Choose a number between 1 to 100"<<endl;
    cout<<endl;
    cout<<"Enter the number"<<endl;
    attempts++;
    while(guessed!=true){
        
        cin>>guess;

        if(guess > randomNumber){
            cout<<"enter a lower number"<<endl;
            attempts++;
        }
        else if(guess < randomNumber){
            cout<<"enter a higher number"<<endl;
            attempts++;
        }
        else{
            cout<<"Well Done ! You guessed in "<<attempts<<" attempts";
            guessed =true;
        }
    }
  return 0;
}