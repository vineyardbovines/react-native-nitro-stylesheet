///
/// ScreenDimensions.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `ScreenDimensions`, backed by a C++ struct.
 */
public typealias ScreenDimensions = margelo.nitro.stylesheet.ScreenDimensions

public extension ScreenDimensions {
  private typealias bridge = margelo.nitro.stylesheet.bridge.swift

  /**
   * Create a new instance of `ScreenDimensions`.
   */
  init(width: Double, height: Double) {
    self.init(width, height)
  }

  var width: Double {
    @inline(__always)
    get {
      return self.__width
    }
    @inline(__always)
    set {
      self.__width = newValue
    }
  }
  
  var height: Double {
    @inline(__always)
    get {
      return self.__height
    }
    @inline(__always)
    set {
      self.__height = newValue
    }
  }
}
