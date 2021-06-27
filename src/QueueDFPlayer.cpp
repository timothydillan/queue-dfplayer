#include "QueueDFPlayer.h"

int QueueDFPlayer::getMusic() {
    if (!musicQueue.empty()) {
        int file = musicQueue.front();
        musicQueue.pop();
        return file;
    }
    return 0;
}

void QueueDFPlayer::addMusic(int musicFile) {
    musicQueue.push(musicFile);
}
