//
//  MJAppInfo.m
//  Test01
//
//  Created by 刘志伟 on 2018/4/22.
//  Copyright © 2018年 liuzhiwei. All rights reserved.
//

#import "MJAppInfo.h"
#import "UICKeyChainStore.h"
#import <UIKit/UIKit.h>

#define kUUIDServiceIdentifier @"kUUIDServiceIdentifier"

@implementation MJAppInfo

+ (NSString *)UUID {
    
    NSString *uuid = [[UIDevice currentDevice].identifierForVendor UUIDString];
    return uuid;
}

+ (NSString *)uniqueIdentification {
    
    NSString *uniqueIdentification = [UICKeyChainStore stringForKey:kUUIDServiceIdentifier service:[self appBundleID]];
    
    if (uniqueIdentification.length) {
        
        return uniqueIdentification;
    } else {
        
        uniqueIdentification = [self UUID];
        [UICKeyChainStore setString:uniqueIdentification forKey:kUUIDServiceIdentifier service:[self appBundleID]];
        return uniqueIdentification;
    }
}

+ (NSString *)appVersion {
    
    NSString *appVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
    return appVersion;
}

+ (NSString *)appBundleID {
    
    NSString *bundleID = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"];
    return bundleID;
}

+ (NSString *)appName {
    
    NSString *appName = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"];
    return appName;
}


@end
