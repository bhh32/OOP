#pragma once

#ifndef TELEVISION_H
#define TELEVISION_H

class Television
{
private:
	int currentChannel;
	int currentVolume;

public:
	Television();
	Television(int channel, int vol);

	void IncreaseVolume();
	void DecreaseVolume();

	void IncreaseChannel();
	void DecreaseChannel();

	int GetChannel();
	int GetVolume();
};

#endif TELEVISION_H