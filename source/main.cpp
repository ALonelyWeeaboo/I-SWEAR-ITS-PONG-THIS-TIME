//totally not pong pls no sue,
// 9-22-2014 note: Tonight add collision and ball speed tonight


#include <iostream>
#include <aie.h>


//Height of the Window
const int iScreenWidth = 900;
const int iScreenHeight = 600;

struct paddle
{
	unsigned int SpriteID = ("./images/paddle.png", 30, 92, true);
	float fWidth;
	float fHeight;
	float x = 0;
	float y = 0;
	float paddleSpeedX;
	float paddleSpeedY;
	void Move(float deltatime)
	{
		x += paddleSpeedX * deltatime;
		y += paddleSpeedY * deltatime;
		MoveSprite(SpriteID, x, y);

	}


	
};

struct pongball
{
	unsigned int SpriteID = ("./images/ball.png", 12, 13, true);
	float fWidth;
	float fHeight;
	float x = 0;
	float y = 0;
	float Width;
	float Height;
	float ballSpeedX = 10;
	float ballSpeedY = 10;
	float(deltatime);


	void Move(float deltatime)
	{
		x += ballSpeedX *deltatime;
		y += ballSpeedY *deltatime;
		MoveSprite(SpriteID, x, y);
	}


};

enum GAMESTATES
{
	eMAIN_MENU,
	eGAMEPLAY,
	eEND
};


int main(int argc, char** argv[])
{
	//The Window
	Initialise(iScreenWidth, iScreenHeight, false, "Gnpo");
	unsigned int iPlayerPaddle = CreateSprite("./images/paddle.png", 30, 92, true);
	unsigned int ball = CreateSprite("./images/ball.png", 12, 13, true);

	pongball thepongball;
	paddle player1;

	paddle player2;



	float deltatime = GetDeltaTime();
	int ballSpeedX = 10;
		int ballSpeedY = 10;

		float fPlayerX = 80 * 0.f;
		float fPlayerY = 80.f;

		ballSpeedX = iScreenHeight / 2;
		ballSpeedY = iScreenWidth / 2;
	do //loop
	{ //do movement and shit in here
		//Also this draws the sprite and score at the top, along with making the background black.
		ClearScreen();
		
		DrawSprite(player1.SpriteID);
		DrawSprite(player2.SpriteID);
		DrawSprite(ball);
		MoveSprite(ball, 60, 90);
		thepongball.Move(deltatime);

		DrawString("SCORE 0", iScreenWidth * 0.025f, iScreenHeight - 2);
		DrawString("SCORE 0", iScreenWidth * 0.750f, iScreenHeight - 2);
		SetBackgroundColour(SColour(0x00, 0x00, 0x00, 0xFF));
	

		int ballSpeedX = iScreenWidth / 2;
		int ballSpeedY = iScreenHeight / 2;
		
	


		


		//draw's the paddle and sprite
		player1.Move(deltatime);
		player2.Move(deltatime);
		thepongball.Move(deltatime);
		//going up
		if (IsKeyDown('W'))
		{
			player1.y += deltatime * 30;
			if (player1.y > -128)
			{
				player1.y > -128;
				MoveSprite(player1.SpriteID, player1.x, player1.y);
				DrawSprite(player1.SpriteID);
			}
		}
		//going down
		if (IsKeyDown('S'))
		{
			player1.y -= deltatime * 30;
			if (player1.y > -128.f)
			{
				player1.y > -128.f;
				MoveSprite(player1.SpriteID, player1.x, player1.y);
				DrawSprite(player1.SpriteID);
				
			}
		}
		//getting the ball to work

	}

	//exits game
	while (FrameworkUpdate() == false);

	DestroySprite(player1.SpriteID);
	DestroySprite(player2.SpriteID);
	DestroySprite(thepongball.SpriteID);

	Shutdown();

	return 0;
}