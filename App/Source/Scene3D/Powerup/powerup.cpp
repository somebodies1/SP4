#include "powerup.h"

powerup::powerup()
{
}

powerup::powerup(POWERUPTYPE power1, float timer2)
{
	timer = timer2;
	powertype = power1;
}

powerup::~powerup()
{
}



powerup::POWERUPTYPE powerup::getpowertype()
{
	return powertype;
}

void powerup::setpowertype(POWERUPTYPE power)
{
	this->powertype = power;
}

void powerup::settimer(float timer1)
{
	this->timer = timer1;
}

float powerup::gettimer()
{
	return timer;
}

void powerup::powerupACTION(double dt)
{
	timer -= dt;
}
