Pod::Spec.new do |s|
  s.name         = "TFEasyCoder"
  s.version      = "1.2.5"
  s.ios.deployment_target = '7.0'
  s.summary      = "A fast development framework for oc"
  s.homepage     = "https://github.com/shmxybfq/TFEasyCoder"
  s.license      = "MIT"
  s.author             = { "ZTF" => "927141965@qq.com" }
  s.social_media_url   = "http://www.jianshu.com/u/8c1cc9143ec6"
  s.source       = { :git => "https://github.com/shmxybfq/TFEasyCoder.git", :tag => s.version }
  s.source_files  = "TFEasyCoder/**/*.{h,m}"
  s.requires_arc = true
end
