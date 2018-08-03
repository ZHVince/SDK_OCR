Pod::Spec.new do |s|
s.name         = "SDK_OCR"
s.version      = "0.0.1"
s.summary      = "SDK_OCR是一个快速开发密码控件工具包"
s.description  = "SDK_OCR是一个开发工具包,包含了一些控件封装，工具类等，可加快开发速度。"
s.homepage     = "https://github.com/ZHVince/SDK_OCR"
s.license      = "MIT"
s.author             = { "zhangheng" => "940088091@qq.com" }
s.platform     = :ios
s.source       = { :git => "https://github.com/ZHVince/SDK_OCR.git", :tag => "#{s.version}" }
s.source_files  = "**", "**/*.{h,m}"
s.exclude_files = ""
end
