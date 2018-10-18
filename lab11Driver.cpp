/* lab11.cpp
 
 Welcome to lab 11, dealing with the topic of recursion.  In this lab you will take
 functions that work non-recursively, and you will rewrite them to work recursively.
 See further details below for each of the three functions.
 
 Running this program looks like:
 
 Enter the limit: 5
 0 1 2 3 4
 0 1 2 3 4
 Program ended with exit code: 0
 */

#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;


//------------------------- Sample -----------------------------
// Iteratively (non-recursively) display numbers up to some limit
void sampleIterative( int counter, int limit)
{
    // Display numbers up to the limit
    while( counter < limit) {
        cout << counter << " ";
        counter++;
    }
    cout << endl;   // display a new line
}//end sampleIterative()


// Same thing, now using recursion
void sampleRecursive( int counter, int limit)
{
    // Check for the base condition
    if( counter == limit) {
        cout << endl;
    }
    else {
        cout << counter << " ";
        // make the recursive call
        sampleRecursive( ++counter, limit);
    }
}//end sampleRecursive()


//------------------------- Problem 1 --------------------------
// Display odd numbers less than some limit
void problemOneOddNumbersIterative( int counter, int limit)
{
    // Display numbers up to the limit
    while( counter < limit) {
        if( counter % 2 == 1) {
            cout << counter << " ";
        }
        counter++;
    }
    cout << endl;   // display a new line
}//end problemOneOddNumbersIterative()


// Same thing, now done recursively.   >>> YOU SUPPLY CODE IN THIS FUNCTION <<<
void problemOneOddNumbersRecursive( int counter, int limit)
{
    //*** WRITE YOUR CODE HERE for problem 1 ...
    
    }
}//end problemOneOddNumbersRecursive()


//------------------------- Problem 2 --------------------------
// Count the number of upper-case letters in an array
int problemTwoCountUpperIterative( int index, char arrayOfLetters[])
{
    int counter = 0;
    while( index < strlen( arrayOfLetters)) {
        char currentChar = arrayOfLetters[ index];   // first character
        // If the current character is upper case, increment counter
        if( isupper( currentChar)) {
            counter++;
        }
        // advance pointer to next character
        index++;
    }
    return counter;
}//end problemTwoCountUpperIterative()


// Same thing, now done recursively.
int problemTwoCountUpperRecursive( int index, char arrayOfLetters[])
{
    //*** WRITE YOUR CODE HERE for problem 2 ...
    return 0;  // you may need to change this line
}//end problemTwoCountUpperRecursive()


//------------------------- Problem 3 --------------------------
// Display a string of characters in reverse order
void problemThreeDisplayReversedIterative( )
{
    // declare space for some letters
    char arrayOfLetters[ 81];
    // read in user input into the letters
    cin.getline( arrayOfLetters, 81);    // read in an entire line
    
    // start at end of string and display characters
    for( long i=strlen( arrayOfLetters); i>0; i--) {
        cout << arrayOfLetters[ i-1];
    }
    
    cout << endl;
}//end problemThreeReverseIterative()


// Same thing, now done recursively.
void problemThreeDisplayReversedRecursive(int index, char charArray[81])
{
    //*** WRITE YOUR CODE HERE for problem 3 ...
    }
}//end problemThreeReverseRecursive()

//----------------------------------------------------------
//YOU SHOULD NOT EDIT CODE IN THE MAIN() FUNCTION
//----------------------------------------------------------
int main()
{
    //------------------------------------------------------
    // Problem 0:  This one is an already completed example.
    // Count to some limit using a while loop.
    // Then the recursive version does the same thing.
    // For the other functions below you will be given the iterative (non-recursive)
    // version, and will have to create the recursive version.
    int counter = 0;
    int limit;
    cout << "Sample Problem \n";
    cout << "Enter the limit: ";
    cin >> limit;
    sampleIterative( counter, limit);    // Iterative (non-recursive) version
    sampleRecursive( counter, limit);    // Recursive version
    cout << "\n\n";
    
    //------------------------------------------------------
    // Problem 1: Display the odd numbers less than some limit
    counter = 0;
    cout << "Problem 1 \n";
    cout << "Enter the limit: ";
    cin >> limit;
    problemOneOddNumbersIterative( counter, limit);
    problemOneOddNumbersRecursive( counter, limit);  // <-- you supply the code for this one
    cout << "\n\n";
    
    //------------------------------------------------------
    // Problem 2: Given a C string, count how many characters are upper-case
    char arrayOfLetters[ 81];
    cout << "Problem 2 \n";
    cout << "Enter a line of input with mixed-case letters: ";
    counter = 0;
    // First get rid of carriage-return lingering on input buffer from previous question
    char c;
    cin.get( c);
    // Now read in user input
    cin.getline( arrayOfLetters, 81);    // read in an entire line
    cout << "Number of upper-case done Iteratively is: "
    << problemTwoCountUpperIterative( 0, arrayOfLetters) << endl;
    cout << "Number of upper-case done Recursively is: "
    << problemTwoCountUpperRecursive( counter, arrayOfLetters)  // <-- you supply the code for this one
    << endl;
    cout << endl;
    
    //------------------------------------------------------
    // Problem 3: Enter letters to be displayed in reverse order
    cout << "Enter input to be reversed Iteratively: ";
    problemThreeDisplayReversedIterative();
    cout << endl;
    cout << "Enter input to be reversed Recursively: ";
    // Now read in user input
    cin.getline( arrayOfLetters, 81);    // read in an entire line
    problemThreeDisplayReversedRecursive(0, arrayOfLetters);
    cout << endl;
    
}//end main()