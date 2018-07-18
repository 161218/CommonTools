//
//  NSObject+delayTask.h
//
//  Created by lzy on 2017/3/26.
//  Copyright © 2017年 chemao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (delayTask)

/**
 *延时操作
 */
- (void)performTaskWithTimeInterval:(NSTimeInterval)timeInterval action:(void (^)(void))action;
@end
