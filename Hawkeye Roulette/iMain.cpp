#include "iGraphics.h"


int a, c, d, e, f, h,arrow;
float x = 0;
float y = 0;
int r = 255;
int g = 255;
int b = 255;
int dx = 10;
int dy = 10;


//-------------menu page properties------------

void drawHomepage();
int HomePage = 0;


//-------startpage properties(level 1)-------

void drawStartpage();
void startButtonClickHandler();
int startButtonClick = 0;
int startPage = 0;

//---------------------------------------------------- main charecter properties----------------------------------------------

void arrowAttack();
void arrowLaunch();
int stand;
char charecter[23][25] = { "images\\character1.bmp", "images\\character2.bmp", "images\\character3.bmp", "images\\character4.bmp", "images\\character5.bmp", "images\\character6.bmp", "images\\character7.bmp", "images\\character8.bmp", "images\\character9.bmp", "images\\character10.bmp", "images\\character11.bmp", "images\\character12.bmp", "images\\character11.bmp", "images\\character10.bmp", "images\\character9.bmp", "images\\character8.bmp", "images\\character7.bmp", "images\\character6.bmp", "images\\character5.bmp", "images\\character4.bmp", "images\\character3.bmp", "images\\character2.bmp", "images\\character1.bmp" };
int arrowclick = 0;
int charIndex = 0;

int char_x = 0;
int char_y = 0;
int char_stand = 1;
int stand_count = 0;

int a_launch = 0;
float a_x = 130; 
float a_y = 180;

//------------------------------------------------vilain properies for level1--------------------------------------------------------------


void villain1();
int stand2;
int v1_x = 0;
int v1_y = 0; 
char v1[6][25] = { "images\\v1.bmp", "images\\v2.bmp", "images\\v3.bmp", "images\\v4.bmp", "images\\v5.bmp", "images\\v6.bmp" };
int v1_index = 0;
int v1_attack = 1;
int v1_count = 0;
int v1_stand = 1;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	iShowImage(x, y, 1200, 600, a);
	iShowImage(x + 1200, y, 1200, 600, a);
	x -= 0.05;
	if (x < -600)
	x = 0;

	iSetColor(r, g, b);
	iText(100, 100, "Press F2 to start", GLUT_BITMAP_TIMES_ROMAN_24);

	if (HomePage == 1){
		drawHomepage();

	}
	else if (startPage == 1){
		drawStartpage();
	}

	if (arrowclick == 1 && char_stand == 0){
		arrowAttack();
		
	}

	if (a_launch == 1){

		arrowLaunch();
	}

	if (v1_attack == 1 && startPage == 1){
		villain1();
		

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
		char_stand = 0;
		a_launch = 1;
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
	else if (key == GLUT_KEY_F2)
	{
		
		HomePage = 1;
	
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
	
	iShowImage(100, 0, 661, 377, e);
}
void drawStartpage(){
	iFilledRectangle(0, 0, 1200, 600);
	iShowImage(x, y, 1200, 600, d);
	iShowImage(x + 1200, y, 1200, 600, d);
	x -= 0.05;
	if (x < -600)
		x = 0;

	iShowImage(0, -120, 400, 319, f);
	if (char_stand == 1){
		iShowImage(150, 100, 100, 200, stand);
	}
	if (v1_stand == 1){
		iShowImage(800, 100, 100, 200, stand2);
	}
	iShowImage(800, -120, 400, 319, h);


}
void arrowAttack(){


	iShowBMP2(char_x + 150, char_y + 100, charecter[charIndex], 0);
	charIndex++;
	if (charIndex >= 12){
		charIndex = 0;

	}
	stand_count++;
	if (stand_count >= 12){
		stand_count = 0;
		charIndex = 0;
		char_stand = 1;
	}

}
void arrowLaunch(){


	iShowImage(a_x , a_y, 120, 40, arrow);
	a_x += 1;
	a_y -= 0.05;
	if (a_x > 900)
	{
		a_launch = 0;
		a_x = 140;
		a_y = 180;
	}
}

void villain1(){

	iShowBMP2(v1_x+900, v1_y+ 50, v1[v1_index], 0);
	v1_index++;
	if (v1_index >= 6){
		v1_index = 0;
	}
	v1_count++;
	if (v1_count >= 6){
		v1_count = 0;
		v1_index = 0;
		v1_stand = 0;
	}
}
void startButtonClickHandler(){
	HomePage = 0;
	startPage = 1;

}

int main()
{
	iSetTimer(5000, arrowAttack);
	iSetTimer(10000, villain1);
	iSetTimer(5, arrowLaunch);

	iInitialize(1200, 600, "Project Title");
	a = iLoadImage("./images/starting.bmp"),
	c = iLoadImage("./images/3.bmp");
	e = iLoadImage("./images/charMenu.png");

	d = iLoadImage("./images/level1.bmp");
	f = iLoadImage("./images/stone.png");
	h = iLoadImage("./images/stone.png");


	stand = iLoadImage("./images/11.1.png");
	stand2 = iLoadImage("./images/v1.bmp");

	arrow = iLoadImage("./images/arrow.png");


	iStart();
	return 0;
}