/*
 ******************************
 * Inl�mnings_uppgift_2.1     *
 * Del Tv�:                   *
 * Medelv�rde av 10 element	  *
 * Kursprogram i C++          *
 * Handledare: Gladyz Pabon   *
 * Datum: 2018-01-07          * 
 * @auktor: Amer Ahmed        *
 * Beskrivningen:             *
 * R�kna ut medelv�rdet av 10 *
 * talen i vektrons elemenet  *
 ******************************
*/

#include <iostream>
using namespace std;


 // H�r deklararas fuktion medel:
float medel(int v[], int n)
{ 
	int sum = 0;
	float avg;

	for (int i = 0; i < n; i++)
	{				
		sum+= v[i]; // sum = sum + v[i]; 
	}
	 // avg har summan 
	 // fr�n sum och delas dem med 10.
	avg = (float) sum/n;
	return avg;
}
	// Main funktion;
	// start p� programmet.
int main()
{
	// H�r skapas och tilldela 
	// vektorns elemenet genom 
	// olika v�rde.
	const int num = 10;
	int n[num] = { 19, 25, 30, 45, 51, 62, 75, 81, 97, 100 };
	
    // H�r anropas funktion
	// medel och skriva ut medelv�rde.
	cout << "Medelv\x84rde = " << medel(n,num) <<endl;

	cin.ignore();
	cin.get();
	return 0;
}