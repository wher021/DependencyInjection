/*
 * socket.h
 *
 *  Created on: Jan 18, 2018
 *      Author: IrinaPC
 */

#ifndef IPCMODULE_MODELS_SOCKET_H_
#define IPCMODULE_MODELS_SOCKET_H_
#include "isocket.h"

class Socket : public ISocket
{
public:
	Socket(){};
	virtual void initSocket()
    {

    }

};


#endif /* IPCMODULE_MODELS_SOCKET_H_ */
