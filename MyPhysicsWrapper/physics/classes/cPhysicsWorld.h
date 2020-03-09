#pragma once
#include <physics/interfaces/iPhysicsWorld.h>
#include <physics/interfaces/iCollisionListener.h>
#include <phys/cWorld.h>
#include <vector>

namespace nPhysics
{
	class cPhysicsWorld : public iPhysicsWorld
	{
	public:
		~cPhysicsWorld();
		cPhysicsWorld();

		virtual void Update(float dt);
		virtual bool AddComponent(iPhysicsComponent* component);
		virtual bool RemoveComponent(iPhysicsComponent* component);

	private:
		std::vector<iPhysicsComponent*> componentVec;
		iCollisionListener* collisionListener;
		phys::cWorld* mWorld;
	};
}