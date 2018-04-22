//
//  MJAppInfo.h
//  Test01
//
//  Created by 刘志伟 on 2018/4/22.
//  Copyright © 2018年 liuzhiwei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MJAppInfo : NSObject

///UUID
+ (NSString *)UUID;

///唯一标示符号 用UUID和KeyChainStore
+ (NSString *)uniqueIdentification;

///APP版本号 "1.0.0"
+ (NSString *)appVersion;

///获取app 的bundleID
+ (NSString *)appBundleID;

///获取app 的昵称
+ (NSString *)appName;

@end
