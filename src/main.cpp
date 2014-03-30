#include "ofMain.h"
#include "Pong.h"

int main()
{
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofRunApp(new Pong());
}
