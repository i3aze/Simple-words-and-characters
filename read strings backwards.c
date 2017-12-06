// reverse().cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "iostream"

void reverseInput();	// function that reverses every letter that you write

int main()
{
	printf("Write something to see check if its palindrome\n");		// ask the user to enter something

	reverseInput();			// call the reverse function

	printf("\n");			// print newline for better visibility

	system("pause");		// pause so the user can see the screen
	return 0;
}

void reverseInput()		// here is the function
{
	char c;		// assign char to write in it, integer to keep track of the chars you write and array called digit to store the chars
	int i = 0;
	char digit[10000];

	while ((c = getchar()) != '\n')		// while the user enters new characters and does not hit enter
	{
		digit[i] = c;		// assign them to the array with element i
		i++;		// after every char, increase the element. No need for explanation, the elements in the array start from [0], [1], [2]... to [\0]
	}

	for (int r = 0, j = i - 1; r <= i - 1 && (j >= 0); r++, j--)	// iterate through the array, for every element r that starts from 0 and interates increasigly start to iterate element j that starts from \0 and goes backwards
	{
			printf("%c", digit[j]);		// print the elements in the array as iterated by j (backwards)
	}
