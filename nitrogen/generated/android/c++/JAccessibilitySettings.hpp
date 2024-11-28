///
/// JAccessibilitySettings.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "AccessibilitySettings.hpp"

#include <optional>

namespace margelo::nitro::stylesheet {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "AccessibilitySettings" and the the Kotlin data class "AccessibilitySettings".
   */
  struct JAccessibilitySettings final: public jni::JavaClass<JAccessibilitySettings> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/stylesheet/AccessibilitySettings;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct AccessibilitySettings by copying all values to C++.
     */
    [[maybe_unused]]
    AccessibilitySettings toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldIsReduceMotionEnabledEnabled = clazz->getField<jni::JBoolean>("isReduceMotionEnabledEnabled");
      jni::local_ref<jni::JBoolean> isReduceMotionEnabledEnabled = this->getFieldValue(fieldIsReduceMotionEnabledEnabled);
      static const auto fieldIsReduceTransparencyEnabledEnabled = clazz->getField<jni::JBoolean>("isReduceTransparencyEnabledEnabled");
      jni::local_ref<jni::JBoolean> isReduceTransparencyEnabledEnabled = this->getFieldValue(fieldIsReduceTransparencyEnabledEnabled);
      static const auto fieldIsDifferentiateWithoutColorEnabled = clazz->getField<jni::JBoolean>("isDifferentiateWithoutColorEnabled");
      jni::local_ref<jni::JBoolean> isDifferentiateWithoutColorEnabled = this->getFieldValue(fieldIsDifferentiateWithoutColorEnabled);
      static const auto fieldIsInvertColorsEnabled = clazz->getField<jni::JBoolean>("isInvertColorsEnabled");
      jni::local_ref<jni::JBoolean> isInvertColorsEnabled = this->getFieldValue(fieldIsInvertColorsEnabled);
      static const auto fieldIsShowButtonShapesEnabled = clazz->getField<jni::JBoolean>("isShowButtonShapesEnabled");
      jni::local_ref<jni::JBoolean> isShowButtonShapesEnabled = this->getFieldValue(fieldIsShowButtonShapesEnabled);
      static const auto fieldIsBoldTextEnabled = clazz->getField<jni::JBoolean>("isBoldTextEnabled");
      jni::local_ref<jni::JBoolean> isBoldTextEnabled = this->getFieldValue(fieldIsBoldTextEnabled);
      static const auto fieldIsVoiceOverEnabled = clazz->getField<jni::JBoolean>("isVoiceOverEnabled");
      jni::local_ref<jni::JBoolean> isVoiceOverEnabled = this->getFieldValue(fieldIsVoiceOverEnabled);
      static const auto fieldIsSwitchControlEnabled = clazz->getField<jni::JBoolean>("isSwitchControlEnabled");
      jni::local_ref<jni::JBoolean> isSwitchControlEnabled = this->getFieldValue(fieldIsSwitchControlEnabled);
      static const auto fieldIsVideoAutoplayEnabled = clazz->getField<jni::JBoolean>("isVideoAutoplayEnabled");
      jni::local_ref<jni::JBoolean> isVideoAutoplayEnabled = this->getFieldValue(fieldIsVideoAutoplayEnabled);
      static const auto fieldIsClosedCaptioningEnabled = clazz->getField<jni::JBoolean>("isClosedCaptioningEnabled");
      jni::local_ref<jni::JBoolean> isClosedCaptioningEnabled = this->getFieldValue(fieldIsClosedCaptioningEnabled);
      static const auto fieldIsPrefersCrossFadeTransitionsEnabled = clazz->getField<jni::JBoolean>("isPrefersCrossFadeTransitionsEnabled");
      jni::local_ref<jni::JBoolean> isPrefersCrossFadeTransitionsEnabled = this->getFieldValue(fieldIsPrefersCrossFadeTransitionsEnabled);
      static const auto fieldIsGrayscaleEnabled = clazz->getField<jni::JBoolean>("isGrayscaleEnabled");
      jni::local_ref<jni::JBoolean> isGrayscaleEnabled = this->getFieldValue(fieldIsGrayscaleEnabled);
      static const auto fieldIsDarkerSystemColorsEnabled = clazz->getField<jni::JBoolean>("isDarkerSystemColorsEnabled");
      jni::local_ref<jni::JBoolean> isDarkerSystemColorsEnabled = this->getFieldValue(fieldIsDarkerSystemColorsEnabled);
      static const auto fieldIsMonoAudioEnabled = clazz->getField<jni::JBoolean>("isMonoAudioEnabled");
      jni::local_ref<jni::JBoolean> isMonoAudioEnabled = this->getFieldValue(fieldIsMonoAudioEnabled);
      static const auto fieldIsShakeToUndoEnabled = clazz->getField<jni::JBoolean>("isShakeToUndoEnabled");
      jni::local_ref<jni::JBoolean> isShakeToUndoEnabled = this->getFieldValue(fieldIsShakeToUndoEnabled);
      static const auto fieldIsSpeakScreenEnabled = clazz->getField<jni::JBoolean>("isSpeakScreenEnabled");
      jni::local_ref<jni::JBoolean> isSpeakScreenEnabled = this->getFieldValue(fieldIsSpeakScreenEnabled);
      static const auto fieldIsSpeakSelectionEnabled = clazz->getField<jni::JBoolean>("isSpeakSelectionEnabled");
      jni::local_ref<jni::JBoolean> isSpeakSelectionEnabled = this->getFieldValue(fieldIsSpeakSelectionEnabled);
      static const auto fieldIsOnOffSwitchLabelsEnabled = clazz->getField<jni::JBoolean>("isOnOffSwitchLabelsEnabled");
      jni::local_ref<jni::JBoolean> isOnOffSwitchLabelsEnabled = this->getFieldValue(fieldIsOnOffSwitchLabelsEnabled);
      return AccessibilitySettings(
        isReduceMotionEnabledEnabled != nullptr ? std::make_optional(static_cast<bool>(isReduceMotionEnabledEnabled->value())) : std::nullopt,
        isReduceTransparencyEnabledEnabled != nullptr ? std::make_optional(static_cast<bool>(isReduceTransparencyEnabledEnabled->value())) : std::nullopt,
        isDifferentiateWithoutColorEnabled != nullptr ? std::make_optional(static_cast<bool>(isDifferentiateWithoutColorEnabled->value())) : std::nullopt,
        isInvertColorsEnabled != nullptr ? std::make_optional(static_cast<bool>(isInvertColorsEnabled->value())) : std::nullopt,
        isShowButtonShapesEnabled != nullptr ? std::make_optional(static_cast<bool>(isShowButtonShapesEnabled->value())) : std::nullopt,
        isBoldTextEnabled != nullptr ? std::make_optional(static_cast<bool>(isBoldTextEnabled->value())) : std::nullopt,
        isVoiceOverEnabled != nullptr ? std::make_optional(static_cast<bool>(isVoiceOverEnabled->value())) : std::nullopt,
        isSwitchControlEnabled != nullptr ? std::make_optional(static_cast<bool>(isSwitchControlEnabled->value())) : std::nullopt,
        isVideoAutoplayEnabled != nullptr ? std::make_optional(static_cast<bool>(isVideoAutoplayEnabled->value())) : std::nullopt,
        isClosedCaptioningEnabled != nullptr ? std::make_optional(static_cast<bool>(isClosedCaptioningEnabled->value())) : std::nullopt,
        isPrefersCrossFadeTransitionsEnabled != nullptr ? std::make_optional(static_cast<bool>(isPrefersCrossFadeTransitionsEnabled->value())) : std::nullopt,
        isGrayscaleEnabled != nullptr ? std::make_optional(static_cast<bool>(isGrayscaleEnabled->value())) : std::nullopt,
        isDarkerSystemColorsEnabled != nullptr ? std::make_optional(static_cast<bool>(isDarkerSystemColorsEnabled->value())) : std::nullopt,
        isMonoAudioEnabled != nullptr ? std::make_optional(static_cast<bool>(isMonoAudioEnabled->value())) : std::nullopt,
        isShakeToUndoEnabled != nullptr ? std::make_optional(static_cast<bool>(isShakeToUndoEnabled->value())) : std::nullopt,
        isSpeakScreenEnabled != nullptr ? std::make_optional(static_cast<bool>(isSpeakScreenEnabled->value())) : std::nullopt,
        isSpeakSelectionEnabled != nullptr ? std::make_optional(static_cast<bool>(isSpeakSelectionEnabled->value())) : std::nullopt,
        isOnOffSwitchLabelsEnabled != nullptr ? std::make_optional(static_cast<bool>(isOnOffSwitchLabelsEnabled->value())) : std::nullopt
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JAccessibilitySettings::javaobject> fromCpp(const AccessibilitySettings& value) {
      return newInstance(
        value.isReduceMotionEnabledEnabled.has_value() ? jni::JBoolean::valueOf(value.isReduceMotionEnabledEnabled.value()) : nullptr,
        value.isReduceTransparencyEnabledEnabled.has_value() ? jni::JBoolean::valueOf(value.isReduceTransparencyEnabledEnabled.value()) : nullptr,
        value.isDifferentiateWithoutColorEnabled.has_value() ? jni::JBoolean::valueOf(value.isDifferentiateWithoutColorEnabled.value()) : nullptr,
        value.isInvertColorsEnabled.has_value() ? jni::JBoolean::valueOf(value.isInvertColorsEnabled.value()) : nullptr,
        value.isShowButtonShapesEnabled.has_value() ? jni::JBoolean::valueOf(value.isShowButtonShapesEnabled.value()) : nullptr,
        value.isBoldTextEnabled.has_value() ? jni::JBoolean::valueOf(value.isBoldTextEnabled.value()) : nullptr,
        value.isVoiceOverEnabled.has_value() ? jni::JBoolean::valueOf(value.isVoiceOverEnabled.value()) : nullptr,
        value.isSwitchControlEnabled.has_value() ? jni::JBoolean::valueOf(value.isSwitchControlEnabled.value()) : nullptr,
        value.isVideoAutoplayEnabled.has_value() ? jni::JBoolean::valueOf(value.isVideoAutoplayEnabled.value()) : nullptr,
        value.isClosedCaptioningEnabled.has_value() ? jni::JBoolean::valueOf(value.isClosedCaptioningEnabled.value()) : nullptr,
        value.isPrefersCrossFadeTransitionsEnabled.has_value() ? jni::JBoolean::valueOf(value.isPrefersCrossFadeTransitionsEnabled.value()) : nullptr,
        value.isGrayscaleEnabled.has_value() ? jni::JBoolean::valueOf(value.isGrayscaleEnabled.value()) : nullptr,
        value.isDarkerSystemColorsEnabled.has_value() ? jni::JBoolean::valueOf(value.isDarkerSystemColorsEnabled.value()) : nullptr,
        value.isMonoAudioEnabled.has_value() ? jni::JBoolean::valueOf(value.isMonoAudioEnabled.value()) : nullptr,
        value.isShakeToUndoEnabled.has_value() ? jni::JBoolean::valueOf(value.isShakeToUndoEnabled.value()) : nullptr,
        value.isSpeakScreenEnabled.has_value() ? jni::JBoolean::valueOf(value.isSpeakScreenEnabled.value()) : nullptr,
        value.isSpeakSelectionEnabled.has_value() ? jni::JBoolean::valueOf(value.isSpeakSelectionEnabled.value()) : nullptr,
        value.isOnOffSwitchLabelsEnabled.has_value() ? jni::JBoolean::valueOf(value.isOnOffSwitchLabelsEnabled.value()) : nullptr
      );
    }
  };

} // namespace margelo::nitro::stylesheet
