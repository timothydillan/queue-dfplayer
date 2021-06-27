#ifndef _QUEUEDFPLAYER_h
#define _QUEUEDFPLAYER_h

#include "Arduino.h"
#include <queue>

using namespace std;

typedef class QueueDFPlayer {

private:
  queue<int> musicQueue;
public:
  int getMusic();
  void addMusic(int musicFile);
} QueueDFPlayer;

#endif



