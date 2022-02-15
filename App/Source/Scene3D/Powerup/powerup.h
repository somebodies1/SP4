#pragma once
#include "Primitives\Entity3D.h"
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

	void Update(CEntity3D* owner, double dt);
	void setpowertype(POWERUPTYPE power);
	POWERUPTYPE getpowertype();

	void Speed(CEntity3D* owner, double dt);

	void settimer(float timer1);
	float gettimer();
	void powerupACTION(double dt);
protected:
	float timer;
	float timeLeft;
	POWERUPTYPE powertype;
};