#include <iostream>
#include <string>
#include "Vecteur.h"
#include <cmath>

using namespace std;

Vecteur::Vecteur(double X, double Y, double Z){
			x = X;
			y = Y;
			z = Z;
		}
		
Vecteur::Vecteur(const Vecteur& a){
			x = a.x;
			y = a.y;
			z = a.z;
		}
Vecteur::Vecteur(){
			x = 0.0;
			y = 0.0;
			z = 0.0;
		}

double Vecteur::getX(){
	return x;
}
double Vecteur::getY(){
	return y;
}
double Vecteur::getZ(){
	return z;
}
void Vecteur::setX(double a){
	x = a;
}
void Vecteur::setY(double a){
	y = a;
}
void Vecteur::setZ(double a){
	z = a;
}

void Vecteur::affiche(ostream& sortie){   // affiche les coordonnées du vecteur, séparées par un espace
			cout << x << " " << y << " " << z;
}

double Vecteur::norme() const{    //retourne la norme du vecteur
	return sqrt( x*x + y*y + z*z);
}

double Vecteur::norme_carree() const {    // norme au carré
	double a;
	a = Vecteur::norme();
	return a*a;
}

bool Vecteur::operator==(Vecteur a){  // est égal à ...
	return ((a.getX() == x) and (a.getY() == y) and (a.getZ() == z));
}

bool Vecteur::operator!=(Vecteur a){
	return not ((a.getX() == x) and (a.getY() == y) and (a.getZ() == z)); // est différent de...
}

ostream& operator<<(ostream& sortie, Vecteur& a){  // s'utillise avec la commande:   cout << nom_vecteur;
	a.affiche(sortie);
	return sortie;
}

Vecteur Vecteur::operator+(Vecteur autre){ // addition
	Vecteur c(autre.getX() + x, autre.getY() + y, autre.getZ() + z);
	return c;	
}

Vecteur Vecteur::operator-(Vecteur autre){  // soustraction 
	Vecteur c(autre.getX() - x, autre.getY() - y, autre.getZ() - z);
	return c;	
}

double Vecteur::operator*(Vecteur autre){   //produit scalaire
	double a;
	a = autre.getX()*x + autre.getY()*y + autre.getZ()*z;
	return a;
}

Vecteur Vecteur::operator*(double a){  //surcharge d'opérateurs: multiplication d'un vecteur par un scalaire
	Vecteur c(a*x, a*y, a*z);
	return c;
}

Vecteur Vecteur::operator^(Vecteur a){
	Vecteur c(y*a.getZ()- z*a.getY(), z*a.getX() - x*a.getZ(), x*a.getY() - y*a.getX());
	return c;
}

