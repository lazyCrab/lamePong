#ifndef PLAYERPADDLE_H
#define PLAYERPADDLE_H

#include "Paddle.h"
#include "KeyListener.h"
#include <string>

using namespace std;

class PlayerPaddle : public Paddle, public KeyListener
{
    public:
        PlayerPaddle();
        PlayerPaddle(ofRectangle rect);
        virtual ~PlayerPaddle();

        void setID(char id) { playerID = id; }

        void keyDown(string code);
        void keyUp(string code);

        void update();
    private:
        string playerID;
};

#endif
