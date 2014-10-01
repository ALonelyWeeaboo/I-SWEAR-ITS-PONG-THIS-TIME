//totally not pong pls no sue
//coded by Landon Haggerty with assistance of the AIE Framework


#include <iostream>
#include <aie.h>


//Height of the Window
const int iScreenHeight = 600;
const int iScreenWidth = 900;


//paddle is reffering to the structure below, unless noted otherwise. thepongball is simply the sprit
struct paddle
{

public:
	unsigned int SpriteID = CreateSprite("./images/paddle.png", 30, 92, true);
<<<<<<< HEAD
	float Width = 30;
	float Height = 92;
=======
	float fWidth;
	float fHeight;
>>>>>>> origin/master
	float x = 0;
	float y = 0;
	float paddleSpeedX = 0;
	float paddleSpeedY = 0;
<<<<<<< HEAD
	float topleftx;
	float toplefty;
	float toprightx;
	float toprighty;
	float bottomleftx;
	float bottomlefty;
	float bottomrightx;
	float bottomrighty;

=======
	
>>>>>>> origin/master
	void Move(float deltatime)
	{
		x += paddleSpeedX * deltatime;
		y += paddleSpeedY * deltatime;
		MoveSprite(SpriteID, x, y);
<<<<<<< HEAD

		topleftx = x - Width / 2;
		toplefty = y + Height / 2;
		toprightx = x + Width / 2;
		toprighty = y + Height / 2;
		bottomleftx = x - Width / 2;
		bottomlefty = y - Height / 2;
		bottomrightx = x + Width / 2;
		bottomrighty = y - Height / 2;

=======
>>>>>>> origin/master
	}



	void Draw()
	{
		DrawSprite(SpriteID);
	}
	
<<<<<<< HEAD


=======
	
>>>>>>> origin/master
	
};

//pongball is just the structure. thepongball is the overall object.
struct pongball
{
public:
	unsigned int SpriteID = CreateSprite("./images/ball.png", 12, 13, true);
	float fWidth;
	float fHeight;
	float x = 450;
	float y = 300;
<<<<<<< HEAD
	float Width = 12;
	float Height = 13;
	float ballSpeedX = 20;
	float ballSpeedY = 20;
	float r = 6;
	float topleftx;
	float toplefty;
	float toprightx;
	float toprighty;
	float bottomleftx;
	float bottomlefty;
	float bottomrightx;
	float bottomrighty;
=======
	float Width;
	float Height;
	float ballSpeedX = 10;
	float ballSpeedY = 10;
>>>>>>> origin/master


	void Move(float deltatime)
	{
		x += ballSpeedX * deltatime;
		y += ballSpeedY * deltatime;
		MoveSprite(SpriteID, x, y);
		
<<<<<<< HEAD
		topleftx = x - Width / 2;
		toplefty = y + Height / 2;
		toprightx = x + Width / 2;
		toprighty = y + Height / 2;
		bottomleftx = x - Width / 2;
		bottomlefty = y - Height / 2;
		bottomrightx = x + Width / 2;
		bottomrighty = y - Height / 2;
=======
>>>>>>> origin/master
	}
	void Draw()
	{
		DrawSprite(SpriteID);
	}
	
	
};




//divides the mainmenu, gameplay, and end fuctions
enum GAMESTATES
{
	eMAIN_MENU,
	eGAMEPLAY,
	eEND
};


void UpdateMainMenu();
void UpdateGamestate();


int main(int argc, char** argv[])
{
<<<<<<< HEAD
	bool IsGameRunning = true;
=======
>>>>>>> origin/master
	//The Window
	Initialise(iScreenWidth, iScreenHeight, false, "Gnpo");

	//switches to the Main Menu state
	GAMESTATES eCurrentState = eMAIN_MENU;

	SetBackgroundColour(SColour(0x00, 0x00, 0x00, 0xFF));


	//reffering to the paddle structure and where it's located.

	paddle player1;
	player1.x = 50.f;
	player1.y = 300.0f;

	paddle player2;
	player2.x = 850.f;
	player2.y = 300.f;

	pongball thepongball;
<<<<<<< HEAD
	thepongball.x = 300.f;
	thepongball.y = 450.f;
=======
	thepongball.x = 0.f;
	thepongball.y = 20.f;
>>>>>>> origin/master


	do // <- gameloop 
	//The game begins here.
	//Also this draws the sprite and score at the top, along with making the background black. going to be declaring deltatime to GetDeltatime for the sake of convenience
	
	{ 
		ClearScreen();
		float deltatime = GetDeltaTime() * 8;
		SetBackgroundColour(SColour(0x00, 0x00, 0x00, 0xFF));


		switch (eCurrentState)
		{
			//Made it so that the main menu
		case eMAIN_MENU:

			DrawString("Press 1 to Play", iScreenWidth * 0.50f, iScreenHeight - 280);
			if (IsKeyDown('1'))
			{
				eCurrentState = eGAMEPLAY;

			}


			break;
		case eGAMEPLAY:

			player1.Draw();
			player1.Move(deltatime);
			player2.Move(deltatime);
			player2.Draw();
<<<<<<< HEAD

			("Press 1 to play");

			float d = 2;
=======
			
			("Press 1 to play");

>>>>>>> origin/master

			DrawString("PLAYER 1: ", iScreenWidth * 0.02f, iScreenHeight - 2);
			DrawString("PLAYER 2: ", iScreenWidth * 0.65f, iScreenHeight - 2);

			thepongball.Draw();
			thepongball.Move(deltatime);
<<<<<<< HEAD

			//GETTING THIS BABY TO BOUNCE BACK AND DISAPPEAR
			//right side
			if (thepongball.x >= 900)
			{

				thepongball.x = iScreenWidth / 2;
			}

			//left side
			if (thepongball.x <= 0)
			{
				thepongball.x = iScreenWidth / 2;

			}

			////up
			if (thepongball.y >= 600)
			{
				thepongball.ballSpeedY = thepongball.ballSpeedY * -1.f;
				thepongball.Move(deltatime);

			}
			//down
=======
			
			//GETTING THIS BABY TO BOUNCE BACK
			if (thepongball.x >= 900)
			{
				thepongball.ballSpeedX = thepongball.ballSpeedX * -1.f;
				thepongball.Move(deltatime);

			}
				if (thepongball.x <= 0)
			{
				thepongball.ballSpeedX = thepongball.ballSpeedX * -1.f;
				thepongball.Move(deltatime * 2.f);
			}
			
			////try
			if (thepongball.y >= 600)
			{
				thepongball.ballSpeedY = thepongball.ballSpeedY * -1.f;
			thepongball.Move(deltatime);

			}

>>>>>>> origin/master
			if (thepongball.y <= 00)
			{
				thepongball.ballSpeedY = thepongball.ballSpeedY * -1.f;
				thepongball.Move(deltatime / 2.f);

			}

<<<<<<< HEAD
			//COLLIDE PLAYER 1
			if (thepongball.topleftx < player1.toprightx)
			{
				if (thepongball.bottomleftx < player1.bottomrightx)
				{

					if (thepongball.toplefty < player1.toprighty)
					{
						if (thepongball.bottomlefty > player1.bottomrighty)
						{
							thepongball.ballSpeedX = thepongball.ballSpeedX * -1.f;
							thepongball.Move(deltatime);

						}
					}
				}
			}

			//COLLIDE PLAYER 2
			if (thepongball.toprightx > player2.topleftx)
			{
				if (thepongball.bottomrightx > player2.bottomleftx)
				{

					if (thepongball.toprighty < player2.toplefty)
					{
						if (thepongball.bottomrighty > player2.bottomlefty)
						{
							thepongball.ballSpeedX = thepongball.ballSpeedX * -1.f;
							thepongball.Move(deltatime);

						}
					}
				}
			}



=======
			
>>>>>>> origin/master

			//player 1
			//going up
			if (IsKeyDown('W'))

			{
				player1.y += deltatime * 30.f;
				if (player1.y > -128.f)
				{
					player1.y > -128.0f;
					player1.Move(player1.y);
				}
			}

			//going down
			if (IsKeyDown('S'))
			{
				player1.y -= deltatime * 30.f;
				if (player1.y > -128.f)
				{
					player1.y > -128.0f;
					player1.Move(player1.y);
				}
			}


			//player 2
			//P2 going up
<<<<<<< HEAD
			if (IsKeyDown(GLFW_KEY_UP))
=======
			if (IsKeyDown('O'))
>>>>>>> origin/master
			{
				player2.y += deltatime * 30.f;
				if (player2.y > -128.0f)
				{
					player2.y > -128.f;
					player2.Move(player2.y);
				}
			}

			//P2 going down
<<<<<<< HEAD
			if (IsKeyDown(GLFW_KEY_DOWN))
=======
			if (IsKeyDown('L'))
>>>>>>> origin/master
			{
				player2.y -= deltatime * 30.f;
				if (player2.y > 64.f)
				{
					player2.y > 64.0f;
					player2.Move(player2.y);
				}
<<<<<<< HEAD

			}

=======
				
			}
		
>>>>>>> origin/master
			if (IsKeyDown('C'))
			{
				DrawString("(/\^O^/\)", iScreenWidth * 0.30f, iScreenHeight * .80f);
			}
<<<<<<< HEAD

			if (IsKeyDown(GLFW_KEY_ESCAPE))
			{

				IsGameRunning = false;
			}
			
=======
>>>>>>> origin/master
		}
		switch (eCurrentState)

		{
		case eEND:

			
			{
				ClearScreen();
				Shutdown();
				DestroySprite(player1.SpriteID);
				DestroySprite(player2.SpriteID);
				DestroySprite(thepongball.SpriteID);
				system("pause");
				return 0;
				




			}
		}
	}
<<<<<<< HEAD
	
	while (FrameworkUpdate() == false && IsGameRunning);
=======

	while (FrameworkUpdate() == false);
>>>>>>> origin/master
	
	Shutdown();

	return 0;
}
	
	
	

	

