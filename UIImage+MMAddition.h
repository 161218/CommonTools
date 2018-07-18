//
//  UIImage+MMAddition.h
//
//  Created by lzy on 2017/3/26.
//  Copyright © 2017年 chemao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MMAddition)

/** 写在前言
 *图片操作是我们开发中必然会用到的一块内容，图片的各种转换（NSData、Base64String、UIColor等转换），本地存储、相册保存等。
 */

/**
 保存图片到沙盒
 `UIImage`图片存储到沙盒Documents文件夹下面
 @param currentImage image对象
 @param imageName 图片命名
 */
+ (void) saveImage:(UIImage *)currentImage withName:(NSString *)imageName;


/**
 将图片转换成Base64String
 
 @param image `UIImage`对象
 @return Base64String
 */
+ (NSString *)base64StringFromImage:(UIImage *)image;


/**
 将NSData转换为Base64String

 @param theData NSData数据
 @return Base64String
 */
+ (NSString*)base64forData:(NSData*)theData;


/**
 将Base64String转换成`UIImage`对象
 
 @param base64Str base64Str
 @return `UIImage`对象
 */
+ (UIImage *)imageWithBase64String:(NSString *)base64Str;


/**
 将NSData转换成`UIImage`对象
 
 @param imgData NSData数据对象
 @return `UIImage`对象
 */
+ (UIImage *)imageWithData:(NSData *)imgData;



/**
 用一种颜色创建一张图片
 
 @param color `UIColor`对象
 @return `UIImage`对象
 */
+ (UIImage *)imageWithUIcolor:(UIColor *)color;

/**
 用一种颜色创建一张图片
 
 @param color `UIColor`对象
 @param size  创建图片大小
 @return `UIImage`对象
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
@end
