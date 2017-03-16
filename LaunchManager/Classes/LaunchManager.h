//
//  LaunchManager.h
//  Common
//
//  Created by 黄磊 on 16/4/6.
//  Copyright © 2016年 Musjoy. All rights reserved.
//  启动事件管理，一次性的<MODULE_WEB_SERVICE>

#import <Foundation/Foundation.h>

#ifndef MODULE_LAUNCH_MANAGER
#define MODULE_LAUNCH_MANAGER
#endif

typedef void (^LaunchCompleteBlock)(void);


@interface LaunchManager : NSObject

+ (instancetype)sharedInstance;

/// 启动完成时掉用，即rootViewController在viewDidAppear的时候掉用
+ (void)launchComplete;

/// 注册app启动才能掉用的方法，如果app早已启动则直接执行block。block只会执行一次
+ (void)registerLaunchAction:(LaunchCompleteBlock)block;

@end
