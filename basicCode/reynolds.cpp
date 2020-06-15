#include<iostream>
#include<string>
#include<cmath>
using namespace std;

double Reynolds_calc(double rho,double U,double D,double mu)
{      
double Re=(rho*U*D)/mu;

	return Re;
}

int main ()
{
	double rho,U,D,mu;
cout << "input density in kg/m3: " << endl;
	cin >> rho;

cout << "input velocity in m/s: " << endl;
cin >> U;

cout << "input characteristics length in m:  " << endl;
cin >> D;

cout << "input dynamic viscosity in SI units: " << endl;
cin >> mu;


	// calc Re
	cout << "The reynolds number is :" << Reynolds_calc(rho,U,D,mu) << endl;

	return 0;

}

