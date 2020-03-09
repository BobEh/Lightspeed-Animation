#include "cRigidBody.h"  // My header
#include <glm/gtc/matrix_transform.hpp>

namespace phys
{
	cRigidBody::cRigidBody(const sRigidBodyDef& def, iShape* shape) : mShape(shape), mPosition(def.Position), mVelocity(def.Velocity), mMass(def.Mass)
	{
		if (mMass == 0.0f)
		{
			mInvMass = 0.0f;
		}
		else
		{
			mInvMass = 1.f / mMass;
		}
	}

	void cRigidBody::GetTransform(glm::mat4& transformOut)
	{
		transformOut = glm::mat4(1.0f);
		// rotations
		// translate is in gtx
		transformOut = glm::translate(transformOut, mPosition);
	}

	void cRigidBody::ApplyForce(const glm::vec3& force)
	{
		// TODO: Apply the force to this rigid body's acceleration
		//       Remember... F=ma  ...so an applied acceleration will be f/m
		mAcceleration += force * mInvMass;
	}
}
