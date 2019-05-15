#include "Autoryz.h"
#include "Menyu.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <conio.h>
using namespace std;

struct Regist
{
	string name;
	string surname;
	unsigned short age;
	string Login;
	string Password;
};
void Login(string LoPa);
void FillPerson(Regist regist, string Avt,string LoPa)
{
	ofstream WriteFile;
	cout << "Name: ";
	cin >> regist.name;
	cout << "SurName: ";
	cin >> regist.surname;
	cout << "Age: ";
	cin >> regist.age;
	cout << "Login: ";
	cin >> regist.Login;
	cout << "Password: ";
	cin >> regist.Password;
	WriteFile.open(Avt, ofstream::app);
	WriteFile << "Name: " << regist.name << "\nSurName: " << regist.surname << "\nAge: " << regist.age <<  endl;
	WriteFile.close();
	WriteFile.open(LoPa, ofstream::app);
	WriteFile << regist.Login << " " << regist.Password << endl;
	Login(LoPa);

}
void Login(string LoPa)
{

	ifstream WriteFile;
	WriteFile.open(LoPa);
	int tes = 0, vyb = 0;
	string str;
	string Log;
	string Pass;
	while (true)
	{
		tes = 0;
		system("cls");
		cout << "<<<<<<<<Login>>>>>>" << endl;
		cout << "Enter " << endl;
		cout << "Login: ";
		cin >> Log;
		cout << "Password: ";
		cin >> Pass;
		while (!WriteFile.eof())
		{
			str = " ";
			WriteFile >> str;
			if (Log == str)
			{
				tes++;
			}
			if (Pass == str)
			{
				tes++;
			}

		}
		if (tes < 2)
		{
			cout << "Eror pass || log " << endl;
			int counter = 1, chosen_option = counter;
			std::vector<std::string> options;

			options.push_back("Povtor");
			options.push_back("Exit");

			while (chosen_option != 2)
			{

				system("cls");



				for (size_t i = 0; i < options.size(); ++i)
				{
					if ((i + 1) == counter) std::cout << "> " << options[i] << std::endl;
					else                    std::cout << options[i] << std::endl;
				}



				char pressed = _getch();

				if (pressed == 'w' && counter != 1)
					counter--;
				if (pressed == 's' && counter != options.size())
					counter++;

				if (pressed == '\r' || pressed == '\n') {
					chosen_option = counter;
					system("cls");

					switch (chosen_option)
					{

					case 1: ;
					case 2: break;

					}

					_getch();
				}


			}


			_getch();
		}
		if (tes >= 2)
		{
			Menyu();
			break;
		}

	}
	WriteFile.close();
}

void Avtoryz()
{
	ifstream ReadFile;
	string AVT = "Avtoryz.txt";
	string LoPa = "LogPass.txt";
	Regist regist;
	int counter = 1, chosen_option = counter;
	std::vector<std::string> options;

	options.push_back("Login");
	options.push_back("Regist");
	options.push_back("Exit");

	while (chosen_option != 3)
	{

		system("cls");



		for (size_t i = 0; i < options.size(); ++i)
		{
			if ((i + 1) == counter) std::cout << "> " << options[i] << std::endl;
			else                    std::cout << options[i] << std::endl;
		}



		char pressed = _getch();

		if (pressed == 'w' && counter != 1)
			counter--;
		if (pressed == 's' && counter != options.size())
			counter++;

		if (pressed == '\r' || pressed == '\n') {
			chosen_option = counter;
			system("cls");

			switch (chosen_option)
			{

			case 1: Login(LoPa);  break;
			case 2: FillPerson(regist, AVT, LoPa);       break;
			case 3: break;

			}

			_getch();
		}


	}


	_getch();

}
