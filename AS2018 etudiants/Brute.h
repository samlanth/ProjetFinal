﻿/*
La classe CBrute

	Dérive de la classe CMonstre;
	Ne possède aucun attribut
	A un constructeur paramétrique qui prend les mêmes trois (3) paramètres et dans le même ordre que le constructeur paramétrique de la classe CMonstre;
	Redéfinit la méthode Attaquer qui prend une référence à un héros en paramètre et qui retourne true ou false :
	La méthode Attaquer vérifie dans un premier temps si l’ennemi passé en paramètre est proche (voir la classe CPosition) . Si c’est le cas, alors il y a une attaque.
	Si le Héros possède de la Défense, la Brute lui en enlève un point.
	Sinon, la Brute lui enlève un point de Vie
	Si le Héros est mort (s’il n’a plus de points de vie), la méthode retourne false, sinon elle retourne true. De plus, la méthode doit afficher à la console tous les détails de l’attaque ainsi que les caractéristiques finales du Héros

*/
#pragma once
#include <SFML/Graphics.hpp>
#include "Position.h"
#include "Carte.h"
#include "Personnage.h"
#include "Heros.h"
#include "Monstre.h"

//--------------------------------------------------------//
// CBrute
//--------------------------------------------------------//
class CBrute : public CMonstre
{
private:
public:
	/*
A un constructeur paramétrique qui prend les mêmes trois (3) paramètres
et dans le même ordre que le constructeur paramétrique de la classe CMonstre; 
*/
	CBrute(sf::Texture& LaTexture, const CPosition& Pos, std::string nom);




	/*
Redéfinit la méthode Attaquer qui prend une référence à un héros en paramètre
et qui retourne true ou false :
La méthode Attaquer vérifie dans un premier temps si l’ennemi passé en paramètre
est proche (voir la classe CPosition) . Si c’est le cas, alors il y a une attaque.  
Si le Héros possède de la Défense, la Brute lui en enlève un point.
Sinon, la Brute lui enlève un point de Vie
Si le Héros est mort (s’il n’a plus de points de vie), la méthode retourne false,
sinon elle retourne true. De plus, la méthode doit afficher à la console tous les
détails de l’attaque ainsi que les caractéristiques finales du Héros


	*/
	virtual bool Attaquer(const CHeros& objet);
};