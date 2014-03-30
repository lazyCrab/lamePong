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
    //TODO: add check for boundries
    r.translateX(dX);
}

bool Paddle::collide(Paddle p)
{
    return collide(p.getRect());
}

bool Paddle::collide(ofRectangle rect)
{
    ofRectangle intersection = r.getIntersection(rect);
    return (intersection.getWidth() == 0 && intersection.getHeight() == 0);
}

void Paddle::update()
{
}

void Paddle::draw()
{
    ofRect(r);
}
