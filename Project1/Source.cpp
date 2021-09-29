#include <iostream>
#include <fstream> 
#include <filesystem>
#include <time.h>
#include "Header.h" //using header to check things organised 
using namespace std; 
bool is_Empty(std::ifstream& pFile); //defined 

int main()
{
	int check;
	ifstream file("Register.txt"); //opened as read, if exist it opens as read, if doesnt exist returns false and continues

	cout << "\t 1)Register: \n";
	cout << "\t 2)Login: \n";
	cout << "\t Input: ";
	cin >> check;

	if (check == 1)
	{
		if (file.is_open()) //checks if the account already exist
		{
			

			cout << "Looks like an account exsits \n";
			system("pause");
			system("cls"); //clears the screen
			return main();

		}
		Register();
	}
	else if (check == 2)
	{
		
		if (file.is_open())// checks if there is a file named Register.txt
		{

			if (!is_Empty(file))// checking if the file exist but does it has credentials
			{
				cout << "looks like the file exists but doesnt contain anything \n";
				system("pause");
				system("cls"); //clears the screen
				return main();

			}
            Login();
		}
		else
		{
			cout << "Not registered \n";
			system("pause");
		}
	
		
	}
	else {
		cout << "Invalid Input! \n"; //error passed if input is greater than 2 or a float
		
		return main();
	}

	
}


bool is_Empty(std::ifstream& pFile) // a cool code i found on stackoverflow, cuz i kinda confused how to make it, it basically checks if the file is empty(https://stackoverflow.com/questions/2390912/checking-for-an-empty-file-in-c)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}
