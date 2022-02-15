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

void powerup::Speed(CEntity3D* owner, double dt)
{
	powerupACTION(dt);
	if (timeLeft <= 0.f)
	{
		owner->SetMovementSpeed(owner->GetMovementSpeed() * 2.0f);
	}
	else
	{
		owner->SetMovementSpeed(owner->GetMovementSpeed() * 0.5f);
	}
	return;
}

void powerup::Update(CEntity3D* owner, double dt)
{
	switch (powertype)
	{
	case SPEED:
		Speed(owner, dt);

		break;
	}
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
