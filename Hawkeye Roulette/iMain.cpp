#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int x = 0;
int y = 0;

int r = 255;
int g = 255;
int b = 255;;

void iDraw()
{
	iClear();
	iFilledCircle(x + 193, y + 400, 45);
	iFilledCircle(x + 385, y + 400, 45);
	iRectangle(x + 100, y + 250, 380, 250);
	iLine(x + 193, y + 300, x + 385, y + 300);
	iSetColor(r, g, b);

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
		y+=10;
	}
	else if (key == 's')
	{
		y-=10;
	}
	else if (key == 'a')
	{
		x-=10;
	}
	else if (key == 'd')
	{
		x+=10;
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
		x += 10;
	}

	if (key == GLUT_KEY_LEFT)
	{
		x -= 10;
	}

	if (key == GLUT_KEY_UP)
	{
		y += 10;
	}

	if (key == GLUT_KEY_DOWN)
	{
		y -= 10;
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1200, 700, "Play With Box");
	///updated see the documentations
	iStart();
	return 0;
}