#ifndef PADDLE_H
#define PADDLE_H

#include "ofMain.h"
#include "ofGraphics.h"

class Paddle
{
    public:
        Paddle(ofRectangle rect);
        virtual ~Paddle();

        ofRectangle getRect() { return r; }

        void moveX(float dX);

        //TODO: add collide with ball
        bool collide(Paddle p);
        bool collide(ofRectangle rect);

        void update();
        void draw();
    private:
        ofRectangle r;
        const int SPEED = 5;
};

#endif
