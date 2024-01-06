#include "iGraphics.h"


int a, c, d, e,f,mc;
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

//charecter properties

void arrowAttack();
int stand;
int load[12];
int arrowclick = 0;
int charIndex = 0;

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
		else if (startPage == 1 && (mx >= 150 && mx <= 244) && (my >= 104 && my <= 293)){
			arrowclick = 1;
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
	if (key == '\r')
	{

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
	iShowImage(150, 100, 100, 200, stand);

	if (arrowclick == 1){
		arrowAttack();
	}

	
	
	
}
void arrowAttack(){

	for (charIndex = 0; charIndex <= 12; charIndex++){
		iShowImage(0, 100, 300, 400, load[charIndex]);
	}
	charIndex = 0;

}
void startButtonClickHandler(){
	HomePage = 0;
	startPage = 1;

}

int main()
{

	iInitialize(1200, 600, "Project Title");
	a = iLoadImage("./images/starting.bmp"),
	c = iLoadImage("./images/3.bmp");
	e = iLoadImage("./images/11.1.png");

	d = iLoadImage("./images/level1.bmp");
	f = iLoadImage("./images/stone.png");


	stand = iLoadImage("./images/11.1.png");

	load[0] = iLoadImage("./images/char1.png");
	load[1] = iLoadImage("./images/char2.png");
	load[2] = iLoadImage("./images/char3.png");
	load[3] = iLoadImage("./images/char4.png");
	load[4] = iLoadImage("./images/char5.png");
	load[5] = iLoadImage("./images/char6.png");
    load[6] = iLoadImage("./images/char7.png");
	load[7] = iLoadImage("./images/char8.png");
	load[8] = iLoadImage("./images/char9.png");
	load[9] = iLoadImage("./images/char10.png");
	load[10] = iLoadImage("./images/char11.png");
	load[11] = iLoadImage("./images/char12.png");

	iStart();
	return 0;
}