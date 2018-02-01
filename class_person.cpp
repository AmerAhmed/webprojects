/*
******************************
* Inlämningsuppgift_del_3    *
* Uppgifter_3.1-3.4 	     *
* Kursprogram i C++          *
* Handledare: Gladyz Pabon   *
* Datum : 2018-01-07         *
* @auktor: Amer Ahmed        *
* Beskrivning:				 *
* Klass: innehåller person   * 
* namn och alder och linsok  *
* och bubblesort i vektorn   *
* och binär söker efter      *
* ålder i personvektorn      *
* 2018-01-29                 *
******************************
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Klass: Innehåller person:
class Person
{	
public:
	string namn;
	int alder;

	// Metod: sätt idet info som behövs:
	void SkrivUt(string _namn, int _alder)
	{
		namn = _namn;
		alder = _alder;
	}
	string getNamn()
	{
		return namn;
	}
	int getAlder()
	{
		return alder;
	}
};

// Linjär sökning av ålder:
int linsok(Person p[], int n, int a)
{
	// går igenom hela listan:
	for (int i = 0; i < n; ++i)
	{
		// Hittar det vi söker efter eller:
		if (p[i].alder == a)
		{
			return i;
		}
	}
	// Hittas det inte person:
	return -1;
};
void bubblesort(Person p[], int n)
{
	// Yttre loop söker hela listan:
	for (int i = 0; i < n; ++i)
	{
		//Inre loop, element för elemnet:
		int nrLeft = n - 1;
		for (int j = 0; j < nrLeft; j++)
		{
			// jämförselse och byter plats ner:
			if (p[j].alder > p[j + 1].alder)
			{
				Person temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}
void byt(Person &p, Person &q)
{
	// Byter plats:
	Person temp;
	temp.namn = p.namn;
	temp.alder = p.alder;
	p.namn = q.namn;
	p.alder = q.alder;
	q.namn = temp.namn;
	q.alder = temp.alder;

}
int binarSok(Person p[], int lowerIndex, int upperIndex, int alder) 
{
	int meddleIndex = (lowerIndex + upperIndex) / 2;
	if (p[meddleIndex].alder == alder)
		    // Alder hittas.
		   return meddleIndex; 

	else if (lowerIndex == upperIndex)
		    // Alder hittas inte.
		    return -1;

	else if (p[meddleIndex].alder > alder)
		    // kolla på nedre halven.
		    return binarSok(p, lowerIndex, meddleIndex - 1, alder); 

	else if (p[meddleIndex].alder < alder)
		    // kolla på övere halven.
		    return binarSok(p, meddleIndex + 1, upperIndex, alder);
}
// Funktion: Main, star på programmet:
int main()
{
	//Den är bara en linj mellan:
	cout << "=======================" << endl;

	// Använda obejkt p:
	Person p;
	p.SkrivUt("Amanda", 30);
	cout << "Personen heter " << p.getNamn() << endl;
	cout << "och hon \x84r " << p.getAlder() << " \x86r gammal." << endl;

	//Den är bara en linj mellan:
	cout <<"======================="<< endl;

	// Skapa en lista med person namn och ålder
	// samt anropa funktion SkrivUt 
	Person familj[4];
	familj[0].SkrivUt("Karin", 5);
	familj[1].SkrivUt("Carolin", 20);
	familj[2].SkrivUt("Emma", 9);
	familj[3].SkrivUt("Monika", 3);
	
	// Anropa funktino bubblesort:
    bubblesort(familj, 4);

	// Den sorterade listan och skriv ut:
    for (int i = 0; i < 4; i++) 
	     cout << familj[i].namn << " \x84r " << familj[i].alder <<" \x86r gammal. "<< endl;

    // Anropa funktion linsok och söker
   // efter en viss person i vektor.
   int index = linsok(familj, 4, 20);
   if (index == -1)
	     // Antingen hittas personen eller inte:
	     cout << "Personen hittas inte! " << endl;
   else
	    //Den är bara en linj mellan:
		cout << "=======================" << endl;

	      // Hittas person skriv ut info:
		 cout << "Personen du s\x94ker efter och hon heter " << familj[index].namn <<
			     " och finns p\x86 index " << index;

	cin.ignore();
	cin.get();
	return 0;
}