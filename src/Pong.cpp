#include "Pong.h"

void Pong::setup()
{
    pp1 = new PlayerPaddle(ofRectangle(10, 10, 100, 20));
    pp1->setID('1');
    km.addCode('a', "PLAYER1_LEFT");
    km.addCode('d', "PLAYER1_RIGHT");
    km.addListener("PLAYER1_LEFT", pp1);
    km.addListener("PLAYER1_RIGHT", pp1);

    pp2 = new PlayerPaddle(ofRectangle(10, 300, 100, 20));
    pp2->setID('2');
    km.addCode('k', "PLAYER2_LEFT");
    km.addCode(';', "PLAYER2_RIGHT");
    km.addListener("PLAYER2_LEFT", pp2);
    km.addListener("PLAYER2_RIGHT", pp2);
}

void Pong::update()
{

}

void Pong::draw()
{
    pp1->draw();
    pp2->draw();
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
