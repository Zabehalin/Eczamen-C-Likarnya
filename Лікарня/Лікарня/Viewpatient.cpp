#include "Viewpatient.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Person
{
	string Name;
	string SyrName;
	string PoName;

};
void Viewpatient()
{
	ifstream ReadFile;
	Person person;
	cout << "Name: ";
	cin >> person.Name;
	cout << "SyrName: ";
	cin >> person.SyrName;
	cout << "PoBatcovi: ";
	cin >> person.PoName;
	string Path;
	Path += person.Name;
	Path += "_";
	Path += person.SyrName;
	Path += "_";
	Path += person.PoName;
	Path += ".txt";
	ReadFile.open(Path);
	string DATA;
	while (!ReadFile.eof())
	{
		getline(ReadFile, DATA);
		cout << DATA << endl;
	}
	ReadFile.close();
}
