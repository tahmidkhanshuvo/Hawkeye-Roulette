#ifndef LOADIMAGE_H_INCLUDED
#define LOADIMAGE_H_INCLUDED

#include "Variables.h"
void loadImage()
{

	for (int i = 0; i < 7; i++)
	{
		jumpup1[i] = iLoadImage(jumpup1_location[i]);
	}
	for (int i = 0; i <7; i++)
	{
		jumpdown1[i] = iLoadImage(jumpdown1_location[i]);
	}
	for (int i = 0; i < 19; i++)
	{
		attack1R[i] = iLoadImage(attack1R_location[i]);
		attack1L[i] = iLoadImage(attack1L_location[i]);
		if (i<16)
		{
			attackR[i] = iLoadImage(attackR_location[i]);
			attackL[i] = iLoadImage(attackL_location[i]);

		}
	}
	for (int i = 0; i < 3; i++)
	{
		herjumpup[i] = iLoadImage(herjumpup_location[i]);
		herjumpDown[i] = iLoadImage(herjumpDown_location[i]);
		herjumpupL[i] = iLoadImage(herjumpupL_location[i]);
		herjumDownL[i] = iLoadImage(herjumpDownL_location[i]);


	}
	for (int i = 0; i < 7; i++)
	{
		run1[i] = iLoadImage(run1_location[i]);
	}
	for (int i = 0; i < 12; i++)
	{
		load[i] = iLoadImage(load_location[i]);


	}
	for (int i = 0; i <5; i++)
	{
		stoneImage[i] = iLoadImage(stoneImage_location[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
			c[i].coincorX = coinX + 200;
		else{
			c[i].coincorX = c[i - 1].coincorX + coinX + 250;
		}
		c[i].coincorY = 300;
		c[i].coll = false;
	}
	herstand1[1] = iLoadImage(herstand1_location);
	herstand102[1] = iLoadImage(herstand102_location);
	herstand3[1] = iLoadImage(herstand3_location);
	herstand2[1] = iLoadImage(herstand2_location);


	gameover = iLoadImage("image\\gameover.png");
	missionover = iLoadImage("image\\missionover.png");
	settings = iLoadImage("image\\settings.png");
	settingsbtn = iLoadImage("image\\settingsbtn.png");

}

#endif // !LOADIMAGE_H_INCLUDED
