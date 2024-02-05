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

int a, c, d, e, f, stone,gameOver;
int x = 0;
int y = 0;

int r = 255;
int g = 255;
int b = 255;

int dx = 10;
int dy = 10;

int ux = 0;
int uy = 0;

char scoreText[20];
char vscoreText[20];


//:::::::::::::Music and Menu Variables:::::::::::://
int musicOn;
int menu;
int rules;
int credit;
int gameOn = 0;

char load[4][25] = { "image\\loading1.bmp", "image\\loading2.bmp", "image\\loading3.bmp", "image\\loading4.bmp" };
int loadIndex = 0;
int loadingScreen = 1;
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
char hero[11][25] = { "image\\hero1.bmp", "image\\hero2.bmp", "image\\hero3.bmp", "image\\hero4.bmp", "image\\hero5.bmp", "image\\hero6.bmp", "image\\hero7.bmp", "image\\hero8.bmp", "image\\hero9.bmp", "image\\hero10.bmp", "image\\hero11.bmp"};
int hero_index = 0;
int hero_attack = 0;
int hero_count = 0;
int hero_stand = 1;

int jumpHeight = 50;     // Adjust as needed
float jumpVelocity = 0;  // Initial jump velocity
bool isJumping = false;  // Flag to indicate if the hero is jumping
int herolife = 50;

// Villain Character Variables

int vilx = 800;
int vily = 150;
int vilhitx = 30;
int vilhity = 75;
int vshootx = 30;
int vshooty = 75;
char v1[6][25] = { "image\\v1.bmp", "image\\v2.bmp", "image\\v3.bmp", "image\\v4.bmp", "image\\v5.bmp", "image\\v6.bmp" };
int v1_index = 0;
int v1_attack = 1;
int v1_count = 0;


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

//Arrow variables
float arrowDirectionX = 0.0f;
float arrowDirectionY = 0.0f;


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

		/*	 // Calculate the direction towards the villain
		float arrowDirectionX = vilx - ox;
		float arrowDirectionY = (vily + vilhity) - oy;

		// Normalize the direction vector
		float length = std::sqrt(arrowDirectionX * arrowDirectionX + arrowDirectionY * arrowDirectionY);
		arrowDirectionX /= length;
		arrowDirectionY /= length; */

		// Move the bullet along the normalized direction
		ox -= 1 * arrowDirectionX;
		oy -= 1 * arrowDirectionY;

		// Check if the bullet has reached the villain's hitting zone
		if (ox > 1366 || oy > 728 || ox < 0 || oy < 0){
			ox = herox + shootx;
			oy = heroy + shooty;
			shooot = 0;
		}
		else if ((ox >= vilx && ox <= vilx + 30) && (oy >= vily - 10 && oy <= vily + 160)) {
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
	if (vshooot == 1) {
		// Calculate the direction towards the hero
		float varrowDirectionX = (herox + shootx) - vox;
		float varrowDirectionY = (heroy + shooty) - voy;

		// Normalize the direction vector
		float vlength = std::sqrt(varrowDirectionX * varrowDirectionX + varrowDirectionY * varrowDirectionY);
		varrowDirectionX /= vlength;
		varrowDirectionY /= vlength;

		// Move the bullet along the normalized direction
		vox += 1 * varrowDirectionX;
		voy += 1 * varrowDirectionY;

		// Check if the bullet is still within the screen bounds
		if (vox < 0 || vox > 1366 || voy < 0 || voy > 728) {
			vox = vilx - vilhitx;
			voy = vily + vilhity;
			vshooot = 0;
		}

		// Check if the bullet has hit the hero
		if ((vox <= herox + 30 && vox >= herox) && (voy >= heroy + 10 && voy <= heroy + 160)) {
			vox = vilx - vilhitx;
			voy = vily + vilhity;
			vshooot = 0;
			herolife -= 5;

		}
	}
}


//::::::::::Function Skeletions:::::::::::::::://

void funcGameOver();
void funcMissionOver();

void loadScreen();
void drawHomePage();
void drawHscorePage();
void drawInstructPage();
void drawGamePage();
void drawCreditPage();
void drawMapPage();
void drawScreen();
void collision();
void updateHeroPosition();
void Run();
void drawTraceline();

void startButtonClickHandler();
void creditButtonClickHandler();
void mapButtonClickHandler();
void instructButtonClickHandler();
void hscoreButtonClickHandler();

void mission1ButtonClickHandler();

void backButtonClickHandler();

void vilmotion();
void hero_motion();
//::::::::::::::iDraw:::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	/*if (loadingScreen == 1)
	{
		iShowImage(0, 0, 1366, 728, e);
		iShowBMP2(400, 200, load[loadIndex], 0);
		loadScreen();
	}
	else*/ if (homePage == 1)
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
		if (herolife == 0){
			//gameOn = 0;
			//iShowImage(0, 0, 1366, 728, e);
			//iText(400, 400, "Game Over", GLUT_BITMAP_HELVETICA_18);
			iShowImage(0, 0, 1366, 728, gameOver);
		}
		else{
			drawGamePage();
			updateHeroPosition();
			drawTraceline();
			iShowBMP2(94, 648, "image\\healthPoint.bmp", 0);
			sprintf_s(scoreText, sizeof(scoreText), "  %d", herolife);
			iText(154, 694, scoreText, GLUT_BITMAP_HELVETICA_18);
			iText(10, 692, "Hero Health", GLUT_BITMAP_HELVETICA_18);
			iShowBMP2(vilx + 55, vily - 65, "image\\villainHealth.bmp", 0);
			sprintf_s(vscoreText, sizeof(vscoreText), "%d", villainlife);
			iText(vilx + 85 , vily - 35, vscoreText, GLUT_BITMAP_HELVETICA_18);
		}
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
	ux = mx;
	uy = my;
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
			else if (homePage == 0 && gameOn == 1)    //arrow
			{
				// Calculate the direction towards the mouse position
				arrowDirectionX = mx - ox;
				arrowDirectionY = my - oy;

				// Normalize the direction vector
				float length = std::sqrt(arrowDirectionX * arrowDirectionX + arrowDirectionY * arrowDirectionY);
				arrowDirectionX /= length;
				arrowDirectionY /= length;
				shooot = 1;
				hero_attack = 1;
				hero_stand = 0;
				iSetTimer(10, shoot);
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
		iSetTimer(10, vshoot);
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
		if (!isJumping) {
			isJumping = true;
			jumpVelocity = 13.0f;  // Adjust as needed
		}
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
void loadScreen()
{
	

	if (loadingScreen)
	{
		if (loadIndex < 4)
		{
			loadIndex++;
			if (loadIndex == 3)
			{
				homePage = 1;
			}
		}
		else if (loadIndex == 4)
		{
			loadIndex = 3;
		}

	}
}
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
	iShowImage(0, 0, 1366, 728, a);
	//iFilledRectangle(herox, heroy, 50, 150);
	iShowImage(herox - 10, heroy - 30, 150, 50, stone);
	if (hero_stand == 1)
	{
		iShowBMP2(herox, heroy, "image\\hero1.bmp", 0);
	}
	else if (hero_stand == 0 && hero_attack == 1)
	{
		iShowBMP2(herox, heroy, hero[hero_index], 0);
		
	}
	iShowImage(vilx - 10, vily + 3, 250, 50, stone);
	iShowBMP2(vilx, vily, v1[v1_index], 0);
	
	if (shooot == 1)
	{
		//iFilledRectangle(ox, oy, 100, 20);
		iShowImage(ox, oy, 100, 30, d);
	}

	if (vshooot == 1)
	{
		//iFilledRectangle(vox, voy, 20, 20);
		iShowImage(vox, voy, 100, 30, f);
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
void drawTraceline(){
	if (ux < 500 && uy < 500){
		iLine(ux, uy, herox, heroy + shooty);
	}
}
void updateHeroPosition() {
	if (isJumping) {
		heroy += jumpVelocity;
		jumpVelocity -= 0.5f;  // Gravity effect, adjust as needed

		// Check if the jump is complete (hero is back on the ground)
		if (heroy <= 150) {
			heroy = 150;
			isJumping = false;
		}
	}
}
void hero_motion(){
	hero_index++;
	if (hero_index >= 11){
		hero_index = 0;
	}
	hero_count++;
	if (hero_count >= 11){
		hero_count = 0;
		hero_index = 0;
		hero_stand = 1;

	}
}
void vilmotion(){
	v1_index++;
	if (v1_index >= 6){
		v1_index = 0;
	}
	v1_count++;
	if (v1_count >= 6){
		v1_count = 0;
		v1_index = 0;
		
	}
}

//::::::::::::iMain:::::::::::::::::://

int main()
{

	iInitialize(1366, 728, "Hawkeye Roulette");
	e = iLoadImage("./image/loadingScreen.jpg");
	a = iLoadImage("./image/bg_level1.jpg");
	d = iLoadImage("./image/arrow.png");
	f = iLoadImage("./image/arrow2.png");
	stone = iLoadImage("./image/stone.png");
	gameOver = iLoadImage("./image/gameOver.jpg");
	iSetTimer(100, vilmotion);
	iSetTimer(200, hero_motion);
	if (musicOn)
	{
		PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
	}

	iStart();

	return 0;
}