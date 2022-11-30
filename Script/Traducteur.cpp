#include"Traducteur.hpp"
#include<Arduino.h> // Inclusion de Arduino.h pour pouvoir utiliser la variable String.


Traducteur::Traducteur(){}; //Initialisation du constructeur.


void Traducteur::lettr_in_clignotements(char lettr){ // Initialisation de la fonction permettant de faire clignoter la LED grâce à un caractère.
        if ( lettr == '-') { tiret();}
        else if ( lettr == '.') {point();}
}

void Traducteur::paragraphe_in_clignotements(String paragraphe){ // Initialisation de la fonction permettant de faire clignoter la LED grâce à un texte.
      for(int j=0; j < paragraphe.length();j++){     // On fait une boucle for pour récupérer chaque caractère du texte et on utilise la
            lettr_in_clignotements(paragraphe[j]);   // la fonction qui permet le clignotemment d'un caractère.
}

}



void Traducteur::tiret(){  // Représentation d'un tiret en clignotements 
    
    digitalWrite(LED_BUILTIN,HIGH);
    Temps = millis();
    while((millis()-Temps)<2000){digitalWrite(LED_BUILTIN,HIGH);}  // LED alllumé pendant 2s.
    while((millis()-Temps)<2500){digitalWrite(LED_BUILTIN,LOW);}   // LED ensuite éteinte pendant 2500-2000 = 500 s.
}

void Traducteur::point(){
    
    digitalWrite(LED_BUILTIN,HIGH); // Représentation d'un point en clignotements
    Temps = millis();
    while((millis()-Temps)<500){digitalWrite(LED_BUILTIN,HIGH);} //LED alllumé pendant 2s.
    while((millis()-Temps)<1000){digitalWrite(LED_BUILTIN,LOW);} // LED ensuite éteinte pendant 1000-500 = 500 s.

}