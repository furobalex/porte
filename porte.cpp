/* 
   Fonctions gérant l'ouverture et la fermeture du robot principal
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#include <arduino.h> // pour la fonction micros()
#include <Servo.h>

#include "porte.h"

static Servo servoLeft;
static Servo servoRight;
static int pos = 0;
static unsigned long tpsPrec = 0;

void ouvrirPorte()//la fonction qui ouvre les portes.
{
    pos = POS_FIN;
}

void fermerPorte()//la fonction qui ferme les portes.
{
   pos = POS_INIT;
}

// a ajouter a l'initialisation
void initialisation()
{
    // ajout des pins au programme
  servoLeft.attach(SERVOMOTOR_LEFT); 
  servoRight.attach(SERVOMOTOR_RIGHT);
}

// a ajouter a l'update
void update()
{
    tpsPrec = micros();
    servoLeft.write(pos-120);
    servoRight.write(180-pos+90);
}

bool fini()
{
    if (micros() - tpsPrec < DELAI)
    {
        return false;
    }
    
    else
    {  
        return true;
    }
}
