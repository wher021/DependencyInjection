/*
 * sscmodule.h
 *
 *  Created on: Jan 18, 2018
 *      Author: IrinaPC
 */

#ifndef SSCMODULE_SSCMODULE_H_
#define SSCMODULE_SSCMODULE_H_

#include "../imodule.h"

class SSCModule : public IModule
{
public:
	SSCModule(){};

	virtual void configure()//Resolve interfaces
	{
		std::cout<<"configured ssc module\n";
	}

};


#endif /* SSCMODULE_SSCMODULE_H_ */
