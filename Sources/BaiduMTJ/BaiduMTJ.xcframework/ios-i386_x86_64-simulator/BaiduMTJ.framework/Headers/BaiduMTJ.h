//
//  BaiduMTJ.h
//  BaiduMTJ
//
//  Created by 韦烽传 on 2021/4/13.
//

#import <Foundation/Foundation.h>

//! Project version number for BaiduMTJ.
FOUNDATION_EXPORT double BaiduMTJVersionNumber;

//! Project version string for BaiduMTJ.
FOUNDATION_EXPORT const unsigned char BaiduMTJVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <BaiduMTJ/PublicHeader.h>

/**
 在 `Link Binary With Libraries` 添加 `CoreTelephony.framework`、`libc++.tbd`、`libz.tbd`、`libicucore.tbd`
 */

/// 系统库
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <CoreLocation/CoreLocation.h>
#import <Security/Security.h>
#import <CoreGraphics/CoreGraphics.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <WebKit/WebKit.h>
#import <AdSupport/AdSupport.h>

/// 百度统计头文件
#import <BaiduMTJ/BaiduMobStat.h>
