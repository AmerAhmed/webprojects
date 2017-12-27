/*
***********************************************************
Program i C++ ska användaren gissa ett tal mellan 1 och 100
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

	setlocale(LC_ALL, "swedish"); // För svenska tecken
	do
	{
		cout << "Gissa ett tal mellan 1 och 100:\n";
		cin >> numGissa;
		antalForsok++;

		if(numGissa > numTal)
			cout << "Ditt tal är så högre\n\n";


		else if(numGissa < numTal)
			cout << "Ditt tal är så lägre\n\n";

		else
			cout << "Grattis! Du gissade rätt på " << antalForsok << " försök!\n\n";

	} while(numGissa != numTal);
	/*
	===============================================
	cin.ignore(); extraherar tecken upp det angivna
	numret eller  den angivna tecknen är uppnådd och
	kasserar dem och det händer i visual studio.
	Så att cin.ignore(); är en löning till cin.get
	===============================================
	cin.get(); extraherar en enda karaktär från
	strömmen och returnerar den och  det händer i
	visual studio.
	===============================================
	*/
	cin.ignore();
	cin.get();
	return 0;
}
