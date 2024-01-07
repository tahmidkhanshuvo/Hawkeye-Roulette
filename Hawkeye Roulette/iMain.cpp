#include "iGraphics.h"


int a, c, d, e, f, mc;
float x = 0;
float y = 0;
int r = 255;
int g = 255;
int b = 255;
int dx = 10;
int dy = 10;


//home page properties

void drawHomepage();
int HomePage = 1;


//startpage properties(level 1)

void drawStartpage();
void startButtonClickHandler();
int startButtonClick = 0;
int startPage = 0;

// main charecter properties

void arrowAttack();
int stand;
char load[12][25] = { "images\\character1.bmp", "images\\character2.bmp", "images\\character3.bmp", "images\\character4.bmp", "images\\character5.bmp", "images\\character6.bmp", "images\\character7.bmp", "images\\character8.bmp", "images\\character9.bmp", "images\\character10.bmp", "images\\character11.bmp", "images\\character12.bmp" };
int arrowclick = 0;
int charIndex = 0;

int char_x = 0;
int char_y = 0;
int char_stand = 0;
int stand_count = 0;

int a_launch = 0;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	/*iShowImage(x, y, 1200, 600, a);
	iShowImage(x + 1200, y, 1200, 600, a);
	x -= 0.05;
	if (x < -600)
	x = 0;

	iSetColor(r, g, b);
	iText(100, 100, "Press F2 to start", GLUT_BITMAP_TIMES_ROMAN_24);

	void iSpecialKeyBoard();*/
	if (HomePage == 1){
		drawHomepage();

	}
	else if (startPage == 1){
		drawStartpage();
	}

	if (arrowclick == 1 && char_stand == 1){
		arrowAttack();
		stand_count++;
		if (stand_count >= 20){
			stand_count = 0;
			charIndex = 0;
			char_stand = 0;
		}
	}

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf(" x = %d y = %d\n", mx, my);
		if (HomePage == 1 && (mx >= 820 && mx <= 947) && (my >= 403 && my <= 458)){
			startButtonClickHandler();
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
	if (key == 'a')
	{
		arrowclick = 1;
		char_stand = 1;
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

	}
	if (key == GLUT_KEY_LEFT)
	{

	}

	if (key == GLUT_KEY_HOME)
	{

	}
	else if (key == GLUT_KEY_F2){
		if (HomePage == 1){
			drawHomepage();

		}
	}

}
void drawHomepage(){
	iSetColor(128, 128, 128);
	iFilledRectangle(0, 0, 1200, 600);
	iShowImage(x, y, 1200, 600, c);
	iShowImage(x + 1200, y, 1200, 600, c);
	x -= 0.05;
	if (x < -600)
		x = 0;

	iShowBMP2(800, 400, "images\\start.bmp", 0);
	iShowBMP2(800, 300, "images\\pause.bmp", 0);
	iShowBMP2(800, 200, "images\\option.bmp", 0);
	iShowBMP2(800, 100, "images\\exit.bmp", 0);
	//iShowBMP2(200, 0, "images\\charecter.bmp", 255);
	iShowImage(200, 0, 334, 484, e);
}
void drawStartpage(){
	iFilledRectangle(0, 0, 1200, 600);
	iShowImage(x, y, 1200, 600, d);
	iShowImage(x + 1200, y, 1200, 600, d);
	x -= 0.05;
	if (x < -600)
		x = 0;

	iShowImage(0, -120, 400, 319, f);
	if (char_stand == 0){
		iShowImage(150, 100, 100, 200, stand);
	}




}
void arrowAttack(){

	iShowBMP2(char_x + 150, char_y + 100, load[charIndex], 0);
	charIndex++;
	if (charIndex >= 12){
		charIndex = 0;

	}

}
void startButtonClickHandler(){
	HomePage = 0;
	startPage = 1;

}

int main()
{
	iSetTimer(-900000, arrowAttack);
	iInitialize(1200, 600, "Project Title");
	a = iLoadImage("./images/starting.bmp"),
		c = iLoadImage("./images/3.bmp");
	e = iLoadImage("./images/11.1.png");

	d = iLoadImage("./images/level1.bmp");
	f = iLoadImage("./images/stone.png");


	stand = iLoadImage("./images/11.1.png");


	iStart();
	return 0;
}