#include <iostream>
#include "Television.h"

using std::cout;
using std::endl;

Television::Television() {};

Television::Television(int channel, int vol)
{
	currentChannel = channel;
	currentVolume = vol;

	cout << "Current channel: " << currentChannel << endl;
	cout << "Current volume: " << currentVolume << endl;
}

void Television::IncreaseChannel()
{
	currentChannel++;
}

void Television::DecreaseChannel()
{
	currentChannel--;
}

void Television::IncreaseVolume()
{
	currentVolume++;
}

void Television::DecreaseVolume()
{
	currentVolume--;
}

int Television::GetChannel()
{
	return currentChannel;
}

int Television::GetVolume()
{
	return currentVolume;
}