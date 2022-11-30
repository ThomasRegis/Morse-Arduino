#include<Arduino.h> // Inclusion de Arduino.h pour pouvoir utiliser la variable String.


class Traducteur{
    public:
    
    Traducteur(); // Constructeur de la classe.
    void lettr_in_clignotements(char lettr);
    void paragraphe_in_clignotements(String paragraphe);
    void tiret();
    void point();
    int Temps;


    private :

};