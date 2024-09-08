#include<iostream>
#include<sstream>
#include<string>

std::string userinputs() {

	std::string input;

	std::string allText;

	std::cout << "Enter multiple lines of text (type 'END' on a new line to finish):" << std::endl;

	// Read input lines until 'END' is entered
	while (true) {
		std::getline(std::cin, input);

		if (input == "END") {
			break;
		}

		allText += input + "\n";  // Append the input line to allText, adding a newline character
	}

	// Output all the text that was input
	std::cout << "You entered:" << std::endl;
	std::cout << allText << std::endl;

	return allText;
}


int countWords(std::string txt)
{
	std::istringstream stream(txt);
	std::string word;
	int count = 0;

	while (stream >> word)
	{

		++count;
	}
	return count;
}



int main() {

	std::string txt = userinputs();

	int count = countWords(txt);

	std::cout << count << std::endl;

	return 0;

}