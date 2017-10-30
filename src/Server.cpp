#include <stdio.h>
#include <string>
#include <FGCore/Log.h>
#include <FGCore/Network/Socket.h>
#include <FGServer/Server.h>

using namespace FGSocket;

int FGServer::Accept(){
	// this->addEventListner(,Callback callback,this);
	FGSocket::Server::Accept();
	return this->GetRet();
}

#if defined(FG_SERVER_NODE)

	int main(int c,char** args) {
		FGServer svr;
		return svr.Accept();
	}
 
#endif



