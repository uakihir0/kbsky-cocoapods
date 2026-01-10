Pod::Spec.new do |spec|
    spec.name                     = 'kbsky-debug'
    spec.version                  = '0.0.1'
    spec.homepage                 = 'https://github.com/uakihir0/kbsky'
    spec.source                   = { :http=> ''}
    spec.authors                  = 'Akihiro Urushihara'
    spec.license                  = 'MIT'
    spec.summary                  = 'kbsky is Bluesky/ATProtocol library for Kotlin Multiplatform.'
    spec.vendored_frameworks      = 'debug/kbsky.xcframework'
    spec.libraries                = 'c++'
end
