///
/// JHapticTypes.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "HapticTypes.hpp"

namespace margelo::nitro::stylesheet {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "HapticTypes" and the the Kotlin enum "HapticTypes".
   */
  struct JHapticTypes final: public jni::JavaClass<JHapticTypes> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/stylesheet/HapticTypes;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum HapticTypes.
     */
    [[maybe_unused]]
    HapticTypes toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("_ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<HapticTypes>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JHapticTypes> fromCpp(HapticTypes value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldLIGHT = clazz->getStaticField<JHapticTypes>("LIGHT");
      static const auto fieldSELECT = clazz->getStaticField<JHapticTypes>("SELECT");
      static const auto fieldSUCCESS = clazz->getStaticField<JHapticTypes>("SUCCESS");
      static const auto fieldWARNING = clazz->getStaticField<JHapticTypes>("WARNING");
      static const auto fieldERROR = clazz->getStaticField<JHapticTypes>("ERROR");
      static const auto fieldMEDIUM = clazz->getStaticField<JHapticTypes>("MEDIUM");
      static const auto fieldHEAVY = clazz->getStaticField<JHapticTypes>("HEAVY");
      static const auto fieldSOFT = clazz->getStaticField<JHapticTypes>("SOFT");
      static const auto fieldRIGID = clazz->getStaticField<JHapticTypes>("RIGID");
      
      switch (value) {
        case HapticTypes::LIGHT:
          return clazz->getStaticFieldValue(fieldLIGHT);
        case HapticTypes::SELECT:
          return clazz->getStaticFieldValue(fieldSELECT);
        case HapticTypes::SUCCESS:
          return clazz->getStaticFieldValue(fieldSUCCESS);
        case HapticTypes::WARNING:
          return clazz->getStaticFieldValue(fieldWARNING);
        case HapticTypes::ERROR:
          return clazz->getStaticFieldValue(fieldERROR);
        case HapticTypes::MEDIUM:
          return clazz->getStaticFieldValue(fieldMEDIUM);
        case HapticTypes::HEAVY:
          return clazz->getStaticFieldValue(fieldHEAVY);
        case HapticTypes::SOFT:
          return clazz->getStaticFieldValue(fieldSOFT);
        case HapticTypes::RIGID:
          return clazz->getStaticFieldValue(fieldRIGID);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::stylesheet
