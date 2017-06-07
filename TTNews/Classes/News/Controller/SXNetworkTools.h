//
//  SXNetworkTools.h
//  TTNews
//
//  Created by 瑞文戴尔 on 16/3/24.
//  Copyright © 2016年 瑞文戴尔. All rights reserved.//

#import <AFNetworking/AFNetworking.h>

#define GETLIST_CONF_URL @"http://localhost:8887/content/getList.php"

@interface SXNetworkTools : AFHTTPSessionManager

+ (instancetype)sharedNetworkTools;
+ (instancetype)sharedNetworkToolsWithoutBaseUrl;

+ (NSString*) genParams:(NSDictionary*)myParams;

+ (NSString *)distanceTimeWithBeforeTime:(double)beTime;

@end
