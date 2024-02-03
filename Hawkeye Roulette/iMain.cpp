/**
* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
* :: █████   █████                           █████                                  ::
* ::░░███   ░░███                           ░░███                                   ::
* :: ░███    ░███   ██████   █████ ███ █████ ░███ █████  ██████  █████ ████  ██████ ::
* :: ░███████████  ░░░░░███ ░░███ ░███░░███  ░███░░███  ███░░███░░███ ░███  ███░░███::
* :: ░███░░░░░███   ███████  ░███ ░███ ░███  ░██████░  ░███████  ░███ ░███ ░███████ ::
* :: ░███    ░███  ███░░███  ░░███████████   ░███░░███ ░███░░░   ░███ ░███ ░███░░░  ::
* :: █████   █████░░████████  ░░████░████    ████ █████░░██████  ░░███████ ░░██████ ::
* ::░░░░░   ░░░░░  ░░░░░░░░    ░░░░ ░░░░    ░░░░ ░░░░░  ░░░░░░    ░░░░░███  ░░░░░░  ::
* ::                                                              ███ ░███          ::
* ::                                                             ░░██████           ::
* ::                                                              ░░░░░░            ::
* :: ███████████                       ████            █████     █████              ::
* ::░░███░░░░░███                     ░░███           ░░███     ░░███               ::
* :: ░███    ░███   ██████  █████ ████ ░███   ██████  ███████   ███████    ██████   ::
* :: ░██████████   ███░░███░░███ ░███  ░███  ███░░███░░░███░   ░░░███░    ███░░███  ::
* :: ░███░░░░░███ ░███ ░███ ░███ ░███  ░███ ░███████   ░███      ░███    ░███████   ::
* :: ░███    ░███ ░███ ░███ ░███ ░███  ░███ ░███░░░    ░███ ███  ░███ ███░███░░░    ::
* :: █████   █████░░██████  ░░████████ █████░░██████   ░░█████   ░░█████ ░░██████   ::
* ::░░░░░   ░░░░░  ░░░░░░    ░░░░░░░░ ░░░░░  ░░░░░░     ░░░░░     ░░░░░   ░░░░░░    ::
* ::                                                                                ::
* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*
* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
* ::░█▀█░█░█░▀█▀░█░█░█▀█░█▀▄░░░░░░░▀█▀░█▀█░█░█░█▄█░▀█▀░█▀▄░░░█░█░█░█░█▀█░█▀█░░░░        ::
* ::░█▀█░█░█░░█░░█▀█░█░█░█▀▄░░▀░░░░░█░░█▀█░█▀█░█░█░░█░░█░█░░░█▀▄░█▀█░█▀█░█░█░░░░        ::
* ::░▀░▀░▀▀▀░░▀░░▀░▀░▀▀▀░▀░▀░░▀░░░░░▀░░▀░▀░▀░▀░▀░▀░▀▀▀░▀▀░░░░▀░▀░▀░▀░▀░▀░▀░▀░▄▀░        ::
* ::░▄▀▄░█░█░█▀█░▀▀█░▀█▀░░░▀▀█░█▀█░█▀▄░▀█▀░█▀█░░░█▀▀░█░█░█▀▄░█▀█░█░█░░░░                ::
* ::░█\█░█░█░█▀█░▄▀░░░█░░░░▄▀░░█▀█░█▀▄░░█░░█░█░░░▀▀█░█░█░█▀▄░█▀█░█▀█░░░░                ::
* ::░░▀\░▀▀▀░▀░▀░▀▀▀░▀▀▀░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░░░▀▀▀░▀▀▀░▀▀░░▀░▀░▀░▀░▄▀░                ::
* ::░█▄█░█▀█░█░█░█▀▀░█░█░▀▀█░█▀█░░░█▀▀░█░█░█░░░▀█▀░█▀█░█▀█░█▀█░░░█▀▄░█▀█░█▀▄░█▀▀░█░█░█▀█::
* ::░█░█░█▀█░█▀█░█▀▀░█░█░▄▀░░█▀█░░░▀▀█░█░█░█░░░░█░░█▀█░█░█░█▀█░░░█▀▄░█░█░█▀▄░▀▀█░█▀█░█▀█::
* ::░▀░▀░▀░▀░▀░▀░▀░░░▀▀▀░▀▀▀░▀░▀░░░▀▀▀░▀▀▀░▀▀▀░░▀░░▀░▀░▀░▀░▀░▀░░░▀▀░░▀▀▀░▀░▀░▀▀▀░▀░▀░▀░▀::
* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
*/




//:::::::::::::::::Header Files:::::::::::::::::::::::::::::::::::::::://

#include <iostream>
#include <cmath>
#include <chrono>
#include <cstdlib>
#include "header\iGraphics.h"
#include "header\collision.h"

//::::::::::::::::::::Variables:::::::::::::::::::::::::::::::::::::::://


int x = 0;
int y = 0;

int r = 255;
int g = 255;
int b = 255;

int dx = 10;
int dy = 10;

//:::::::::::::Music and Menu Variables:::::::::::://
int musicOn;
int menu;
int rules;
int credit;
int gameOn = 0;



int homePage = 1;
int mission1Page = 0;
int instructPage = 0;
int hscorePage = 0;
int creditPage = 0;

//Hero Character Variables

int herox = 150;
int heroy = 150;
int shootx = 30;
int shooty = 75;

// Villain Character Variables

int vilx = 800;
int vily = 150;
int vilhitx = 30;
int vilhity = 75;
int vshootx = 30;
int vshooty = 75;

// Define the range for x and y coordinates within which the villain can appear
int minX = 300;  // Adjust these values based on your game's requirements
int maxX = 1300;
int minY = 100;
int maxY = 600;
int villainlife = 10;


// Using for Shoot function
float ox = herox + shootx;
float oy = heroy + shooty;
float vox = vilx - vshootx;
float voy = vily + vshooty;
int shooot = 0;
int vshooot = 0; //Shoot Flag


//::::::::::::::::::::::::::Action Functions:::::::::::::::::::::::::::::://

// Function to reset the villain's position to a random location and reset it's life
void resetVillain() {

	// Set the villain's position to a random location within the specified range
	vilx = rand() % (maxX - minX + 1) + minX;
	vily = rand() % (maxY - minY + 1) + minY;
	villainlife = 10;
}

void shoot(){

	if (shooot == 1) {
		// Calculate the direction towards the villain
		float directionX = vilx - ox;
		float directionY = (vily + vilhity) - oy;

		// Normalize the direction vector
		float length = std::sqrt(directionX * directionX + directionY * directionY);
		directionX /= length;
		directionY /= length;

		// Move the bullet along the normalized direction
		ox += 1 * directionX;
		oy += 1 * directionY;

		// Check if the bullet has reached the villain's hitting zone
		if ((ox >= vilx && oy >= vily + vilhity) || (ox >= vilx && oy <= vily + vilhity)) {
			ox = herox + shootx;
			oy = heroy + shooty;
			villainlife -= 5;
			shooot = 0;  // Reset shooot after shooting

			if (villainlife == 0){
				resetVillain();     // Reset villain's position and life when killed
			}  
		}
	}
	iSetTimer(10, shoot);
}



void vshoot(){
	if (vshooot == 1){
		vox -= 5;
		if (voy != heroy + 75)
		{
			float abs = (vilx) / vox;
			voy += ((vily + 75) - voy) / abs;
		}
		if (vox <= herox+30 && voy == heroy + 75)
		{
			vox = vilx - vshootx;
			voy = vily + vshooty;
			vshooot = 0;
		}

		//iSetTimer(50, vshoot);
	}
}

//::::::::::Function Skeletions:::::::::::::::://

void funcGameOver();
void funcMissionOver();

void drawHomePage();
void drawHscorePage();
void drawInstructPage();
void drawGamePage();
void drawCreditPage();
void drawMapPage();
void drawScreen();
void collision();

void Run();

void startButtonClickHandler();
void creditButtonClickHandler();
void mapButtonClickHandler();
void instructButtonClickHandler();
void hscoreButtonClickHandler();

void mission1ButtonClickHandler();

void backButtonClickHandler();

//::::::::::::::iDraw:::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	
    if (homePage == 1)
	{
		drawHomePage();
	}
	else if (hscorePage == 1)
	{
		drawHscorePage();
	}
	else if (instructPage == 1)
	{
		drawInstructPage();
	}
	else if (gameOn == 1)
	{
		drawGamePage();
	}
	else if (creditPage == 1)
	{
		drawCreditPage();
	}

}


//::::::::::::::::::::::Controls::::::::::::::::::::::::::::::::::::::://


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
//***********ipassiveMouse*************//
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		{
			printf("x=%d     y=%d\n", mx, my);

			if (homePage == 1 && (mx >= 791 && mx <= 1059) && (my >= 445 && my <= 491))   //start
			{
				startButtonClickHandler();
			}
			else if (homePage == 1 && (mx >= 914 && mx <= 1117) && (my >= 593 && my <= 641))    //edited
			{
				instructButtonClickHandler();
			}
			else if (homePage == 1 && (mx >= 966 && mx <= 1166) && (my >= 184 && my <= 235))   //edited
			{
				hscoreButtonClickHandler();
			}
			else if (homePage == 1 && (mx >= 665 && mx <= 872) && (my >= 185 && my <= 234))   //edited
			{
				creditButtonClickHandler();
			}

			else if (homePage == 1 && (mx >= 77 && mx <= 124) && (my >= 661 && my <= 707))
			{
				if (musicOn)
				{
					musicOn = false;
					PlaySound(0, 0, 0);
				}
				else
				{
					musicOn = true;
					PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
				}
			}


		}
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'r')
	{
		r = 255;
		g = 0;
		b = 0;

	}
	else if (key == 'g')
	{
		g = 255;
		r = 0;
		b = 0;
	}
	else if (key == 'b')
	{
		b = 255;
		r = 0;
		g = 0;
	}
	else if (key == 'w')
	{
		vily += 10;
	}
	else if (key == 's')
	{
		vily -= 10;
	}
	else if (key == 'a')
	{
		vilx -= 10;
	}
	else if (key == 'd')
	{
		vilx += 10;
	}

	else if (key == 'e')
	{
		shooot = 1;
		iSetTimer(10, shoot);
	}
	else if (key == 'i')
	{
		vshooot = 1;
	}

}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_RIGHT)
	{
		vilx += 10;
	}
	if (key == GLUT_KEY_LEFT)
	{
		vilx -= 10;
	}
	if (key == GLUT_KEY_UP)
	{
		vily += 10;
	}
	if (key == GLUT_KEY_DOWN)
	{
		vily -= 10;
	}

	if (key == GLUT_KEY_HOME)
	{

	}
	else if (key == GLUT_KEY_F2)
	{

	}

}

//:::::::::::Handlers::::::::::::::::://

void startButtonClickHandler()
{
	gameOn = 1;
	homePage = 0;
	instructPage = 0;
	hscorePage = 0;
	creditPage = 0;
}

void instructButtonClickHandler(){
	homePage = 0;
	gameOn = 0;
	instructPage = 1;
	hscorePage = 0;
	creditPage = 0;
}
void hscoreButtonClickHandler(){
	homePage = 0;
	instructPage = 0;
	hscorePage = 1;
	creditPage = 0;
	gameOn = 0;
}
void creditButtonClickHandler()
{
	homePage = 0;
	mission1Page = 0;
	instructPage = 0;
	hscorePage = 0;
	creditPage = 1;
	gameOn = 0;
}
void backButtonClickHandler()
{
	homePage = 1;
	mission1Page = 0;
	instructPage = 0;
	hscorePage = 0;
	creditPage = 0;
	gameOn = 0;
}


//:::::::::::::::Drawing Functions:::::::::::://

void drawHomePage()
{
	if (musicOn){
		iSetColor(128, 128, 128);
		iFilledRectangle(0, 0, 1366, 728);
		iShowBMP2(0, 0, "image\\homemusic.bmp", 0);
	}
	else if (!musicOn){
		iSetColor(128, 128, 128);
		iFilledRectangle(0, 0, 1366, 728);
		iShowBMP2(0, 0, "image\\homemute.bmp", 0);
	}

}

void drawGamePage()
{
	iSetColor(r, g, b);
	iFilledRectangle(herox, heroy, 30, 150);
	iFilledRectangle(vilx, vily, 30, 150);

	if (shooot == 1)
	{
		iFilledRectangle(ox, oy, 20, 20);
	}

	if (vshooot == 1)
	{
		iFilledRectangle(vox, voy, 20, 20);
	}
}

void drawHscorePage(){
	iFilledRectangle(0, 0, 1366, 728);
	iShowBMP2(0, 0, "image\\highscore.bmp", 0);
}
void drawInstructPage(){
	iFilledRectangle(0, 0, 1366, 728);
	iShowBMP2(0, 0, "image\\instruction.bmp", 0);
}

void drawCreditPage()
{
	iFilledRectangle(0, 0, 1366, 728);
	iShowBMP2(0, 0, "image\\credits.bmp", 0);
}


//::::::::::::iMain:::::::::::::::::://

int main()
{

	iInitialize(1366, 728, "Hawkeye Roulette");

	if (musicOn)
	{
		PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
	}

	iStart();

	return 0;
}