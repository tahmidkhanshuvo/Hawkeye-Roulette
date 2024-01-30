#include "iGraphics.h"

<<<<<<< Updated upstream
=======

int a, c, d, e;
float x = 0;
float y = 0;
int r = 255;
int g = 255;
int b = 255;
<<<<<<< Updated upstream
int dx = 10;
int dy = 10;


=======
>>>>>>> Stashed changes

void drawHomepage();
int HomePage = 1;


//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	iShowImage(x, y, 1200, 600, a);
	iShowImage(x + 1200, y, 1200, 600, a);
	x -= 0.05;
	if (x < -600)
		x = 0;

<<<<<<< Updated upstream
	iSetColor(r, g, b);
	iText(100, 100, "Press F2 to start", GLUT_BITMAP_TIMES_ROMAN_24);

	void iSpecialKeyBoard();
	/*if (HomePage == 1){
	drawHomepage();

	}*/
=======
	//	iFilledRectangle(0, 0, 1280, 720);
	//	iShowBMP2(0, 0, "image\\instruction.bmp", 0);
	//	iShowImage(0, 0, 1366, 768, menu);
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		{
			printf("x=%d     y=%d\n", mx, my);
=======
			{


		}
>>>>>>> Stashed changes
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
	if (key == '\r')
	{

	}


<<<<<<< Updated upstream

=======
	{

	
	
>>>>>>> Stashed changes
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
	iShowBMP2(0, 0, "./images/menu.bmp", 0);
	iShowBMP2(0, 0, "./images/menu.bmp", 0);

}

//:::::::::::Handlers::::::::::::::::://


int main()
{
<<<<<<< Updated upstream

	iInitialize(1200, 600, "Project Title");
	a = iLoadImage("./images/starting.bmp"),
		iStart();
=======
	iInitialize(1366, 728, "Play With Box");

	return 0;
}