#include "pokerplayer.h"

#include <cstdlib>
#include <ctime>

int PokerPlayer::Draw() const {
    srand(time(0));
    return int(rand()) % 52 + 1;
}