#include "hooks.h"

namespace Hooks {
	bool HasEffect::HasMagicEffect(RE::MagicTarget* a_this, RE::EffectSetting* a_effect)
	{
		auto original = a_this->HasMagicEffect(a_effect);
		if (!a_this || !a_effect)
			return false;
		
		if (!a_effect->HasKeywordString("CheckForActive"))
			return original;

		auto active_effects = a_this->GetActiveEffectList();
		if (active_effects && !active_effects->empty()) {
			for (RE::ActiveEffect* effect : *active_effects)
			{
				if (effect; !effect->flags.any(RE::ActiveEffect::Flag::kInactive))
				{
					if (effect->GetBaseObject() == a_effect) {
						return true;
					}
				}
			}
		}        
		return false;
	}
}