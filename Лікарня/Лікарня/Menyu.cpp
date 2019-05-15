#include "Menyu.h"
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include "AddPatient.h"
#include "Viewpatient.h"
using namespace std;

void Menyu()
{
	int counter = 1, chosen_option = counter;
	std::vector<std::string> options;

	options.push_back("Add a patient");
	options.push_back("Add nev a patient");
	options.push_back("View patients");
	options.push_back("Exit");

	while (chosen_option != 4)
	{
		int npv = 0;
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

			case 1: AddPatient(npv);  break;
			case 2: AddPatient(1);       break;
			case 3: Viewpatient();       break;
			case 4:  break;

			}

			_getch();
		}


	}


	_getch();
}
