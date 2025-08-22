/*
Program File Name: Chapter2Examples
Programmer: Jonathan Lopez
Date: August 22
Requirements:
Write a program that contains the following variables:
first, middle, last. Store you initials in these variables, then, displaly them on-screen.
*/

#include <iostream>

int main()
{
  char firstInitial;
  char middleInitial;
  char lastInitial;
  std::cout << "Please enter the initial of your first name:";
  std::cin >> firstInitial;
  std::cout << "Please enter the initial of your middle name:";
  std::cin >> middleInitial;
  std::cout << "Please enter the initial of your last name:";
  std::cin >> lastInitial;
  std::cout << "Your initals are: " << firstInitial << middleInitial << lastInitial;

}