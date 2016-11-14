//
//  NSNotificationQueue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSNotificationQueueEasyCoderBlock) (NSNotificationQueue * ins);

@interface NSNotificationQueue (TFEasyCoder)

+( NSNotificationQueue *)easyCoder:(NSNotificationQueueEasyCoderBlock)block;
-(NSNotificationQueue *)easyCoder:(NSNotificationQueueEasyCoderBlock)block;






//superclass pros NSObject
-(NSNotificationQueue  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNotificationQueue  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNotificationQueue  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNotificationQueue  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNotificationQueue  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNotificationQueue  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNotificationQueue  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNotificationQueue  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNotificationQueue  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNotificationQueue  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNotificationQueue  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNotificationQueue  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNotificationQueue  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNotificationQueue  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSNotificationQueue *(^)(id value,NSString *key))set_ValueKey;


@end