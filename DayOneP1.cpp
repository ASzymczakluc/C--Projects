#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
   //variables
    cout<<"Hello World \n";
    string word;
    int pick;
    int repick;
   
    //What Letter is a Number Section
    cout<< "Give me a word: \n";
    cin >> word;
    int length = word.length();
    //for testing 
    //  cout << length;
    cout << "What number of the letter of the word would you like to see? \n";
    cin >> pick;
    char w = word[pick];
    if(pick > length){
        do{
            cout << "You picked a number too long! \n";
            cout << "Try Again! \n";
            cin >> pick;
        }
        while(pick > length);
    }
    cout << w << "\n";
    
    //Letter search 
    char let; 
    string finding[10]; //picked a large number for now 
    cout << "What letter are you looking for? \n";
    cin >> let;
    int k = 0; // for better array usage
    int getArrayLength = sizeof(finding) / sizeof(finding[0]);
    //for loop needs to look through the length of the word and find a match to each one then store the values in an array. 
    int foundCount = 0;
    for(int i = 0; i < length; i++){
        if(word[i] == let) {
            finding[k] = to_string(foundCount);
            k++;
            foundCount++;
        }

    }
    for(int d = 0; d < foundCount; d++){
        cout << "The Letter was found at position at " << finding[d] << "\n";
    }
    
    return 0;
}
    
