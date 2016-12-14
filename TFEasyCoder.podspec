Pod::Spec.new do |s|
  s.name         = "TFEasyCoder"
  s.version      = "1.0.0"
  s.summary      = "A framework for iOS help you fast develop you app"
  s.description      = <<-DESC
                       TFEasyCoder, a collection of useful Objective-C Categories extending iOS Frameworks such as Foundation,UIKit,CoreData,QuartzCore,CoreLocation,MapKit Etc.
                       DESC
  s.homepage     = "https://github.com/shmxybfq/TFEasyCoder"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "shmxybfq" => "shmxybfq@163.com" }
  s.platform     = :ios, "7.0"
  s.ios.deployment_target = "7.0"
  s.requires_arc = true
  s.frameworks = 'Foundation', 'UIKit', 'objc'
  s.libraries    = "z"
  s.source       = { :git => 'https://github.com/shmxybfq/TFEasyCoder.git', :tag => s.version.to_s }
  s.source_files = "TFEasyCoder", "TFEasyCoder/*.{h,m}","TFEasyCoder/**/*.{h,m}","TFEasyCoder/**/**/*.{h,m}"
end