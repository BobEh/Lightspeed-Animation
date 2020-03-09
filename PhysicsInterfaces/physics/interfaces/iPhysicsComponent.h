#pragma once
//#include <game_math.h>
//#include <mat4x4.hpp>
#include "eComponentType.h"
#include <glm\ext\matrix_float4x4.hpp>
//#include <matrix.hpp>

namespace nPhysics
{
	class iPhysicsComponent
	{
	public:
		virtual ~iPhysicsComponent() {}
		inline const eComponentType& GetComponentType() { return mComponentType; }

		virtual void GetTransform(glm::mat4& transformOut) = 0;

	protected:
		iPhysicsComponent(eComponentType componentType)
			: mComponentType(componentType) {}
	private:
		eComponentType mComponentType;

		// get rid of these!
		iPhysicsComponent() = delete;
		iPhysicsComponent(const iPhysicsComponent& other) = delete;
		iPhysicsComponent& operator=(const iPhysicsComponent& other) = delete;
	};
}