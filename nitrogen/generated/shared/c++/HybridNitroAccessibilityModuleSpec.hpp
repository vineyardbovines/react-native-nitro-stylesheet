///
/// HybridNitroAccessibilityModuleSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `AccessibilitySettings` to properly resolve imports.
namespace margelo::nitro::stylesheet { struct AccessibilitySettings; }

#include "AccessibilitySettings.hpp"
#include <optional>
#include <functional>

namespace margelo::nitro::stylesheet {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `NitroAccessibilityModule`
   * Inherit this class to create instances of `HybridNitroAccessibilityModuleSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridNitroAccessibilityModule: public HybridNitroAccessibilityModuleSpec {
   * public:
   *   HybridNitroAccessibilityModule(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridNitroAccessibilityModuleSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridNitroAccessibilityModuleSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridNitroAccessibilityModuleSpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual void removeListeners() = 0;
      virtual AccessibilitySettings getAllSettings() = 0;
      virtual std::optional<bool> getIsReduceMotionEnabled() = 0;
      virtual void addReduceMotionListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsReduceTransparencyEnabled() = 0;
      virtual void addReduceTransparencyListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsDifferentiateWithoutColorEnabled() = 0;
      virtual void addDifferentiateWithoutColorListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsInvertColorsEnabled() = 0;
      virtual void addInvertColorsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsShowButtonShapesEnabled() = 0;
      virtual void addShowButtonShapesListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsBoldTextEnabled() = 0;
      virtual void addBoldTextListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsVoiceOverEnabled() = 0;
      virtual void addVoiceOverListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsSwitchControlEnabled() = 0;
      virtual void addSwitchControlListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsVideoAutoplayEnabled() = 0;
      virtual void addVideoAutoplayListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsClosedCaptioningEnabled() = 0;
      virtual void addClosedCaptioningListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getPrefersCrossFadeTransitionsEnabled() = 0;
      virtual void addPrefersCrossFadeTransitionsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsGrayscaleEnabled() = 0;
      virtual void addGrayscaleListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsDarkerSystemColorsEnabled() = 0;
      virtual void addDarkerSystemColorsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsMonoAudioEnabled() = 0;
      virtual void addMonoAudioListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsShakeToUndoEnabled() = 0;
      virtual void addShakeToUndoListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsSpeakScreenEnabled() = 0;
      virtual void addSpeakScreenListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsSpeakSelectionEnabled() = 0;
      virtual void addSpeakSelectionListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;
      virtual std::optional<bool> getIsOnOffSwitchLabelsEnabled() = 0;
      virtual void addOnOffSwitchLabelsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "NitroAccessibilityModule";
  };

} // namespace margelo::nitro::stylesheet
