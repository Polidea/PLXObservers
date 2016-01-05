#
# Be sure to run `pod lib lint PLXObservers.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "PLXObservers"
  s.version          = "1.0.1"
  s.summary          = "Multi-observers for Objective-C"
  s.description      = <<-DESC
                       Small tool for fast implementation of multi-observer pattern in Objective-C
                       DESC
  s.homepage         = "https://github.com/Polidea/PLXObservers"
  s.license          = 'MIT'
  s.author           = { "Antoni Kedracki" => "antoni.kedracki@polidea.com" }
  s.source           = { :git => "https://github.com/Polidea/PLXObservers.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/polidea'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*'
end
