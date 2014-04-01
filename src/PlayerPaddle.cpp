#include "PlayerPaddle.h"

PlayerPaddle::PlayerPaddle()
{
    setSpeed(5);      //TODO: Change this
    playerID = "";
}

PlayerPaddle::PlayerPaddle(ofRectangle rect) : Paddle(rect)
{
    setSpeed(5);      //TODO: Change this
    playerID = "";
}

PlayerPaddle::~PlayerPaddle()
{
}

void PlayerPaddle::keyDown(string code)
{
    if(code == "PLAYER" + playerID + "_LEFT")
        pressed.insert(code);
    else if(code == "PLAYER" + playerID + "_RIGHT")
        pressed.insert(code);
}

void PlayerPaddle::keyUp(string code)
{
    pressed.erase(code);
}

void PlayerPaddle::update()
{
    for(set<string>::iterator it = pressed.begin(); it != pressed.end(); it++)
    {
        if(*it == "PLAYER" + playerID + "_LEFT")
            moveX(-getSpeed());
        else if(*it == "PLAYER" + playerID + "_RIGHT")
            moveX(getSpeed());
    }
}
