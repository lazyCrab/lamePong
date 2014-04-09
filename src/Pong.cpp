#include "Pong.h"
#include <string>
#include <sstream>
void Pong::setup()
{
    pp1 = new PlayerPaddle(ofRectangle(200, 10, 100, 20));
    pp1->setID('1');
    km.addCode('a', "PLAYER1_LEFT");
    km.addCode('d', "PLAYER1_RIGHT");
    km.addListener("PLAYER1_LEFT", pp1);
    km.addListener("PLAYER1_RIGHT", pp1);

    pp2 = new PlayerPaddle(ofRectangle(200, 470, 100, 20));
    pp2->setID('2');
    km.addCode('k', "PLAYER2_LEFT");
    km.addCode(';', "PLAYER2_RIGHT");
    km.addListener("PLAYER2_LEFT", pp2);
    km.addListener("PLAYER2_RIGHT", pp2);

    b = Ball(ofPoint(490, 490));
    b.setVel(ofVec2f(2, 2));

    font.loadFont("verdana.ttf", 14, true, true);
	font.setLineHeight(18.0f);
	font.setLetterSpacing(2);

	ofSetWindowShape(500, 500);
}

void Pong::update()
{
    pp1->update();
    pp2->update();
    b.update();
    if(b.collide(*pp1))
        b.bounce(1);
    else if(b.collide(*pp2))
        b.bounce(-1);
    else if(b.exit(ofGetWidth(), ofGetHeight()) != 0)
    {
        b.bounce(b.exit(500, 500));
        if(b.exit(500, 500) == 1)
            sp2++;
        else if(b.exit(500, 500) == -1)
            sp1++;
    }
}

void Pong::draw()
{
    pp1->draw();
    pp2->draw();
    b.draw();

    ofSetColor(0, 0, 0);
    std::ostringstream convert;
    convert << sp1 << ":" << sp2;
    int fX = (ofGetWidth() - font.getStringBoundingBox(convert.str(), 0, 0).width) / 2;
    int fY = (ofGetHeight() - font.getStringBoundingBox(convert.str(), 0, 0).height) / 2;
    font.drawString(convert.str() , fX, fY);
    ofSetColor(255, 255, 255);
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
