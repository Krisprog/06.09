#include<iostream>
using namespace std;

class Student
{
	string name;
	int age;
public:
	Student()
	{

	}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}

	void Print()
	{
		cout << "X: " << x << "\nY: " << y << endl << endl;
	}
};
int main()
{
	Point obj1;
	Point obj2(1, 2);
	obj2.Print();
}