#include <iostream>
#include "Person.h"
#include "Television.h"
#include "Piggy.h"
#include "Server.h"

using std::cout;
using std::endl;


int main()
{
	/** WALKTHROUGH ACTIVITY - EXTENDED TO INCLUDE ENCAPSULATION BY ME **/

	//// Set the Attributes
	//Person persA(32, 70, 180, "Bryan", "brown", "blue") ;
	//Person persB(5, 43.5, 42, "Zoe", "brown", "brown");

	//// Calls the greeting for persA
	//persA.Greeting(persA);
	//cout << endl;
	//
	//// Calls the greeting for persB
	//persB.Greeting(persB);
	//cout << endl;

	//// Change persA attributes
	//persA.SetName(persA, "Jack");
	//persA.SetAge(persA, 23);
	//persA.SetHeight(persA, 73.6);
	//persA.SetWeight(persA, 145);
	//persA.SetHairColor(persA, "Red");
	//persA.SetEyeColor(persA, "Green");

	//// Calls Greeting To Prove Name Was Changed
	//persA.Greeting(persA);
	//cout << endl;


	/** CLOSED ACTIVITIES **/
	/*//1.) Television
	cout << endl;

	server1.currentPlayerCount = 12;
	server1.maxPlayerCount = 32;
	server1.ping = 56;
	server1.serverName = "Bryan's First Sever"; cout << "1.) Television\n";
	cout << endl;

	int channel = 12;
	int vol = 4;

	Television tele(channel, vol);

	tele.IncreaseChannel();
	tele.IncreaseVolume();
	channel = tele.GetChannel();
	vol = tele.GetVolume();
	Television(channel, vol);
	cout << endl;

	tele.DecreaseChannel();
	tele.DecreaseChannel();
	tele.DecreaseVolume();
	tele.DecreaseVolume();
	channel = tele.GetChannel();
	vol = tele.GetVolume();
	Television(channel, vol);
	cout << endl;*/

	/*//2.) Digital Piggy Bank
	cout << "2.) Digital Piggy Bank\n";
	cout << endl;

	DigitalPiggyBank piggy;
	float balance = 0.f;
	float withdrawl = 0.f;

	piggy.Deposit(12.40);
	balance = piggy.GetBalance();
	cout << "Current Balance: " << balance << endl;
	piggy.Deposit(45);
	balance = piggy.GetBalance();
	cout << "Current Balance: " << balance << endl;
	withdrawl = piggy.Withdraw();
	balance = piggy.GetBalance();
	cout << "Withdrawl Amount: " << withdrawl << endl;
	cout << "Current Balance: " << balance << endl;
	cout << endl;*/

	/** OPEN ACTIVITIES **/
	//1.) Server Info
	ServerBrowserService serverBrowserServ;
	ServerInfo server01;
	ServerInfo server02;
	ServerInfo server03;
	ServerInfo serverChecker[5];
	int serverCheckerDebug = 0;


	server01.currentPlayerCount = 32;
	server01.maxPlayerCount = 32;
	server01.ping = 56;
	server01.region = "North America";
	server01.serverName = "Bryan's First Server";

	server02.currentPlayerCount = 12;
	server02.maxPlayerCount = 32;
	server02.ping = 56;
	server02.region = "Europe";
	server02.serverName = "Bryan's Second Server";

	server03.currentPlayerCount = 28;
	server03.maxPlayerCount = 32;
	server03.ping = 56;
	server03.region = "North America";
	server03.serverName = "Bryan's Third Server";

	serverBrowserServ.RegisterServer(server01);
	serverBrowserServ.RegisterServer(server02);
	serverBrowserServ.RegisterServer(server03);

	serverCheckerDebug = serverBrowserServ.GetServerCount();
	cout << serverCheckerDebug << endl;
	
	
	cout << serverBrowserServ.GetServers(serverChecker, 5) << endl;

	cout << serverBrowserServ.GetServerSortByPlayerCount(serverChecker, 5) << endl;

	for (int i = 0; i < serverBrowserServ.GetServerCount(); i++)
	{
		cout << serverBrowserServ.GetServerName(serverChecker[i]);
		cout << endl;
	}

	system("pause");
	
	return 0;
}