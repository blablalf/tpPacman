/**
  ******************************************************************************************************************
  * @file    boule.c 
  * @author  Alfred Gaillard      IUT Informatique La Rochelle
  * @version ETAPE6
  * @date    17 mai 2019
  * @modification
  * @brief   d�finitions pour la description du bitmap d'une boule
  ******************************************************************************************************************/

#include "ext_globales.h"
#include "GLCD_Config.h"
#include "boule.h"

const unsigned short imgBoule[HAUTEUR_BOULE*LARGEUR_BOULE]={
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,O,O,O,O,_,_,_,
	_,_,O,O,O,O,O,O,_,_,
	_,O,O,O,O,O,O,O,O,_,
	_,O,O,O,O,O,O,O,O,_,
	_,O,O,O,O,O,O,O,O,_,
	_,O,O,O,O,O,O,O,O,_,
	_,_,O,O,O,O,O,O,_,_,
	_,_,_,O,O,O,O,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
};

const unsigned short imgBouleClean[HAUTEUR_BOULE*LARGEUR_BOULE]={ // effacer le pacman
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
};

const unsigned short imgPlayer[4][HAUTEUR_BOULE*LARGEUR_BOULE]={
	{
		_,_,_,_,_,_,_,_,_,_,
		_,_,_,O,O,O,O,_,_,_,
		_,_,O,O,O,O,O,O,_,_,
		_,_,_,_,O,O,O,O,O,_,
		_,_,_,_,_,O,O,O,O,_,
		_,_,_,_,_,O,O,O,O,_,
		_,_,_,_,O,O,O,O,O,_,
		_,_,O,O,O,O,O,O,_,_,
		_,_,_,O,O,O,O,_,_,_,
		_,_,_,_,_,_,_,_,_,_,
	},{
		_,_,_,_,_,_,_,_,_,_,
		_,_,_,O,O,O,O,_,_,_,
		_,_,O,O,O,O,O,O,_,_,
		_,O,O,O,O,O,_,_,_,_,
		_,O,O,O,O,_,_,_,_,_,
		_,O,O,O,O,_,_,_,_,_,
		_,O,O,O,O,O,_,_,_,_,
		_,_,O,O,O,O,O,O,_,_,
		_,_,_,O,O,O,O,_,_,_,
		_,_,_,_,_,_,_,_,_,_,
	},{
		_,_,_,_,_,_,_,_,_,_,
		_,_,_,O,O,O,O,_,_,_,
		_,_,O,O,O,O,O,O,_,_,
		_,O,O,O,O,O,O,O,O,_,
		_,O,O,O,O,O,O,O,O,_,
		_,O,O,O,_,_,O,O,O,_,
		_,O,O,_,_,_,_,O,O,_,
		_,_,O,_,_,_,_,O,_,_,
		_,_,_,_,_,_,_,_,_,_,
		_,_,_,_,_,_,_,_,_,_,
	},{
		_,_,_,_,_,_,_,_,_,_,
		_,_,_,_,_,_,_,_,_,_,
		_,_,O,_,_,_,_,O,_,_,
		_,O,O,_,_,_,_,O,O,_,
		_,O,O,O,_,_,O,O,O,_,
		_,O,O,O,O,O,O,O,O,_,
		_,O,O,O,O,O,O,O,O,_,
		_,_,O,O,O,O,O,O,_,_,
		_,_,_,O,O,O,O,_,_,_,
		_,_,_,_,_,_,_,_,_,_,
	}
};

const unsigned short imgFruit[HAUTEUR_FOOD*LARGEUR_FOOD]={
	_,_,_,_,_,_,_,_,_,_,
	_,_,R,R,_,_,_,_,_,_,
	_,R,R,R,R,R,R,_,_,_,
	_,R,R,R,R,R,R,R,_,_,
	_,_,R,R,R,R,R,R,_,_,
	_,_,G,_,_,R,R,_,_,_,
	_,_,G,_,_,G,_,_,_,_,
	_,_,_,G,_,G,G,G,G,_,
	_,_,_,_,G,G,G,G,_,_,
	_,_,_,_,_,_,_,_,_,_,
};

const unsigned short imgFruitClean[HAUTEUR_FOOD*LARGEUR_FOOD]={
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
	_,_,_,_,_,_,_,_,_,_,
};

const unsigned short imgGhost[4][GHOST_HEIGHT*GHOST_WIDTH]={
	{
		_,_,_,_,_,_,_,_,_,_,
		_,R,_,_,R,R,_,_,R,_,
		_,R,R,_,R,R,_,R,R,_,
		_,R,R,R,R,R,R,R,R,_,
		_,R,R,R,R,R,R,R,R,_,
		_,R,R,B,R,R,B,R,R,_,
		_,R,R,W,R,R,W,R,R,_,
		_,_,R,R,R,R,R,R,_,_,
		_,_,_,R,R,R,R,_,_,_,
		_,_,_,_,_,_,_,_,_,_,
	},{
		_,_,_,_,_,_,_,_,_,_,
		_,P,_,_,P,P,_,_,P,_,
		_,P,P,_,P,P,_,P,P,_,
		_,P,P,P,P,P,P,P,P,_,
		_,P,P,P,P,P,P,P,P,_,
		_,P,P,R,P,P,R,P,P,_,
		_,P,P,W,P,P,W,P,P,_,	
		_,_,P,P,P,P,P,P,_,_,
		_,_,_,P,P,P,P,_,_,_,
		_,_,_,_,_,_,_,_,_,_,
	},{
		_,_,_,_,_,_,_,_,_,_,
		_,B,_,_,B,B,_,_,B,_,
		_,B,B,_,B,B,_,B,B,_,
		_,B,B,B,B,B,B,B,B,_,
		_,B,B,B,B,B,B,B,B,_,
		_,B,B,R,B,B,R,B,B,_,
		_,B,B,W,B,B,W,B,B,_,
		_,_,B,B,B,B,B,B,_,_,
		_,_,_,B,B,B,B,_,_,_,
		_,_,_,_,_,_,_,_,_,_,

	},{
		_,_,_,_,_,_,_,_,_,_,
		_,O,_,_,O,O,_,_,O,_,
		_,O,O,_,O,O,_,O,O,_,
		_,O,O,O,O,O,O,O,O,_,
		_,O,O,O,O,O,O,O,O,_,
		_,O,O,B,O,O,B,O,O,_,
		_,O,O,W,O,O,W,O,O,_,
		_,_,O,O,O,O,O,O,_,_,
		_,_,_,O,O,O,O,_,_,_,
		_,_,_,_,_,_,_,_,_,_,	
	}
};
