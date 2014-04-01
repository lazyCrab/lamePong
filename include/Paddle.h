#ifndef PADDLE_H
#define PADDLE_H

#include "ofMain.h"
#include "Ball.h"

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

        bool collide(Paddle p);
        bool collide(ofRectangle rect);
        bool collide(Ball b);

        virtual void update();
        void draw();
    private:
        ofRectangle r;
        int SPEED;
};

#endif
