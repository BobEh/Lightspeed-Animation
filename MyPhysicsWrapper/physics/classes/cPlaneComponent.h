#pragma once
#include <physics/interfaces/iPlaneComponent2.h>

namespace nPhysics
{
	//struct sPlaneDef
	//{
	//	float Constant;
	//	glm::vec3 Normal;
	//};
	class cPlaneComponent : public iPhysicsComponent
	{
	public:
		~cPlaneComponent();
		cPlaneComponent();
	};
}