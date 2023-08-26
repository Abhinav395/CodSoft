#include <iostream>
#include<string>
using namespace std;

int main() {
  
  // declaring string
  string sentence ;
  cout<<"Enter your Sentence"<<endl;
  getline(cin,sentence);
  
  int words = 0; // initialising no of words to 0
  
  int lenOfSentence = sentence.length();  // store length of string in lenOfSentence

  // run for loop from i = 0 to i = lenOfSentence
  // to iterate through each character of the string
  for(int i = 0; i < lenOfSentence; i++)
  {
    
    if(sentence[i] == ' ')  // check if current character is a spac
    {
     
      words++;  // // if it is a space, increment word count
    }
  }
  words = words + 1;  //including last word

  cout << "No. of words = " << words << endl;

  return 0;

}
