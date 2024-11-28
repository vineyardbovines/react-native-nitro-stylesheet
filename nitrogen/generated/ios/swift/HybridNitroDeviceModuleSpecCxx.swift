///
/// HybridNitroDeviceModuleSpecCxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * Helper class for converting instances of `HybridNitroDeviceModuleSpecCxx` from- and to unsafe pointers.
 * This is useful to pass Swift classes to C++, without having to strongly type the C++ function signature.
 * The actual Swift type can be included in the .cpp file, without having to forward-declare anything in .hpp.
 */
public final class HybridNitroDeviceModuleSpecCxxUnsafe {
  /**
   * Casts a `HybridNitroDeviceModuleSpecCxx` instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public static func toUnsafe(_ instance: HybridNitroDeviceModuleSpecCxx) -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(instance).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `HybridNitroDeviceModuleSpecCxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridNitroDeviceModuleSpecCxx>`.
   * This removes one strong reference from the object!
   */
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridNitroDeviceModuleSpecCxx {
    return Unmanaged<HybridNitroDeviceModuleSpecCxx>.fromOpaque(pointer).takeRetainedValue()
  }
}

/**
 * A class implementation that bridges HybridNitroDeviceModuleSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridNitroDeviceModuleSpecCxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::stylesheet::bridge::swift`)
   * from `NitroStyleSheet-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.stylesheet.bridge.swift

  /**
   * Holds an instance of the `HybridNitroDeviceModuleSpec` Swift protocol.
   */
  private var __implementation: any HybridNitroDeviceModuleSpec

  /**
   * Create a new `HybridNitroDeviceModuleSpecCxx` that wraps the given `HybridNitroDeviceModuleSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: some HybridNitroDeviceModuleSpec) {
    self.__implementation = implementation
    /* no base class */
  }

  /**
   * Get the actual `HybridNitroDeviceModuleSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridNitroDeviceModuleSpec() -> any HybridNitroDeviceModuleSpec {
    return __implementation
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public var hybridContext: margelo.nitro.HybridContext {
    @inline(__always)
    get {
      return self.__implementation.hybridContext
    }
    @inline(__always)
    set {
      self.__implementation.hybridContext = newValue
    }
  }

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  @inline(__always)
  public var memorySize: Int {
    return self.__implementation.memorySize
  }

  // Properties
  

  // Methods
  @inline(__always)
  public func getDeviceTraits() -> DeviceTraits {
    do {
      let __result = try self.__implementation.getDeviceTraits()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func runHaptic(type: Int32) -> Void {
    do {
      try self.__implementation.runHaptic(type: margelo.nitro.stylesheet.HapticTypes(rawValue: type)!)
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getColorScheme() -> Int32 {
    do {
      let __result = try self.__implementation.getColorScheme()
      return __result.rawValue
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getScreenDimensions() -> ScreenDimensions {
    do {
      let __result = try self.__implementation.getScreenDimensions()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getContentSizeCategory() -> std.string {
    do {
      let __result = try self.__implementation.getContentSizeCategory()
      return std.string(__result)
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getScreenInsets() -> ScreenInsets {
    do {
      let __result = try self.__implementation.getScreenInsets()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getDisplayScale() -> Double {
    do {
      let __result = try self.__implementation.getDisplayScale()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getFontScale() -> Double {
    do {
      let __result = try self.__implementation.getFontScale()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getIsRTL() -> Bool {
    do {
      let __result = try self.__implementation.getIsRTL()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getScreenOrientation() -> Int32 {
    do {
      let __result = try self.__implementation.getScreenOrientation()
      return __result.rawValue
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getPixelRatio() -> Double {
    do {
      let __result = try self.__implementation.getPixelRatio()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
}
