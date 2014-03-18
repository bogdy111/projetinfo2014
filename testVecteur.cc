#include <iostream>
#include <string>
#include "Vecteur.h"
#include <cmath>

using namespace std;



int main(){

Vecteur vect2(2.6, 3.5,  4.1);
Vecteur vect1(3.0,2.3, 3.5);
Vecteur vect3(2.6, 3.5, 4.1);
Vecteur somme1_2(vect1.addition(vect2));
Vecteur sous1_2(vect1.soustraction(vect2));
Vecteur Oppose(0.,0.,0.);
Oppose = vect1.oppose();

bool Compare (vect1.compare(vect2));
bool Compare2 (vect3.compare(vect2));


if (Compare){
	cout << "le vect1 est pareil que vect2 " << endl;
	vect1.affiche();
	vect2.affiche();
}else{
	cout << "le vect1 est different du vect2 " << endl;
	vect1.affiche();
	vect2.affiche();
}
if (Compare2){
	cout << "le vect3 est pareil que le vect2" << endl;
	vect3.affiche();
	vect2.affiche();
}else{
	cout << "les deux vecteurs sont differents" << endl;
	vect3.affiche();
	vect2.affiche();
}

cout << "Soustraction vect1 - vect2" << endl;
sous1_2.affiche();
cout << "Addition vect1 + vect2" << endl;
somme1_2.affiche();
cout << endl;
cout << "L'oppose de ";
vect1.affiche();
cout << " est: ";
Oppose.affiche();
cout << "La multiplication par le scalaire 2.0 du vect1 est :" << endl;
Oppose = vect1.mult(2.0);
Oppose.affiche();
cout << "Le produit vectoriel est" << endl;
Oppose = vect1.prod_vect(vect2);
Oppose.affiche();
cout << "La norme du vect1 est:" << vect1.norme() << endl;
cout << "la norme carree du vect1 est: " << vect1.norme_carree() << endl;
	return 0;
}
