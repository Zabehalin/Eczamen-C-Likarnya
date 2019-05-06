#include "Menyu.h"
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include "AddPatient.h"
using namespace std;
void doSomething() {
	std::cout << "\n\nDoing something\n\n";
}

void Menyu()
{
	int counter = 1, chosen_option = counter;
	std::vector<std::string> options;

	options.push_back("\t\t\tAdd a patient");
	options.push_back("\t\t\tView patients");
	options.push_back("\t\t\tAdd a doctor");
	options.push_back("\t\t\tRemove doctor");

	while (chosen_option != 4)
	{

		system("cls");



		for (size_t i = 0; i < options.size(); ++i)
		{
			if ((i + 1) == counter) std::cout << "\t\t\t> " << options[i] << std::endl;
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

			case 1: AddPatient();  break;
			case 2: cout << "Test";       break;
			case 3: cout << "Test2";       break;
			case 4: cout << "Test2";       break;

			}

			_getch();
		}


	}


	_getch();
}
