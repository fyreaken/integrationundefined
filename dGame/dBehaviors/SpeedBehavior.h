#pragma once
#include "Behavior.h"

#include "NiPoint3.h"

class SpeedBehavior final : public Behavior
{
public:
	LOT m_lot;
	float m_Distance;
	NiPoint3 m_Offset{};

	/*
	 * Inherited
	 */
	explicit SpeedBehavior(const uint32_t behaviorId) : Behavior(behaviorId) {
	}

	void Handle(BehaviorContext* context, RakNet::BitStream& bitStream, BehaviorBranchContext branch) override;

	void Calculate(BehaviorContext* context, RakNet::BitStream& bitStream, BehaviorBranchContext branch) override;

	void UnCast(BehaviorContext* context, BehaviorBranchContext branch) override;

	void Timer(BehaviorContext* context, BehaviorBranchContext branch, LWOOBJID second) override;

	void End(BehaviorContext* context, BehaviorBranchContext branch, LWOOBJID second) override;

	void Load() override;

private:
	float m_RunSpeed;

	bool m_AffectsCaster;
};
