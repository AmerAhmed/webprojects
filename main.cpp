/*
************************************************************************
 English:=> Swedish	
 Deposit:<=> Ins�ttningsbelopp �r enligt anv�ndarens s�ttning in varje �r
 Target:<=> Sparm�l �r enligt anv�ndarens �nskning 
 Interest:<=> R�ntesatsen �r det 10% �r f�r�ndringsfaktor 
 Balance:<=> Saldo kommer att vara efter r�knare 
 Counter:<=> Antal �r bes�mmer sig  hur m�nga �r blir detta
**************************************************************************
 Program i C++ som fr�gar som efter ett �rligt ins�ttningsbelopp, en r�ntesats
 och ettsparm�l
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

	// B�de saldo och counter tilldelar 0
	balance = 0;
	counter = 0; 

     
	setlocale(LC_ALL, "swedish"); // F�r svenska tecken

	// 5000 kr varje �r
	cout << "Urs�kta ange mycket du vill plcera i varje �r:\n";
	cin >> deposit;

	// 70000 kr 
	cout << "Urs�kta ange ditt sparm�l:\n";
	cin >> target;

	// 10% och det �r f�r�ndringsfaktor 1.10
	cout << "Urs�kta ange r�ntesatsen i f�r�ndringsfaktor:\n";
	cin >> interset;

	// saldot upprepas s� l�nge �r det mindre �n sparm�let
	while (balance < target)
	{
		/*
		 ==============================================
		 Summan av saldot multiplicerar med r�ntesatsen
		 Antal �r �kar med 1
		 ==============================================
		 */
		balance += deposit * (interset / 100 +1);
		counter++;
	}
	 // Det r�cknar ut 14 �r f�re sparm�let uppg�s till
	cout << "S� ditt sparm�l uppg�s till efter " << counter << " �r.\n";
	cout << "D�refter ska saldo vara " << balance << " kr.\n";

/*
================================================
 cin.ignore(); extraherar tecken upp det angivna
 numret eller  den angivna tecknen �r uppn�dd och 
 kasserar dem och det h�nder i visual studio.
 S� att cin.ignore(); �r en l�ning till cin.get
=================================================
 cin.get(); extraherar en enda karakt�r fr�n 
 str�mmen och returnerar den och  det h�nder i 
 visual studio.
=================================================
*/
	cin.ignore();
	cin.get();
	return 0;
}
