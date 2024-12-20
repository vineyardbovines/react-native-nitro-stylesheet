///
/// HybridNitroAccessibilityModuleSpec.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.stylesheet

import android.util.Log
import androidx.annotation.Keep
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * A Kotlin class representing the NitroAccessibilityModule HybridObject.
 * Implement this abstract class to create Kotlin-based instances of NitroAccessibilityModule.
 */
@DoNotStrip
@Keep
@Suppress("RedundantSuppression", "KotlinJniMissingFunction", "PropertyName", "RedundantUnitReturnType", "unused")
abstract class HybridNitroAccessibilityModuleSpec: HybridObject() {
  @DoNotStrip
  private var mHybridData: HybridData = initHybrid()

  init {
    // Pass this `HybridData` through to it's base class,
    // to represent inheritance to JHybridObject on C++ side
    super.updateNative(mHybridData)
  }

  /**
   * Call from a child class to initialize HybridData with a child.
   */
  override fun updateNative(hybridData: HybridData) {
    mHybridData = hybridData
  }

  // Properties
  

  // Methods
  @DoNotStrip
  @Keep
  abstract fun removeListeners(): Unit
  
  @DoNotStrip
  @Keep
  abstract fun getAllSettings(): AccessibilitySettings
  
  @DoNotStrip
  @Keep
  abstract fun getIsReduceMotionEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addReduceMotionListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addReduceMotionListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addReduceMotionListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsReduceTransparencyEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addReduceTransparencyListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addReduceTransparencyListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addReduceTransparencyListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsDifferentiateWithoutColorEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addDifferentiateWithoutColorListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addDifferentiateWithoutColorListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addDifferentiateWithoutColorListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsInvertColorsEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addInvertColorsListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addInvertColorsListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addInvertColorsListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsShowButtonShapesEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addShowButtonShapesListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addShowButtonShapesListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addShowButtonShapesListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsBoldTextEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addBoldTextListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addBoldTextListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addBoldTextListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsVoiceOverEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addVoiceOverListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addVoiceOverListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addVoiceOverListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsSwitchControlEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addSwitchControlListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addSwitchControlListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addSwitchControlListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsVideoAutoplayEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addVideoAutoplayListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addVideoAutoplayListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addVideoAutoplayListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsClosedCaptioningEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addClosedCaptioningListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addClosedCaptioningListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addClosedCaptioningListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getPrefersCrossFadeTransitionsEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addPrefersCrossFadeTransitionsListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addPrefersCrossFadeTransitionsListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addPrefersCrossFadeTransitionsListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsGrayscaleEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addGrayscaleListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addGrayscaleListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addGrayscaleListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsDarkerSystemColorsEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addDarkerSystemColorsListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addDarkerSystemColorsListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addDarkerSystemColorsListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsMonoAudioEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addMonoAudioListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addMonoAudioListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addMonoAudioListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsShakeToUndoEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addShakeToUndoListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addShakeToUndoListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addShakeToUndoListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsSpeakScreenEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addSpeakScreenListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addSpeakScreenListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addSpeakScreenListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsSpeakSelectionEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addSpeakSelectionListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addSpeakSelectionListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addSpeakSelectionListener(onChanged.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun getIsOnOffSwitchLabelsEnabled(): Boolean?
  
  @DoNotStrip
  @Keep
  abstract fun addOnOffSwitchLabelsListener(onChanged: (isEnabled: Boolean?) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun addOnOffSwitchLabelsListener(onChanged: Func_void_std__optional_bool_): Unit {
    val __result = addOnOffSwitchLabelsListener(onChanged.toLambda())
    return __result
  }

  private external fun initHybrid(): HybridData

  companion object {
    private const val TAG = "HybridNitroAccessibilityModuleSpec"
    init {
      try {
        Log.i(TAG, "Loading NitroStyleSheet C++ library...")
        System.loadLibrary("NitroStyleSheet")
        Log.i(TAG, "Successfully loaded NitroStyleSheet C++ library!")
      } catch (e: Error) {
        Log.e(TAG, "Failed to load NitroStyleSheet C++ library! Is it properly installed and linked? " +
                    "Is the name correct? (see `CMakeLists.txt`, at `add_library(...)`)", e)
        throw e
      }
    }
  }
}
