/* 
   Code d'exemple pour les deux servomoteurs controlant les portes
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#include <Servo.h>
#include "porte.h"

unsigned long tps = 0;

// fonction de calibrage
void setup() 
{         
  initialisation();
}

// boucle principale
void loop()
{  
    // NE PAS FAIRE LES DEUX EN MEME TEMPS
    fermerPorte();
    update(); 
    delay(1000);  
    ouvrirPorte();
    update(); 
   delay(1000); 
}
