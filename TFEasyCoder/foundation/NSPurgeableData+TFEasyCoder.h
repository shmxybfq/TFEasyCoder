//
//  NSPurgeableData+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSPurgeableDataEasyCoderBlock) (NSPurgeableData * ins);

@interface NSPurgeableData (TFEasyCoder)

+( NSPurgeableData *)easyCoder:(NSPurgeableDataEasyCoderBlock)block;
-(NSPurgeableData *)easyCoder:(NSPurgeableDataEasyCoderBlock)block;






//superclass pros NSMutableData
-(NSPurgeableData  *(^)(unsigned long long  length))set_length;
//superclass pros NSData
//superclass pros NSObject
-(NSPurgeableData  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPurgeableData  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPurgeableData  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPurgeableData  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPurgeableData  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPurgeableData  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPurgeableData  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPurgeableData  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPurgeableData  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPurgeableData  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPurgeableData  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPurgeableData  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPurgeableData  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPurgeableData  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSPurgeableData *(^)(id value,NSString *key))set_ValueKey;


@end