//
//  CTMediator+Special.h
//  FFSpecialKit_Category_Example
//
//  Created by wenjie on 2019/2/16.
//  Copyright © 2019 stevenJiechen. All rights reserved.
//

#import <CTMediator/CTMediator.h>
#import <FFAPIsKit/APIRequest.h>
#import <FFAPIsKit/FFReformProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Special)
- (UIViewController *)specialDetailController;
- (NSDictionary *)specialReformerWithOriginData:(NSDictionary *)data;
- (NSDictionary *)specialReformer;
- (APIRequest *)specialAPIRequest;

@end

NS_ASSUME_NONNULL_END
