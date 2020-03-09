#include "cPhysicsWorld.h"

namespace nPhysics
{
	cPhysicsWorld::~cPhysicsWorld()
	{
	}
	cPhysicsWorld::cPhysicsWorld()
	{

	}
	void cPhysicsWorld::Update(float deltaTime)
	{
		//mWorld->Update(deltaTime);
	}
	bool cPhysicsWorld::AddComponent(iPhysicsComponent* component)
	{
		// make sure it doesn't already exist
		for (int i = 0; i < this->componentVec.size(); i++)
		{
			if (this->componentVec.at(i) == component)
			{
				return false;
			}
		}
		// does not already exist so push it back
		this->componentVec.push_back(component);
		return true;
	}
	bool cPhysicsWorld::RemoveComponent(iPhysicsComponent* component)
	{
		// find the component
		for (int i = 0; i < this->componentVec.size(); i++)
		{
			if (this->componentVec.at(i) == component)
			{
				this->componentVec.erase(componentVec.begin(), componentVec.begin()+i);
				return true;
			}
		}
		// it wasn't the to begin with
		return false;
	}
}