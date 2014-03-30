#include "Pong.h"

void Pong::setup()
{
    pp = new PlayerPaddle(ofRectangle(10, 10, 100, 20));
    km.addCode('a', "PLAYER_LEFT");
    km.addCode('d', "PLAYER_RIGHT");
    km.addListener("PLAYER_LEFT", pp);
    km.addListener("PLAYER_RIGHT", pp);
}

void Pong::update()
{

}

void Pong::draw()
{
    pp->draw();
}

void Pong::keyPressed(int key)
{
    km.keyDown(key);
}

void Pong::keyReleased(int key)
{
    km.keyUp(key);
}

void Pong::mouseMoved(int x, int y )
{

}

void Pong::mouseDragged(int x, int y, int button)
{

}

void Pong::mousePressed(int x, int y, int button)
{

}

void Pong::mouseReleased(int x, int y, int button)
{

}

void Pong::windowResized(int w, int h)
{

}

void Pong::gotMessage(ofMessage msg)
{

}

void Pong::dragEvent(ofDragInfo dragInfo)
{

}
