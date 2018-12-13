//
// Created by ericfarley on 12/12/2018.
//

#ifndef BOWLINGKATA_GAME_H
#define BOWLINGKATA_GAME_H


class Game {
    int runningScore = 0;
public:
    void roll(int frame);
    int scoreGame(int frameScore);

};


#endif //BOWLINGKATA_GAME_H
