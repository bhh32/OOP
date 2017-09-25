#include <iostream>
#include "Server.h"

ServerBrowserService::ServerBrowserService()
{
	serverCount = 0;
	//This is how many servers we have in our array
	//This also works as our index
}

bool ServerBrowserService::RegisterServer(ServerInfo newServer)
{
	if (serverCount < SERVERINFO_CAPACITY)
	{
		//Find the index for where to put the server
		servers[serverCount] = newServer;

		//Increase our serverCount
		serverCount++;

		// If server was added, return true
		return true;
	}
	else
		// If server add failed, return false
		return false;
}

int ServerBrowserService::GetServers(ServerInfo* dstArray, size_t dstSize)
{
	int size = 0;

	//dstArray is a pointer to new array to store our servers
	//We want to do this based on our filters
	//distArray[idx] = servers[idx]
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].serverName != "")
		{
			dstArray[i] = servers[i];
			size++;
		}
	}

	// return the size of new array that was made
	return size;
}

int ServerBrowserService::GetServers(ServerInfo * dstArray, size_t dstSize, string region)
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].region == region)
		{
			dstArray[i] = servers[i];
			size++;
		}
	}

	return size;
}

int ServerBrowserService::GetServers(ServerInfo * dstArray, size_t dstSize, int ping)
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].ping <= ping)
		{
			dstArray[i] = servers[i];
			size++;
		}
	}

	return size;
}

int ServerBrowserService::GetServersEmpty(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].currentPlayerCount == 0)
		{
			dstArray[i] = servers[i];
			size++;
		}
	}

	return size;
}

int ServerBrowserService::GetServersFull(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].currentPlayerCount == servers[i].maxPlayerCount)
		{
			dstArray[i] = servers[i];
			size++;
		}
	}

	return size;
}

int ServerBrowserService::GetServerSortByPlayerCount(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].serverName != "")
		{
			dstArray[i] = servers[i];
			size++;
		}
	}

	

	int checker = 0;
	bool loop = false;
	while (!loop)
	{
		for (int i = 0; i < dstSize - 1; i++)
		{
			if (dstArray[i].currentPlayerCount <= dstArray[i + 1].currentPlayerCount)
			{
				checker++;
			}
			else
			{
				int temp = dstArray[i + 1].currentPlayerCount;
				dstArray[i + 1].currentPlayerCount = dstArray[i].currentPlayerCount;
				dstArray[i].currentPlayerCount = temp;
			}

			if (checker == dstSize - 1)
				loop = true;
		}

		
	}

	return size;
}

int ServerBrowserService::GetServerSortByPing(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].serverName != "")
		{
			dstArray[i] = servers[i];
			size++;
		}
	}

	int checker = 0;
	bool loop = false;
	while (!loop)
	{
		for (int i = 0; i < dstSize - 1; i++)
		{
			if (dstArray[i].ping < dstArray[i + 1].ping)
			{
				checker++;
			}
			else
			{
				int temp = dstArray[i].ping;
				dstArray[i].ping = dstArray[i + 1].ping;
				dstArray[i + 1].ping= temp;
			}
		}

		if (checker == dstSize - 1)
			loop = true;
	}

	return size;
}

int ServerBrowserService::GetServerSortAphabetically(ServerInfo * dstArray, size_t dstSize)
{
	return 0;
}

int ServerBrowserService::GetServerCount()
{
	return serverCount;
}

string ServerBrowserService::GetServerName(ServerInfo servers)
{
	return servers.serverName;
}
