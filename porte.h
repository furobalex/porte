/* 
   Prototypes de fonctions ouvrant et fermant les portes
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#ifndef PORTE

  #define PORTE
  
  #define SERVOMOTOR_LEFT 9
  #define SERVOMOTOR_RIGHT 10
  
  #define POS_INIT 90
  #define POS_FIN  190
  
  void ouvrirPorte();
  void fermerPorte();
  void initialisation();
  void update();
  bool fini();
  
#endif
  
  
