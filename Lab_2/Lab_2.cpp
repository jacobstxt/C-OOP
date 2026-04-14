#include <iostream>
#include <windows.h>

using namespace std;

class Person
{
    public:
    string name;
    int age;
    Person(string name, int age) : name(name), age(age) {
        cout << "Person: " << name << ", age: " << age << "\n";
    }
};

class MedicalStaff : virtual public Person
{
    public:
    string department;
    MedicalStaff(string name, int age, string department) : Person(name, age), department(department) {
		cout << "MedicalStaff: " << name << ", age: " << age << ", department: " << department << "\n";
    }
};

class Researcher : virtual public Person
{
    public:
    string field;
    Researcher(string name, int age, string field) : Person(name, age), field(field) {
        cout << "Researcher: " << name << ", age: " << age << ", field: " << field << "\n";
    }
};

class Doctor : public MedicalStaff, public Researcher
{
    public:
    string specialization;
    Doctor(string name, int age, string department, string specialization, string field) : MedicalStaff(name, age, department), Researcher(name, age, field), specialization(specialization), Person(name, age) {}
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	Doctor doc("Dr. Smith", 45, "Surgeon", "Cardiology", "Medical Research");

	cout << doc.name << " is a " << doc.specialization << " in the " << doc.department << " department, specializing in " << doc.field << ".\n";
}

