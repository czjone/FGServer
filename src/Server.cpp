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
	std::string str("set [aaa] to [bbb]");
	std::string tag = FGCore::StrTool::replace_all(str,"[aaa]","test name");
	std::string tag1 = FGCore::StrTool::replace_all(tag,"[bbb]","test name1");
	LOGD("aaaaaa");
	LOGD("FGServer Stop ...");
	return -1;
}

