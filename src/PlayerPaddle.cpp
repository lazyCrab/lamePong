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
        moveX(-getSpeed());
    else if(code == "PLAYER" + playerID + "_RIGHT")
        moveX(getSpeed());
}

void PlayerPaddle::keyUp(string code)
{
}

void PlayerPaddle::update()
{
}
