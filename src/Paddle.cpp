#include "Paddle.h"

Paddle::Paddle()
{
    r = ofRectangle(0, 0, 0, 0);
}

Paddle::Paddle(ofRectangle rect)
{
    r = rect;
}

Paddle::~Paddle()
{
}

void Paddle::moveX(float dX)
{
    r.translateX(dX);

    //Check if paddle is inside screen
    ofRectangle intersection = r.getIntersection(ofRectangle(0, 0, ofGetWidth(), ofGetHeight()));
    if(intersection.getWidth() != r.getWidth() || intersection.getHeight() != r.getHeight())
        r.translateX(-dX);
}

bool Paddle::collide(Paddle p)
{
    return collide(p.getRect());
}

bool Paddle::collide(Ball b)
{
    return collide(b.getRect());
}

bool Paddle::collide(ofRectangle rect)
{
    ofRectangle intersection = r.getIntersection(rect);
    return (intersection.getWidth() != 0 && intersection.getHeight() != 0);
}

void Paddle::update()
{
}

void Paddle::draw()
{
    ofRect(r);
}
