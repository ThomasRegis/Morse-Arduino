#include<Arduino.h> // Inclusion de Arduino.h pour pouvoir utiliser la variable String.

class LettreMorse {
    
  public:
    
      LettreMorse(); // Constructeur de la classe.
      String traduction_lettre (char carac);
      String  traduction_mot( String phrase);
      static String txt;
      static String trad;
      
  private:

      static char lettre[63];
      static String morse[63];
      
};