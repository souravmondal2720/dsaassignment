#include <iostream>
using namespace std;
#define NO_OF_CHARS 256

/* function to check whether characters of a string
can form a palindrome */
bool canFormPalindrome(string str)
{
	// Create a count array and initialize all
	// values as 0
	int count[NO_OF_CHARS] = { 0 };

	// For each character in input strings,
	// increment count in the corresponding
	// count array
	for (int i = 0; str[i]; i++)
		count[str[i]]++;

	// Count odd occurring characters
	int odd = 0;
	for (int i = 0; i < NO_OF_CHARS; i++) {
		if (count[i] & 1)
			odd++;

		if (odd > 1)
			return false;
	}

	// Return true if odd count is 0 or 1,
	return true;
}

/* Driver program to test to print printDups*/
int main()
{
	canFormPalindrome("ababaXbabab") ? cout << "Yes\n" : cout << "No\n";
	return 0;
}
