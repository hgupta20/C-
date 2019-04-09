#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

 /* ------------------------------------------------ 
  * Guess It Program. 
  * Program 1- Due September 11
  * Class: CS 141, Fall 2017. Tues 9am lab
  * Teaching Assitants : Moumita Samanta, Vincent Pham 
  * System: Windows 10,Dev-C++
  * Author: Harsh Devprakash Gupta
  *
  * ToDo: Write a program in C++ to play a mind-reader guessing game.
  * -------------------------------------------------
  */
int main(int argc, char** argv) {
	int loopCounter = 100;  // To form the Grid using the loop.
	char startingChar = 'A';  // Initializing the start point for the characters.
	
	srand (time(0));  // For a new number everytime executed.
	
	int randomChar = rand() %26; // To generate the random number within the range of 26 alphabets.
	char specialChar;  // initializing the special Character.
	char normalChar;  // initializing the normal Character.
	
	// -------------------------------------------------------------------------------------------------------------------------------------------
	// To check the randomChar for even or odd and assign the Character to specialChar.
	
	if (randomChar %2==0){
		randomChar = randomChar+32;
		specialChar = (char) 'A' + randomChar;
	}
	else{
	specialChar = (char) 'A' + randomChar;
	}
	
	// --------------------------------------------------------------------------------------------------------------------------------------------
    // Displaying Identifying Information.
    
	cout << "Program #1: Guess It" << endl;
	cout << "Author: Harsh Devprakash Gupta" << endl;
	cout << "Lab: Tues 9am"<< endl;
	cout << "Teaching Assitants : Moumita Samanta, Vincent Pham "<< endl;
	cout << "Date: Sep 9, 2017" << endl;
	cout << "System: C++ in Dev C++" << endl;
	cout<< endl;
	
	//----------------------------------------------------------------------------------------------------------------------------------------------
	// Loop for printing the output grid.
	while (loopCounter!=0){//Using while loop and decreasing the loopCounter after every loop completed.
		loopCounter=loopCounter-1;//Decreasing the loopCounter.
		
		// To check the randomChar for even or odd and assign the Character to normalChar.
		
		randomChar = rand() % 26;
		if (randomChar %2==0){
			randomChar = randomChar+32;
		}
		
		//using if-else to fulfil the conditions.
		
		if (loopCounter%10==0){
			if (loopCounter%9==0){
				cout << setw(3) << loopCounter << ":";
				 cout << specialChar << endl;
			}
			
			// Generating the random characters to fill in.
			
			else{
				cout << setw(3) << loopCounter << ":";
				 normalChar = (char)'A' + randomChar; 
				 cout << normalChar << endl;
			}	
		}
			
		else if (loopCounter%9==0){
			cout << setw(3) << loopCounter << ":"; 
			 cout << specialChar;
		}	
		else{
			cout << setw(3) << loopCounter << ":";
			 normalChar = (char)'A' + randomChar; 
				 cout << normalChar;
		}
	}
	
	//---------------------------------------------------------------------------------------------------------------------------------------------
	// Displaying Instructions.
	cout << endl;
	cout << "1. Choose any two-digit number in the table above (e.g. 73)." << endl;
	cout << "2. Subtract its two digits from itself (e.g. 73 - 7 - 3 = 63)" << endl;
	cout << "3. Find this new number (e.g. 63) and remember the letter next to it."<< endl;
	cout << "4. Now press 's' and I'll read your mind...  ";
	char userInput;
	cin >> userInput;
	cout << endl;
	
	
	//----------------------------------------------------------------------------------------------------------------------------------------------
	//Checking for the userInput.
	
	if(userInput=='s'){
		cout << "You selected the character: " << specialChar << endl;
	}
	else{
		cout << "Invalid Input"<< endl;
	}
	
	return 0;
}

