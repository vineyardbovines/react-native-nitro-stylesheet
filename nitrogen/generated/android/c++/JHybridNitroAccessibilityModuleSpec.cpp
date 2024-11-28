///
/// JHybridNitroAccessibilityModuleSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridNitroAccessibilityModuleSpec.hpp"

// Forward declaration of `AccessibilitySettings` to properly resolve imports.
namespace margelo::nitro::stylesheet { struct AccessibilitySettings; }

#include "AccessibilitySettings.hpp"
#include "JAccessibilitySettings.hpp"
#include <optional>
#include <functional>
#include "JFunc_void_std__optional_bool_.hpp"

namespace margelo::nitro::stylesheet {

  jni::local_ref<JHybridNitroAccessibilityModuleSpec::jhybriddata> JHybridNitroAccessibilityModuleSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridNitroAccessibilityModuleSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridNitroAccessibilityModuleSpec::initHybrid),
    });
  }

  size_t JHybridNitroAccessibilityModuleSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  void JHybridNitroAccessibilityModuleSpec::removeListeners() {
    static const auto method = _javaPart->getClass()->getMethod<void()>("removeListeners");
    method(_javaPart);
  }
  AccessibilitySettings JHybridNitroAccessibilityModuleSpec::getAllSettings() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JAccessibilitySettings>()>("getAllSettings");
    auto __result = method(_javaPart);
    return __result->toCpp();
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsReduceMotionEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsReduceMotionEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addReduceMotionListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addReduceMotionListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsReduceTransparencyEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsReduceTransparencyEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addReduceTransparencyListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addReduceTransparencyListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsDifferentiateWithoutColorEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsDifferentiateWithoutColorEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addDifferentiateWithoutColorListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addDifferentiateWithoutColorListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsInvertColorsEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsInvertColorsEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addInvertColorsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addInvertColorsListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsShowButtonShapesEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsShowButtonShapesEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addShowButtonShapesListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addShowButtonShapesListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsBoldTextEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsBoldTextEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addBoldTextListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addBoldTextListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsVoiceOverEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsVoiceOverEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addVoiceOverListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addVoiceOverListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsSwitchControlEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsSwitchControlEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addSwitchControlListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addSwitchControlListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsVideoAutoplayEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsVideoAutoplayEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addVideoAutoplayListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addVideoAutoplayListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsClosedCaptioningEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsClosedCaptioningEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addClosedCaptioningListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addClosedCaptioningListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getPrefersCrossFadeTransitionsEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getPrefersCrossFadeTransitionsEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addPrefersCrossFadeTransitionsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addPrefersCrossFadeTransitionsListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsGrayscaleEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsGrayscaleEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addGrayscaleListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addGrayscaleListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsDarkerSystemColorsEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsDarkerSystemColorsEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addDarkerSystemColorsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addDarkerSystemColorsListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsMonoAudioEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsMonoAudioEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addMonoAudioListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addMonoAudioListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsShakeToUndoEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsShakeToUndoEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addShakeToUndoListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addShakeToUndoListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsSpeakScreenEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsSpeakScreenEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addSpeakScreenListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addSpeakScreenListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsSpeakSelectionEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsSpeakSelectionEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addSpeakSelectionListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addSpeakSelectionListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }
  std::optional<bool> JHybridNitroAccessibilityModuleSpec::getIsOnOffSwitchLabelsEnabled() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<jni::JBoolean>()>("getIsOnOffSwitchLabelsEnabled");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional(static_cast<bool>(__result->value())) : std::nullopt;
  }
  void JHybridNitroAccessibilityModuleSpec::addOnOffSwitchLabelsListener(const std::function<void(std::optional<bool> /* isEnabled */)>& onChanged) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__optional_bool_::javaobject> /* onChanged */)>("addOnOffSwitchLabelsListener");
    method(_javaPart, JFunc_void_std__optional_bool_::fromCpp(onChanged));
  }

} // namespace margelo::nitro::stylesheet
