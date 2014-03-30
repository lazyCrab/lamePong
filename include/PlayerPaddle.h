#ifndef PLAYERPADDLE_H
#define PLAYERPADDLE_H

#include "Paddle.h"
#include "KeyListener.h"

class PlayerPaddle : public Paddle, public KeyListener
{
    public:
        PlayerPaddle();
        PlayerPaddle(ofRectangle rect);
        virtual ~PlayerPaddle();
        void keyDown(string code);
        void keyUp(string code);
        void update();
    private:
};

#endif
