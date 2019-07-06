#include<iostream>
#include<string>
using namespace std;
int main()
{
	float c,f;
	cout << "Enter Celsius temperature : ";
	cin >> c;
	f = ((c*9)/5.0)+32;
	cout << "Fahrenheit = " << f << endl;
	string messege = (f >= 70)? "Now weather in Thailand is HOT " : "Now weather in Thailand is COOL ";
	cout << messege << endl;
	return(0);
}