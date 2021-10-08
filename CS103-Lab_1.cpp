
#include <iostream>

// Function to draw line (Has a parameter):

void Line(int numLine) {

	for (int i = 0; i <= numLine;i++) {
	
		std::cout << "-";
	
	}

	std::cout << "\n";

}

// Function to draw the hangman:

void DrawHangMan() {

	std::cout << "   ___    " << std::endl;
	std::cout << "  |   |   " << std::endl;
	std::cout << "  |   o   " << std::endl;
	std::cout << "  |  \\|/ " << std::endl;
	std::cout << "  |   |   " << std::endl;
	std::cout << "  |  / \\ " << std::endl;
	std::cout << "  |       " << std::endl;
	std::cout << "  |       " << std::endl;
	std::cout << "-----     " << std::endl;
}

// Function to draw a walkman (Man without the Hanging Post / Correct Spelling):

void Walkman() {

	std::cout << "          " << std::endl;
	std::cout << "      o   " << std::endl;
	std::cout << "     \\|/ " << std::endl;
	std::cout << "      |   " << std::endl;
	std::cout << "     / \\ " << std::endl;
	std::cout << "          " << std::endl;
	std::cout << "          " << std::endl;
	std::cout << "          " << std::endl;

}



// Function to draw the hangman inverted (Incorrect Spelling - 3 Fails):

void InvertHangMan() {

	std::cout << "Your guess is wrong " << std::endl;
	std::cout << "          " << std::endl;
	std::cout << "   ___    " << std::endl;
	std::cout << "  |   |   " << std::endl;
	std::cout << "  |  /|\\ " << std::endl;
	std::cout << "  |   |   " << std::endl;
	std::cout << "  |  /|\\ " << std::endl;
	std::cout << "  |   o   " << std::endl;
	std::cout << "  |       " << std::endl;
	std::cout << "  |       " << std::endl;
	std::cout << "-----     " << std::endl;

}

//  Main playing function (Has return value): 

std::string Play() {

	std::string awnser;

	std::cout << "Guess the missing letter in Yo_bee : ";
	std::cin >> awnser;
	
	return awnser;

}

bool whichAwnser = false;

int main()
{

	std::cout << "Welcome to play hangman. This game is to check your spelling skill\n";
	Line(66);
	DrawHangMan();

	for (int i = 0; i < 3;i++) {
		
		//Placing return value to string variable.

		std::string awnser = Play();

		if (awnser == "o") {
			
			std::cout << "Your guess is correct\n";
			whichAwnser = true;
			break;
		
		}
		else {
		
			std::cout << "Sorry, try again\n\n";
		
		}

	
	}

	if (whichAwnser==false) {
	
		InvertHangMan();
	
	}
	else {
	
		Walkman();
	
	}



}

