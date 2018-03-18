/*
 * main.cpp
 *
 *  Created on: Jan 17, 2018
 *      Author: IrinaPC
 */
#include <iostream>
#include "modulecatalog.h"

int main()
{
	ModuleCatalog moduleCatalog;
	moduleCatalog.addModule();
	moduleCatalog.configure();

	std::cout<<"done";
}



