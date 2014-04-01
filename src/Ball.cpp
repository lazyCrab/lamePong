#include "Ball.h"
#include "Paddle.h"

Ball::Ball()
{
    r = ofRectangle(0, 0, 10, 10);
    vel = ofVec2f(0, 0);
}

Ball::Ball(ofPoint p)
{
    r = ofRectangle(p, 10, 10);
    vel = ofVec2f(0, 0);
}

Ball::~Ball()
{
}


//DIR:  1 up        -1 down
//      2 right     -2 left
void Ball::bounce(int dir)
{
    switch(dir)
    {
        case 1:
            vel.y = -vel.y;
            break;
        case -1:
            vel.y = -vel.y;
            break;
        case 2:
            vel.x = -vel.x;
            break;
        case -2:
            vel.x = -vel.x;
            break;
    }
}

void Ball::update()
{
    r.translate(vel);
}

void Ball::draw()
{
    ofEllipse(r.getPosition(), 10, 10);
}

bool Ball::collide(Ball b)
{
    return collide(b.getRect());
}

bool Ball::collide(Paddle p)
{
    return collide(p.getRect());
}

bool Ball::collide(ofRectangle rect)
{
    ofRectangle intersection = r.getIntersection(rect);
    return (intersection.getWidth() != 0 && intersection.getHeight() != 0);
}

int Ball::exit(int w, int h)
{
    if(r.getX() < 0)
        return -2;
    if(r.getY() < 0)
        return 1;
    if(r.getX() > w)
        return 2;
    if(r.getY() > h)
        return -1;
}
