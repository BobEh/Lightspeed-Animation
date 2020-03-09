#include "cIntegrator.h"  // My header

namespace phys
{
	cIntegrator::cIntegrator()
	{
		
	}

	// FOURTH-ORDER RUNGE-KUTTA
	void cIntegrator::RK4(glm::vec3& pos, glm::vec3& vel, glm::vec3& acc, float dt)
	{
		// TODO: math!
		// For an excellent article on RK4 implementation:
		// https://gafferongames.com/post/integration_basics/
	}

	void cIntegrator::RK4(glm::vec3& pos, glm::vec3& vel, glm::vec3& acc, const glm::vec3& appliedAcc, float dt)
	{
		// TODO: math!
		// For an excellent article on RK4 implementation:
		// https://gafferongames.com/post/integration_basics/
	}
}