#ifndef BV_H_INCLUDED
#define BV_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int capacite_e;
    int capacite_o;
    char adresse [20];
    int idagent;
    int id;
} bv;
int ajouter(char*bureaudevote,bv b);
int modifier(char*bureaudevote,bv b);
int supprimer(char*bureaudevote,bv b);


#endif
