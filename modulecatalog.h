#include <vector>
#include <iostream>
#include "imodule.h"
#include "ipcmodule/ipcmodule.h"
#include "sscmodule/sscmodule.h"

#include <iostream>

class ModuleCatalog
{


public:
	void addModule()
	{
		IpcModule* ipcmodule = new IpcModule();
		SSCModule* sscmodule = new SSCModule();
		moduleContainer.push_back(ipcmodule);
		moduleContainer.push_back(sscmodule);
	}
	void configure()
	{
		for(int i = 0; i<moduleContainer.size(); i++)
		{
			moduleContainer[i]->configure();
		}
		std::cout<<"configured all modules"<<std::endl;
	}
	std::vector<IModule*> moduleContainer;

};
