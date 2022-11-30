#include"LettreMorse.hpp" // Inclusion des deux fichiers hpp pour utiliser leurs fonctions et variables.
#include"Traducteur.hpp"
#include<Arduino.h> // Inclusion de Arduino.h pour pouvoir utiliser la variable String.

LettreMorse lm;
Traducteur tr;

void setup() {
pinMode(LED_BUILTIN, OUTPUT); // Configuration de la LED dans la carte arduino pour qu'elle puisse clignoter.
Serial.begin(9600);
delay(500); // Laisser le temps au données d'arriver.
tr.paragraphe_in_clignotements(lm.traduction_mot(lm.txt)); // Apelle des deux fonctions principales dont l'une va permettre la traduction
                                                           // du texte (txt) en morse et l'zutre de transformer se texte traduit en clignotements.

}

void loop() {
  // put your main code here, to run repeatedly:
}