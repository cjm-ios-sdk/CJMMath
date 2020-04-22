#
# Be sure to run `pod lib lint CJMMath.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CJMMath'
  s.version          = '0.1.0'
  s.summary          = '数学相关的计算和转化'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
数学相关的计算和转化。比如transform和缩放，偏移，旋转的转化；线与线的交点，线的角度等等。
                       DESC

  s.homepage         = 'https://github.com/cjm-ios-sdk/CJMMath'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'chenjm' => 'cjiemin@163.com' }
  s.source           = { :git => 'https://github.com/cjm-ios-sdk/CJMMath.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'CJMMath/Classes/**/*'

  s.frameworks = 'Foundation'
end
