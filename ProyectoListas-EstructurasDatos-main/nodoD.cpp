#include "nodoD.h"
#include <cstddef>


nodoD::nodoD()
{
	this->dato = 0;
	this->sgte = NULL;
	this->ante = NULL;
}

nodoD::nodoD(int pDato)
{
	this->dato = pDato;
	this->sgte = NULL;
	this->ante = NULL;
}

void nodoD::setDato(int pDato)
{
	this->dato = pDato;
}

void nodoD::setSgte(nodoD* ptr)
{
	this->sgte = ptr;
}

void nodoD::setAnte(nodoD* ptr)
{
	this->ante = ptr;
}

int nodoD::getDato()
{
	return this->dato;
}

nodoD* nodoD::getSgte()
{
	return this->sgte;
}

nodoD* nodoD::getAnte()
{
	return this->ante;
}