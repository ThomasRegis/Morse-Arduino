#include"LettreMorse.hpp"
#include<Arduino.h> // Inclusion de Arduino.h pour pouvoir utiliser la variable String.


LettreMorse::LettreMorse(){}; // //Initialisation du constructeur.

String LettreMorse::txt = "Bonjou?r je m'apelle Thom::as"; // Initialisation du texte à traduire.
String LettreMorse::trad =""; // Initiliasation de la variable string qui va contenir le texte traduit.

// Tableau des caractères classiques et des caractères en morse.
char LettreMorse::lettre[63] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0',' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
String LettreMorse::morse[63] = { ".-", "-...", "-.-." , "-..",".","..-.","--.","....","..",".---","-.-",".-..", "--", "-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",
"-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----",".",".-", "-...", "-.-." , "-..",".","..-.","--.",".","..",".---","-.-",".-..", "--", "-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",
"-..-","-.--","--.."};

String LettreMorse::traduction_lettre (char carac){  // Initialisation de la fonction permettant de traduire un caractère classique en caractère en morse
     int k =0;
     while (k < sizeof(lettre) && carac!=lettre[k]){k++;} // On cherche l'indice du caractère à traduire dans le tableau si il existe.
        if( k < sizeof(lettre) ){return(morse[k]);}       // On retourne la traduction de se caractère grâce à l'indice trouvé et grâce au tableau morse.
        else {return("");}
}

String LettreMorse::traduction_mot(String phrase){
    Serial.println("Le texte à traduire est:\n");
    Serial.println(phrase);
    for(int i=0; i < phrase.length();i++){                      // On fait une boucle for pour récupérer chaque caractère du texte.
          if (traduction_lettre(phrase[i])==""){trad = trad;}   // Si ce caractère n'est pas traduisible on ne touche au string contenant la traduction.
          else{trad += traduction_lettre(phrase[i])+"...";}     // Si il est traduisible on l'ajoute string contenant la traduction.
          
      }
    Serial.println("Le texte traduit en morse donne:\n");
    Serial.println(trad);
    
    return (trad);
    
        
}