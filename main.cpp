/*
************************************************************************
 English:=> Swedish	
 Deposit:<=> Insättningsbelopp är enligt användarens sättning in varje år
 Target:<=> Sparmål är enligt användarens önskning 
 Interest:<=> Räntesatsen är det 10% är förändringsfaktor 
 Balance:<=> Saldo kommer att vara efter räknare 
 Counter:<=> Antal år besämmer sig  hur många år blir detta
**************************************************************************
 Program i C++ som frågar som efter ett årligt insättningsbelopp, en räntesats
 och ettsparmål
***************************************************************************
 Uppgift 1.1
 Kusr:Program i C++
 Handledare: Gladyz Pabon
 2017-12-16 @author: Amer Ahmed
***************************************************************************
*/

#include <iostream>
using namespace std;

int main()
{
	float deposit;
	float target;
	float interset;
	float balance;
	float counter;

	// Både saldo och counter tilldelar 0
	balance = 0;
	counter = 0; 

     
	setlocale(LC_ALL, "swedish"); // För svenska tecken

	// 5000 kr varje år
	cout << "Ursäkta ange mycket du vill plcera i varje år:\n";
	cin >> deposit;

	// 70000 kr 
	cout << "Ursäkta ange ditt sparmål:\n";
	cin >> target;

	// 10% och det är förändringsfaktor 1.10
	cout << "Ursäkta ange räntesatsen i förändringsfaktor:\n";
	cin >> interset;

	// saldot upprepas så länge är det mindre än sparmålet
	while (balance < target)
	{
		/*
		 ==============================================
		 Summan av saldot multiplicerar med räntesatsen
		 Antal år ökar med 1
		 ==============================================
		 */
		balance += deposit * (interset / 100 +1);
		counter++;
	}
	 // Det räcknar ut 14 år före sparmålet uppgås till
	cout << "Så ditt sparmål uppgås till efter " << counter << " år.\n";
	cout << "Därefter ska saldo vara " << balance << " kr.\n";

/*
================================================
 cin.ignore(); extraherar tecken upp det angivna
 numret eller  den angivna tecknen är uppnådd och 
 kasserar dem och det händer i visual studio.
 Så att cin.ignore(); är en löning till cin.get
=================================================
 cin.get(); extraherar en enda karaktär från 
 strömmen och returnerar den och  det händer i 
 visual studio.
=================================================
*/
	cin.ignore();
	cin.get();
	return 0;
}
