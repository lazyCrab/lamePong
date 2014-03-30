#ifndef PADDLE_H
#define PADDLE_H

#include "ofMain.h"

class Paddle
{
    public:
        Paddle();
        Paddle(ofRectangle rect);
        virtual ~Paddle();

        ofRectangle getRect() { return r; }
        void setSpeed(int speed) { SPEED = speed; }
        int getSpeed() { return SPEED; }

        void moveX(float dX);

        //TODO: add collide with ball
        bool collide(Paddle p);
        bool collide(ofRectangle rect);

        virtual void update();
        void draw();
    private:
        ofRectangle r;
        int SPEED = 5;
};

#endif
