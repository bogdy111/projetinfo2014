#include <iostream>
#include <string>
#include "Vecteur.h"
#include <cmath>

using namespace std;

double Vecteur::getX(){   //ça fait chier
	return x;
}
double Vecteur::getY(){
	return y;
}
double Vecteur::getZ(){
	return z;
}
void Vecteur::setX(double a){ // c'est le bordel
	x = a;
}
void Vecteur::setY(double a){
	y = a;
}
void Vecteur::setZ(double a){
	z = a;
}
bool Vecteur::compare(Vecteur a){ // Est vrai si les vecteurs sont identiques
	if (a.getX() == x){
		if (a.getY() == y){
			if (a.getZ() == z){
				return true;
			}else{
				return false;
            }
        }else{
            return false;
        }
    }else{
    return false;
	}
}


void Vecteur::affiche(){
	cout << x << " " << y << " " << z;
}

Vecteur Vecteur::addition(Vecteur autre) const{
	Vecteur c(autre.getX() + x, autre.getY() + y, autre.getZ() + z);
return c;
}

Vecteur Vecteur::soustraction(Vecteur autre) const{
	Vecteur c(x - autre.getX(),y - autre.getY(),z - autre.getZ());
return c;
}

Vecteur Vecteur::oppose() const {
	Vecteur c(-x, -y , -z);
	return c;
}
Vecteur Vecteur::mult(double a) const{
	Vecteur c( a*x, a*y, a*z);
	return c;
}
double Vecteur::prod_scal(Vecteur autre) const{
	double a;
	a = autre.getX()*x + autre.getY()*y + autre.getZ()*z;
	return a;
}
Vecteur Vecteur::prod_vect(Vecteur a) const{
	Vecteur c(y*a.getZ()- z*a.getY(), z*a.getX() - x*a.getZ(), x*a.getY() - y*a.getX());
	return c;
}

double Vecteur::norme() const{
	double a;
	a = sqrt( x*x + y*y + z*z);
	return a;
}

double Vecteur::norme_carree() const {
	double a;
	a = Vecteur::norme();
	a = a*a;
	return a;
}
