/// <summary>
/// This console application is used to determine if a word,
/// a phrase or a sentence is a palindrome.
/// </summary>
/// <date>
/// 08/10/2018
/// </date>
/// <author>
/// Jack Keogh
/// </author>

#include <iostream>
#include <string>
#include <algorithm>

bool PalindromeChecker(std::string input)
{
	if (input.empty())
		return false;
	else
	{
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);

		if (input == std::string(input.rbegin(), input.rend()))
			return true;
		else
			return false;
	}
}

int main()
{
	bool running = true;

	std::string input;

	while (running)
	{
		std::cout << "Input a word, phrase or statement to check if it is a palindrome.\nInput 'q' or 'Q' to exit." << std::endl;

		std::cin >> input;

		if (input == "q" || input == "Q")
		{
			running = false;
		}
		else
		{
			std::cout << std::boolalpha << PalindromeChecker(input) << std::endl;
		}
	}

	return 0;
}