#include<stdio.h>
#include<stdlib.h>
#include "arcTan.h"
#include "tounani.h";
#include<math.h>
#define EPS 0.1
main(){
	
    arcTan t;
    int n;
    float x;
    
    
    /*****************************************************************************/
    /*      just for the header                                                  */
    
		char *s="Manupilation d'arcTangente";
    	tounani_Header(s);
	/*****************************************************************************/
    
    
    /*****************************************************************************/
    /*      pour determiner l order de développement limité                      */
    
		printf("\n\t entrer n l'ordre de d%cveloppement limit%c de arcTan tels que order = 2*n+3 : ",130,130);
    	scanf("%d",&t.n);
	/*****************************************************************************/
	
	t.m[0].deg=0;
	t.m[0].cf=0;
	/*****************************************************************************/
    /*      pour definer le développement limité selon l order spécifier déja    */
    	definer(&t);
    /*****************************************************************************/
    
    
	/*****************************************************************************/
    /*      pour afficher le developement limité de arcTan use fonction afficher */
    /*					afficher_dev_Arc(&t);                                    */
    /*                                                                           */
    /*****************************************************************************/


	/*********************************************************************************************************
	/**						Formule de machine de la valeur PI                                            /**/
	/**/																								  /**/	
    /**/  const float on_sur_sinc=(float)1/5;                                                             /**/          
	/**/  const float on_sur_deuxsenc=(float)1/239;												          /**/	
    /**/  const float pi=(float) 16*calculer_arcTan(&t,on_sur_sinc)-4*calculer_arcTan(&t,on_sur_deuxsenc);/**/
    /**/  const float m_pi=(float)(-1*pi);														 		  /**/
    /********************************************************************************************************/
    
    
	/****************************************************************************
	/**		 		comparaison entre la fonction de la Biblio math.h     	   */
	/**		est la fonction crée dans ce programme dans l interval [-pi , pi]  */
	/**														       			 /**/
	/**/	printf("\n %32s %32s %32s","X","aTan(X)","ERROUR");			 	 /**/
	/**/	float i,err;												 	 /**/
	/**/	for(i=m_pi-EPS;i<pi+EPS;i=i+EPS){							 	 /**/
	/**/		err=(float)fabs(calculer_arcTan(&t,i))-atan(i);			 	 /**/
	/**/		printf("\n \t %30f %30f %30f ",i,calculer_arcTan(&t,i),err); /**/
	/**/	}																 /**/
	/***************************************************************************/

    
    
    
}

