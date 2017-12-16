/*
***********************************************************
Program i C++ ska anv�ndaren gissa ett tal mellan 1 och 100
***********************************************************
Uppgift 1.2
Kusr:Program i C++
Handledare: Gladyz Pabon
2017-12-16 @author: Amer Ahmed
***********************************************************
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int numTal, numGissa, antalForsok;
	antalForsok = 0;

	srand(time(0)); //slumpgenerator
	numTal = rand() % 100 + 1; // slumptal mellan 1 och 100

	setlocale(LC_ALL, "swedish"); // F�r svenska tecken
	do
	{
		cout << "Gissa ett tal mellan 1 och 100:\n";
		cin >> numGissa;
		antalForsok++;

		if(numGissa > numTal)
			cout << "Ditt tal �r s� h�gre\n\n";


		else if(numGissa < numTal)
			cout << "Ditt tal �r s� l�gre\n\n";

		else
			cout << "Grattis! Du gissade r�tt p� " << antalForsok << " f�rs�k!\n\n";

	} while(numGissa != numTal);
	/*
	===============================================
	cin.ignore(); extraherar tecken upp det angivna
	numret eller  den angivna tecknen �r uppn�dd och
	kasserar dem och det h�nder i visual studio.
	S� att cin.ignore(); �r en l�ning till cin.get
	===============================================
	cin.get(); extraherar en enda karakt�r fr�n
	str�mmen och returnerar den och  det h�nder i
	visual studio.
	===============================================
	*/
	cin.ignore();
	cin.get();
	return 0;
}