#ifndef PONG_H
#define PONG_H

#include "ofMain.h"
#include "PlayerPaddle.h"
#include "KeyManager.h"
#include "Ball.h"

class Pong : public ofBaseApp
{
public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
private:
    PlayerPaddle *pp1;
    PlayerPaddle *pp2;
    int sp1 = 0, sp2 = 0;
    ofTrueTypeFont font;
    Ball b;
    KeyManager km;
};

#endif
