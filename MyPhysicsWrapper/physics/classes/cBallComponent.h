#pragma once
#include <physics/interfaces/iBallComponent.h>
#include "cPhysicsComponent.h"

namespace nPhysics
{
	class cBallComponent : public iBallComponent
	{
	public:
		cBallComponent();
		~cBallComponent();

		virtual void GetTransform(glm::mat4& transformOut);

	private:
		glm::mat4 transform;
	};
}