//
//  NSObject+delayTask.m
//
//  Created by lzy on 2017/3/26.
//  Copyright © 2017年 chemao. All rights reserved.
//

#import "NSObject+delayTask.h"

@implementation NSObject (delayTask)

- (void)performTaskWithTimeInterval:(NSTimeInterval)timeInterval action:(void (^)(void))action
{
    double delayInSeconds = timeInterval;
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
    dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
        action();
    });
}

@end
