#ifndef PRJ_VECTEUR_H
#define PRJ_VECTEUR_H
class Vecteur{
	private:
		double x;
		double y;
		double z;
	public:
		void affiche();
		Vecteur(double X, double Y, double Z){
			x = X;
			y = Y;
			z = Z;
		}
		double getX();
		void setX(double);
			
		double getY();
		void setY(double);
		
		double getZ();  // model de syntaxe à suivre
		void setZ(double);
			
		bool compare(Vecteur a); // est True s'ils sont identiques
		
		Vecteur addition(Vecteur autre) const;	
	
		Vecteur soustraction(Vecteur autre) const; // renvoie: "Vecteur - autre" (et non pas "autre - Vecteur")
		
		Vecteur oppose() const;
		
		Vecteur mult(double) const;
		
		double prod_scal(Vecteur autre) const;
		
		Vecteur prod_vect(Vecteur) const;
		
		double norme() const;
		
		double norme_carree() const;
	};

#endif // PRJ_VECTEUR_H
