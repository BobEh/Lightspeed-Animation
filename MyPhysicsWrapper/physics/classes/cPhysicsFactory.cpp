#include "cPhysicsFactory.h"

namespace nPhysics
{
	cPhysicsFactory::cPhysicsFactory()
	{

	}
	cPhysicsFactory::~cPhysicsFactory()
	{
	}
	iPhysicsWorld* cPhysicsFactory::CreateWorld()
	{
		cPhysicsWorld* newWorld = new cPhysicsWorld();

		return newWorld;
	}
	iBallComponent* cPhysicsFactory::CreateBall(const sBallDef& def)
	{
		iBallComponent* newBall = new nPhysics::cBallComponent();

		return newBall;
	}
	iPlaneComponent* cPhysicsFactory::CreatePlane(const sPlaneDef& def)
	{
		return nullptr;
	}
}