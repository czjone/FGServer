#ifndef __FG__SERVER_SERVER_H
#define __FG__SERVER_SERVER_H 1

#include <map>
#include <FGCore/Types.h>
#include <FGCore/Event.h>
#include <FGCore/Network/Socket.h>

using namespace FGSocket;

class OnError ;
class OnConnected ;
class OnShutDOWN ;

class FGServer : 
virtual public EventDispatcher, 
virtual public FGSocket::Server {

public:

	typedef int SessionId;

private:

	int mRet;
	
	std::map<SessionId,Session> clients;

public:

	FGServer();

	virtual ~FGServer();

	virtual int Accept();

private:

	inline int GetRet() { return mRet; };
};

#endif