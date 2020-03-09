#include "cBallComponent.h"

nPhysics::cBallComponent::~cBallComponent()
{
}

void nPhysics::cBallComponent::GetTransform(glm::mat4& transformOut)
{
	transformOut = transform;
}

nPhysics::cBallComponent::cBallComponent()
{
	
}
