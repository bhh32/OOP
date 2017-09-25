#pragma once

#ifndef SERVER_H
#define SERVER_H

#include <string>

using std::string;

struct ServerInfo
{
	string serverName;
	string region;
	int currentPlayerCount;
	int maxPlayerCount;
	int ping;
};

class ServerBrowserService
{
private:
	// A cont variable indicating the array capacity.
	const static int SERVERINFO_CAPACITY = 20;

	// An array of all servers registered with the system.
	ServerInfo servers[SERVERINFO_CAPACITY];

	// A count of all servers currently registered.
	int serverCount;

public:
	ServerBrowserService();

	// Registers a server with the service
	bool RegisterServer(ServerInfo newServer);

	// Copies server entries into the given array
	// Also returns the total number of servers meeting the filter settings.
	int GetServers(ServerInfo* dstArray, size_t dstSize);
	int GetServers(ServerInfo* dstArray, size_t dstSize, string region);
	int GetServers(ServerInfo* dstArray, size_t dstSize, int ping);
	int GetServersEmpty(ServerInfo* dstArray, size_t dstSize);
	int GetServersFull(ServerInfo* dstArray, size_t dstSize);
	int GetServerSortByPlayerCount(ServerInfo* dstArray, size_t dstSize);
	int GetServerSortByPing(ServerInfo* dstArray, size_t dstSize);
	int GetServerSortAphabetically(ServerInfo* dstArray, size_t dstSize);
	int GetServerCount(); // Debug Function
	string GetServerName(ServerInfo servers); // Debug Function
};


#endif SERVER_H