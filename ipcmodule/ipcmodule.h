/*
 * ipcmodule.h
 *
 *  Created on: Jan 17, 2018
 *      Author: IrinaPC
 */

#ifndef IPCMODULE_IPCMODULE_H_
#define IPCMODULE_IPCMODULE_H_

#include "../imodule.h"
#include "services/udpconnectionservice.h"
#include "models/socket.h"
#include "models/ddclient.h"

class IpcModule : public IModule
{
public:
	IpcModule(){};

	virtual void configure()//Resolve interfaces
	{
		Socket* socket = new Socket();
		DDClient* ddClient = new DDClient();
		UdpConnectionService* udp = new UdpConnectionService(socket, ddClient);
		std::cout<<"configured IPCModule\n";
	}

};


#endif /* IPCMODULE_IPCMODULE_H_ */
