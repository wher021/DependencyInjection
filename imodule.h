/*
 * imodule.h
 *
 *  Created on: Jan 17, 2018
 *      Author: IrinaPC
 */

#ifndef IMODULE_H_
#define IMODULE_H_

class IModule
{

public:
	virtual void configure() = 0;
	virtual ~IModule(){}
};




#endif /* IMODULE_H_ */
