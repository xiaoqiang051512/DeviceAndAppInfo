//
//  MJDeviceAndAppInfo.h
//  ObtainDeviceInfo
//
//  Created by 刘志伟 on 2018/4/21.
//  Copyright © 2018年 liuzhiwei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MJDeviceAndAppInfo : NSObject

///设备名称 “iPhone X、iPhone 8”
+  (NSString *)deviceName;

///手机用户名 “liuzhiwei”
+ (NSString *)iPhoneName;

///手机型号 iphone、iPad、iWatch
+ (NSString *)currentModel;

///当前系统版本 "iOS 10.3.3"
+ (NSString *)currentSystemVersion;

///系统名称 “iOS、watchOS”
+ (NSString *)systemName;

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

///电池信息
+ (float )batteryLevel;

/// 是否允许追踪电量
+ (BOOL)batteryMonitoringEnabled;

/*获取当前充电状态
 *UIDeviceBatteryStateUnknown:无法取得充电状态情况
 *UIDeviceBatteryStateUnplugged:非充电状态
 *UIDeviceBatteryStateCharging:充电状态
 *UIDeviceBatteryStateFull:满电状态
 */
+ (UIDeviceBatteryState)currentBatteryState;

///ip地址 内网ip地址
+ (NSString *)localIPAddress;

///ip地址 外网的
+ (NSString *)networkIPAddress;

///CPU个数信息
+ (float)CPUCount;

///每个CPU使用情况 数组里面带的是使用比例的字符串
+ (NSArray *)perCPUUsage;

///磁盘大小
+ (int64_t)totalDiskSpace;

///磁盘剩余大小
+ (int64_t)freeDiskSpace;

///磁盘已使用大小
+ (int64_t)usedDiskSpace;

/// 系统总内存空间
+ (int64_t)totalMemory ;

/// 活跃的内存,正在使用或者很短时间内被使用过
+ (int64_t)activeMemory ;

/// 最近使用过,但是目前处于不活跃状态的内存
+ (int64_t)inActiveMemory ;

/// 空闲的内存空间
+ (int64_t)freeMemory ;

/// 已使用的内存空间
+ (int64_t)usedMemory ;

/// 用来存放内核和数据结构的内存,framework、用户级别的应用无法分配
+ (int64_t)wiredMemory ;

/// 可释放的内存空间：内存吃紧自动释放，针对大对象存放所需的大块内存空间
+ (int64_t)purgableMemory;


@end
