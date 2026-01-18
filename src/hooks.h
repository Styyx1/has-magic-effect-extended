#pragma once

namespace Hooks {
	struct HasEffect {
	private:
		static bool HasMagicEffect(RE::MagicTarget* a_this, RE::EffectSetting* a_effect);
		static inline REL::Hook _hasEffectCond{ REL::ID(21545), 0x3e, HasMagicEffect };
		static inline REL::Hook _hasEffectPap{ REL::ID(54649), 0x17, HasMagicEffect };

	};
}
