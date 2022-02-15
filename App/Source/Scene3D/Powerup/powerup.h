#pragma once
#include<vector>
#include<iostream>
#include <string>

//Created by Zhong Heng
class powerup
{
public:
	enum POWERUPTYPE
	{
		SPEED = 0,
		INVINCIBLE,
		FIRERATE,
		TIMESTOP,
		NUM_POWERUPTYPE
	};
	powerup();
	powerup(POWERUPTYPE power1, float timer2);
	~powerup();

	void setpowertype(POWERUPTYPE power);
	POWERUPTYPE getpowertype();

	void settimer(float timer1);
	float gettimer();
	void powerupACTION(double dt);
protected:
	float timer;
	POWERUPTYPE powertype;

};