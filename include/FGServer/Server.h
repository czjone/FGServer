#ifndef __FG__SERVER_SERVER_H
#define __FG__SERVER_SERVER_H 1

#include <map>
#include <FGCore/Types.h>
#include <FGCore/Event.h>
#include <FGCore/Network/Socket.h>

using namespace FGSocket;

class FGServer : 
virtual public EventDispatcher, 
virtual public FGSocket::Server {

public:
	typedef enum { 
		ON_CLIENT_CONNECT,
		ON_CLIENT_SHUTDOWN,
		ON_SERVER_ERROR,
	}EVENT_TYPE;	

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