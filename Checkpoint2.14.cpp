/* Program File Name: Checkpoint2.14
Programmer: Darlene Williams
Date: July 2024
Requirements:
Write a program that has the following character variables:
first, middle, and last. Store your intials in these variables
then display them on the screen
*/

#include <iostream>


int main()
{
	char firstInitial;
	char middleInitial;
	char lastInitial;
	std::cout << "Please enter the initial of your first name:";
	std::cin >> firstInitial;
	std::cout << "Please enter the initial of your middle name";
	std::cin >> middleInitial;
	std::cout << "Please enter your lastInitial:";
	std::cin >> lastInitial;
	std::cout << "Your initials are:" << firstInitial << middleInitial << lastInitial;



}