Td Morse Arduino :



L’objectif est de réaliser un programme arduino capable de réaliser deux tâches : 
-	Afficher la traduction en Morse (points et tirets) d’un texte pouvant contenir des lettres majuscules, des lettres minuscules, des nombres et des espaces. Tout autre caractère ne sera pas pris en compte par le traducteur.

-	Utiliser le texte traduit en morse pour faire clignoter la carte arduino (2s pour un tiret, 0.5s pour un point). Les espaces entre deux lettres seront modélisés comme étant la succession de 3 points. Les espaces entre deux mots seront modélisés comme étant la succession de 7 points. 




Fonctionnement : 
On utilisera 2 fonctions principales qui seront appelées dans le fichier arduino : Script.ino.
-	La fonction traduction_mot retourne l’équivalent en morse d’un texte. Pour cela elle utilise la fonction
Traduction_lettre qui retourne l’équivalent en morse d’un seul caractère.

-	La fonction paragraphe_in_clignotements qui traduit en clignotement une suite de tirets ou de points. Pour cela elle utilise la fonction lettr_in_clignotements qui traduit un tiret ou un point en clignotement 

De plus, les symboles traduisibles d’un seul caractère sont recensés dans un tableau, de même que leur équivalent en morse qui est recensé dans un autre tableau avec le même indice.

 
