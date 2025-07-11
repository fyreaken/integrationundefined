#include "SpecialSpeedBuffSpawner.h"

#include "GameMessages.h"
#include "MissionComponent.h"
#include "SkillComponent.h"
#include "EntityManager.h"
#include "eReplicaComponentType.h"

void SpecialSpeedBuffSpawner::OnStartup(Entity* self) {
	self->SetProximityRadius(1.5f, "powerupEnter");
	self->SetVar(u"bIsDead", false);
}

void SpecialSpeedBuffSpawner::OnProximityUpdate(Entity* self, Entity* entering, const std::string name, const std::string status) {
	if (name != "powerupEnter" && status != "ENTER") return;
	if (!entering->IsPlayer()) return;
	if (self->GetVar<bool>(u"bIsDead")) return;

	auto* missionComponent = entering->GetComponent<MissionComponent>();
	if (!missionComponent) return;

	auto* mission = missionComponent->GetMission(20208);
	if (!mission || !mission->IsComplete()) return;
	
	GameMessages::SendPlayFXEffect(self, -1, u"pickup", "", LWOOBJID_EMPTY, 1, 1, true);

	auto skillComponent = entering->GetComponent<SkillComponent>();
	if (!skillComponent) return;
	skillComponent->CastSkill(this->m_SkillId, entering->GetObjectID());

	self->SetVar(u"bIsDead", true);
	self->Smash(entering->GetObjectID(), eKillType::SILENT);
}
