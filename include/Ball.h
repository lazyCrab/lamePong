#ifndef BALL_H
#define BALL_H

#include "ofMain.h"

class Paddle;

class Ball
{
    public:
        Ball();
        Ball(ofPoint p);
        virtual ~Ball();

        ofRectangle getRect() { return r; }
        void setVel(ofVec2f val) { vel = val; }
        ofVec2f getVel() { return vel; }

        bool collide(Paddle p);
        bool collide(Ball b);
        bool collide(ofRectangle rect);
        int exit(int w, int h);

        //Filps the direction of the velocity relative to the direction
        void bounce(int dir);

        void update();
        void draw();
    private:
        ofRectangle r;
        ofVec2f vel;
};

#endif
