require "json"

package = JSON.parse(File.read(File.join(__dir__, "package.json")))

Pod::Spec.new do |s|
  s.name         = "NitroStyleSheet"
  s.version      = package["version"]
  s.summary      = package["description"]
  s.homepage     = package["homepage"]
  s.license      = package["license"]
  s.authors      = package["author"]

  s.platforms    = { :ios => min_ios_version_supported }
  s.source       = { :git => "https://github.com/vineyardbovines/react-native-nitro-stylesheet.git", :tag => "#{s.version}" }

  s.source_files = [
    # implementation (swift)
    "ios/**/*.{swift}",
    # autolinking
    "ios/**/*.{m,mm}",
    # implementation (c++)
    "cpp/**/*.{hpp,cpp}",
  ]

  load 'nitrogen/generated/ios/NitroStyleSheet+autolinking.rb'
  add_nitrogen_files(s)

  install_modules_dependencies(s)
end
