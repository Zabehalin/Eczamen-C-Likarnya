#include "AddPatient.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Person
{
	string Name;
	string SyrName;
	string PoName;
	string Age;
	string age;
	string Date;
	string Time;
	string Doctor;
	string Diagnosis;
	string Medicine;
	int Chamber;
	double Payment;

};
void FillPerson(Person person,string Path)
{
	ofstream WriteFile;
	cout << "Date: ";
	cin >> person.Date;
	cout << "Time: ";
	cin >> person.Time;
	cout << "Doctor: ";
	cin >> person.Doctor;
	cout << "Diagnosis: ";
	cin >> person.Diagnosis;
	cout << "Medicine: ";
	cin >> person.Medicine;
	cout << "Chamber: ";
	cin >> person.Chamber;
	cout << "Payment: ";
	cin >> person.Payment;
	WriteFile.open(Path, ofstream::app);
	WriteFile << "====================================================" << endl;
	WriteFile << "Date: " << person.Date << "\tTime: " << person.Time << "\tPayment: " << person.Payment<<"\n====================================================" << "\n\nDoctor: "<< person.Doctor << "\n\nDiagnosis: " << person.Diagnosis << "\n\nMedicine: " << person.Medicine <<"\n\nChamber: "<< person.Chamber <<  endl;
	WriteFile.close();

}

void AddPatient(int v)
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
	if (v == 0)
	{
		FillPerson(person, Path);
	}
	else if (v > 0)
	{
		ofstream File;
		File.open(Path, ios_base::app);
		ofstream WriteFile;
		cout << "Age: ";
		cin >> person.Age;
		WriteFile.open(Path, ofstream::app);
		WriteFile << "====================================================" << endl;
		WriteFile << "Name: " << person.Name << "\tSyrName: " << person.SyrName << "\nPoBatcovi: " << person.PoName << "\tAge: " << person.Age << endl;
		WriteFile << "====================================================" << endl;


		FillPerson(person, Path);
		File.close();
	}
	

}
