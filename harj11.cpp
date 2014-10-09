/*******************************
* Harjoitus 11
* Paulus Linna
* IIA14SB
* Teht‰v‰kuvaus:
*
*	Muuta teht‰v‰n 9 laskin-ohjelmaa niin, etta valikko nayttaa
*	seuraavalta:
*
*	VALIKKO
*	0. Lopetus
*	1. Summa
*	2. Erotus
*	3. Tulo
*	4. Osamaara
*	5. Jakojaannos
*	6. Syota uudet luvut laskemista varten
*
*	Laskimella on siis mahdollista k‰sitell‰
*	useita lukupareja k‰ytt‰j‰n toiveiden
*	mukaisesti. Mita tapahtuu, jos luku2 on 0?
*	HUOM! goto -lauseen k‰ytt‰ on KIELLETTY!!!!
*
* P‰iv‰m‰‰r‰: 9.10.2014
* Versio: 1.0
*
********************************/

#include <iostream>
using namespace std;

float luku1, luku2;
int valinta;

void main()
{
	do{
		cout << "Anna kaksi kokonaislukua ";
		cin >> luku1;
		cin >> luku2;

		do {

			cout << "\nVALIKKO\n";
			cout << "0. Lopetus\n";
			cout << "1. Summa\n";
			cout << "2. Erotus\n";
			cout << "3. Tulo\n";
			cout << "4. Osamaara\n";
			cout << "5. Jakojaannos\n";
			cout << "6. Syota uudet luvut laskemista varten\n";
			cin >> ws >> valinta;

				switch (valinta){
				case 0:
					break;
				case 1: cout << "Summa on " << luku1 + luku2 << endl;
					break;
				case 2: cout << "Erotus on " << luku1 - luku2 << endl;
					break;
				case 3: cout << "Tulo on " << luku1 * luku2 << endl;
					break;
				case 4: cout << "Osamaara on " << luku1 / luku2 << endl;
					break;
				case 5: cout << "Jakojaannos on " << (int)luku1 % (int)luku2 << endl;
					break;
				case 6:
					break;
				default: cout << "Virhe";
					break;
				}
			} while (valinta > 0 && valinta <= 5);
	} while (valinta == 6);
}