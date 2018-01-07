
/*
******************************
* Inlämnings_uppgift_2.3     *
* Del Två:     			     *
* Kursprogram i C++          *
* Handledare: Gladyz Pabon   *
* Datum : 2018-01-07         *
* @auktor: Amer Ahmed        *
* Beskrivning:				 *
* Räkna ut primTal redan     *
* 2 3 5 7 11 13 17 19 23 29 31
******************************
*/

#include <iostream>
using namespace std;

// Funktion, kontrollerar
// om n är primtal eller inte.
int FindPrim(int n)
{
	bool primTal = true;

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
		  primTal= false;
		  break;
		}

	}
	return primTal;
}

int main()
{

	bool primTal;

	for (int n = 2; n <36; n++)
	{
		// isPrime ska vara sant
		// för primtal.
		primTal = FindPrim(n);

		if (primTal == true)
		   cout << n << " ";
	}

	cin.ignore();
	cin.get();
	return 0;
}

