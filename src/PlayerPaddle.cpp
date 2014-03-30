#include "PlayerPaddle.h"

PlayerPaddle::PlayerPaddle()
{
    setSpeed(5);      //TODO: Change this
}

PlayerPaddle::PlayerPaddle(ofRectangle rect) : Paddle(rect)
{
    setSpeed(5);      //TODO: Change this
}

PlayerPaddle::~PlayerPaddle()
{
}

void PlayerPaddle::keyDown(string code)
{
    if(code == "PLAYER_LEFT")
        moveX(-getSpeed());
    else if(code == "PLAYER_RIGHT")
        moveX(getSpeed());
}

void PlayerPaddle::keyUp(string code)
{
}

void PlayerPaddle::update()
{
}
