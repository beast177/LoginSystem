#include <iostream>
#include <fstream>  
#include <string.h>
                              /* You could use using namespace std */
void Register()
{

	char username[100];
	char Password[20];
	std::ofstream outfile("Register.txt"); //created and opened the file at the same time

	std::cout << "Enter Your Username: ";
	std::cin >> username;

	std::cout << "Enter Your Password: ";
	std::cin >> Password;

	outfile << Password;
	outfile << "\n" << username;

	std::cout << "Your password and username has been created.";
	std::cout << "\n";
	std::cout << "Now you can login. \n";
	system("pause"); // a pause to read the passed statements
	outfile.close(); // closing the file
}

