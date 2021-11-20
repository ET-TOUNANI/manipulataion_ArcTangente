#ifndef _arcTan_
#define _arcTan_
// #define Max 1000
#include <math.h>

typedef struct{
    int deg;
    float cf;
}monome;

typedef struct{
    int n;//l'order de developpement limité 
    monome m[1000]; 
}arcTan;

void definer(arcTan *t){
	int i;
    for(i=0;i <(t->n)*2+3;i++){
        t->m[i].cf=pow(-1,i)/(2*i+1);
        t->m[i].deg=2*i+1;
	}
}

void afficher_dev_Arc(arcTan *t){
	int i;
    for(i=0;t->m[i].deg< (t->n)*2+3;i++){
        printf("%.3fX^%d + ",t->m[i].cf,t->m[i].deg);
    }
    printf("\n");
}

float calculer_arcTan(arcTan *t,float x){
    float r=0;
    int i;
    for(i=0;t->m[i].deg< (t->n)*2+3;i++){
        r=r+t->m[i].cf * (pow(x,t->m[i].deg));
    }
    
    return r;
}
#endif _arcTan_

