#include <iostream>
#include <Windows.h>

using namespace std;

class Student
{
public:

    Student() : name("empty"), id(0)
    {
        cout << "Student() - default" << endl;
    }

    explicit Student(int studentId) : name("empty"), id(studentId)
    {
        cout << "Student(int) - explicit, id=" << id << endl;
    }


    Student(string studentName, int studentId)
        : name(studentName), id(studentId)
    {
        cout << "Student(string, int) - name=" << name
            << ", id=" << id << endl;
    }


    Student(const Student& other)
        : name(other.name), id(other.id)
    {
        cout << "Student(const Student&) — copy of " << other.name << endl;
    }

    void info() const
    {
        cout << "  [Student] " << name << ", id=" << id << endl;
    }

protected:
    string name;
    int id;
};


class GraduateStudent : public Student
{
public:
    using Student::Student;


    GraduateStudent(string studentName, int studentId, string topic)
        : Student(studentName, studentId), thesisTopic(topic)
    {
        cout << "GraduateStudent(string, int, string) — topic: "
            << thesisTopic << endl;
    }

    void info() const
    {
        cout << "  [GraduateStudent] " << name << ", id=" << id
            << ", topic: " << thesisTopic << endl;
    }

private:
    string thesisTopic{ "not initialized" }; 
};


int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    cout << "=== Base class Student ===\n" << endl;

    cout << "1) Student s1;" << endl;
    Student s1;
    s1.info();

    cout << "\n2) Student s2(42);" << endl;
    Student s2(42);               
    s2.info();


    cout << "\n3) Student s3(\"Максим\", 101);" << endl;
    Student s3("Maksym", 101);
    s3.info();

    cout << "\n4) Student s4 = s3;  (копіювання)" << endl;
    Student s4 = s3;
    s4.info();



    cout << "\n=== Derived class GraduateStudent ===\n" << endl;

    cout << "5) GraduateStudent g1;  (inherited default)" << endl;
    GraduateStudent g1;
    g1.info();

    cout << "\n6) GraduateStudent g2(99);  (inherited Student(int))" << endl;
    GraduateStudent g2(99);
    g2.info();

    cout << "\n7) GraduateStudent g3(\"Olena\", 202);  "
        << "(inherited Student(string, int))" << endl;
    GraduateStudent g3("Олена", 202);
    g3.info();

    cout << "\n8) GraduateStudent g4(\"Ivan\", 303, \"Numerical Methods\");  "
        << "(own constructor)" << endl;
    GraduateStudent g4("Ivan", 303, "Numerical Methods");
    g4.info();

    cout << "\n9) GraduateStudent g5 = g4;  "
        << "(implicit copy constructor)" << endl;
    GraduateStudent g5 = g4;

    g5.info();
}
