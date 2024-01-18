#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int x = 0;
int y = 0;

int r = 255;
int g = 255;
int b = 255;;

int a;

float ox = 180;
float oy = 225;

int herox = 150;
int heroy = 150;
int shootx = 30;
int shooty = 75;

int vilx = x + 800;
int vily = y + 150;
int vilhitx = 30;
int vilhity = 75;

int shooot = 0;

void shoot(){

	if (shooot == 1){
		ox += 5;
		if (oy != vily+75)
		{
			float abs = (vilx) / ox;
			oy += ((vily+vilhity) - oy) / abs;
		}

		if (ox >= vilx && oy == vily+vilhity)
		{
			ox = herox+shootx;
			oy = heroy+shooty;
			shooot = 0;

		}

		iSetTimer(50, shoot);
	}
}

void iDraw()
{
	iClear();

	iSetColor(r, g, b);
	iFilledRectangle(herox, heroy, 30, 150);
	iFilledRectangle(vilx, vily, 30, 150);
	if (shooot == 1)
	{ iFilledRectangle(ox, oy, 20, 20);}
	

	
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
		vily+=10;
	}
	else if (key == 's')
	{
		vily-=10;
	}
	else if (key == 'a')
	{
		vilx-=10;
	}
	else if (key == 'd')
	{
		vilx+=10;
	}

	else if (key == 'e')
	{
		shooot = 1;
		iSetTimer(10, shoot);
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
	
}


int main()
{
	iInitialize(1000, 600, "Play With Box");
	iStart();
	return 0;
}