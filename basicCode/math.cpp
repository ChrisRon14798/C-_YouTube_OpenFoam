// math program
#include<iostream>
#include<string>
using namespace std;
int main()
{
	float a,b;
	string first_statement,second_statement,third_statement;

first_statement = "we will be adding two numbers of your choice";
	second_statement = "Enter a number a: ";
	third_statement = "Enter a number b: ";
	cout << first_statement << endl;
	cout << second_statement;
	cin >> a;
	cout << third_statement;
	cin >> b;
	cout << a+b << endl;
	return 0;
}
