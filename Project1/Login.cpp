#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
using namespace std;

void Login()
{  
	ifstream fil("Register.txt");

	char pass[20];
	string check; //this string is used for checking the stored password
	string sLine; // this string is used for reading the file stored password nd storing it in this string
	cout << "\t Enter Your Password: ";
	cin >> pass;

	if (fil.is_open()) //checking if file exist 
	{
		for ( int i = 0; i < pass[i]; i++) //get the type password and store it in pass[20] 
		{
			check = pass; // typing that password typed by the user into the string check
		}
		
	}

	if (fil.good())//checking if file exist 
	{
		getline(fil, sLine); //Reads the first line only and stores it in string sLine
	}

	if (check == sLine) // checking string check is equal to string sLine
	{                   
		cout << "\nLogin Successful";
	}
	else
	{
		cout << "\nIncorrect Password";
	}
    fil.close();
	                                             /*Your ur functions after this*/
	system("pause");
	
}