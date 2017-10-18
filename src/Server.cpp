#include <stdio.h>
#include <string>
#include <FGCore/Log.h>
#include <FGCore/Stringext.h>
#include <FGServer/Server.h>

#if defined(FG_SERVER_NODE)

	int main(int c,char** args) {
		Server server;
		return server.Run();
	}

#endif

State Server::Run(){
	LOGD("FGServer Start ...");
	while(true) {
		LOGD("sssssssssssssss");
	}
	LOGD("FGServer Stop ...");
	return -1;
}

