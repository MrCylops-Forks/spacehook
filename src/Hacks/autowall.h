#pragma once

#include "../SDK/SDK.h"
#include "../interfaces.h"
#include "../settings.h"

namespace Autowall
{
	struct FireBulletData
	{
		Vector src;
		trace_t enter_trace;
		Vector direction;
		CTraceFilter filter;
		float trace_length;
		float trace_length_remaining;
		float current_damage;
		int penetrate_count;
	};

	float GetDamage(const Vector& vecPoint, int target, bool teamCheck, FireBulletData& fData);
	float GetDamageCustom(const Vector& vecPoint, const Vector& local, int target, bool teamCheck, FireBulletData& fData);
}
