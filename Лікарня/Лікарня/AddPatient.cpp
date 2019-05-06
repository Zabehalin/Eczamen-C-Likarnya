#include "AddPatient.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Person
{
	string name;
	string surname;
	unsigned short age;
	string Phone;
	string Doctor;
	int Chamber;
	void ShowPerson()
	{
		system("cls");
		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << "\nPhone number: " << Phone << "\nDoctor: " << Doctor << "\nChamber: " << Chamber << endl;
	}

};
void FillPerson(Person person,string Path)
{
	ofstream WriteFile;
	cout << "Name: ";
	cin >> person.name;
	cout << "SurName: ";
	cin >> person.surname;
	cout << "Age: ";
	cin >> person.age;
	cout << "Phone number: ";
	cin >> person.Phone;
	cout << "Doctor: ";
	cin >> person.Doctor;
	cout << "Chamber: ";
	cin >> person.Chamber;
	WriteFile.open(Path, ofstream::app);
	WriteFile << "Name: " << person.name << "\nSurName: " << person.surname <<"\nAge: "<< person.age << "\nPhone: " << person.Phone << "\nDoctor: " << person.Doctor<<"\nChamber: "<< person.Chamber << endl;
	WriteFile.close();

}

void AddPatient()
{
	ifstream ReadFile;
	string Path = "User.txt";
	Person person;
	FillPerson(person, Path);

	//system("pause");
}
