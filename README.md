# BaiduMTJ

百度全埋点统计 5.3.3 SDK XCFramework SwiftPackage

### 工程引用
在 `Link Binary With Libraries` 添加 `CoreTelephony.framework`、`libc++.tbd`、`libz.tbd`、`libicucore.tbd`
在 `Other Linker Flags` 添加 `-fobjc-arc`

### SwiftPackage 引用

```swift
.target(
    name: "Name",
    dependencies: ["BaiduMTJ"],
    linkerSettings: [.linkedLibrary("c++"), .linkedLibrary("z"), .linkedLibrary("icucore"), .linkedFramework("CoreTelephony")]),
```

