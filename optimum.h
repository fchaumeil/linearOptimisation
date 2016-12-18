
class Optimum{

public:
	Optimum(int,int );	//nombre à convertir puis nombre de bits du codage
	~Optimum();
	Optimum* Get_suivant(){return Optimum_Prochain;};
	//short int* opt() {return opt;};
	void ajout_mot_binaire(short[]);
	void destruction_liste_optimum(Optimum)

private:
	//short int opt[];	//adresse du tableau mot_binaire
	Optimum* Optimum_Prochain;
	short nombre;

}

// Arbre.h


class Arbre{
private:
	double N;
	int sens;
	Roue* menante;
	Roue* menee;
	Arbre* suivant;
public:
	Arbre(double,int,Roue*,Roue*);
	~Arbre();
	double getN();
	void setN(double);
	int getSens();
	void setSens(int);
	Roue* getMenee();
	void setMenee(Roue*);
	Roue* getMenante();
	void setMenante(Roue*);
	void setSuivant(Arbre*);
	Arbre* getSuivant();
	void affiche_arbres();
};