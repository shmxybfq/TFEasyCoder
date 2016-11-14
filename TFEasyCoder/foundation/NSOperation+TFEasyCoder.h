//
//  NSOperation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSOperationEasyCoderBlock) (NSOperation * ins);

@interface NSOperation (TFEasyCoder)

+( NSOperation *)easyCoder:(NSOperationEasyCoderBlock)block;
-(NSOperation *)easyCoder:(NSOperationEasyCoderBlock)block;


-(NSOperation  *(^)(long long  queuePriority))set_queuePriority;
-(NSOperation  *(^)(double  threadPriority))set_threadPriority;
-(NSOperation  *(^)(long long  qualityOfService))set_qualityOfService;
-(NSOperation  *(^)(NSString *  name))set_name;




//superclass pros NSObject
-(NSOperation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSOperation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSOperation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSOperation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSOperation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSOperation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSOperation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSOperation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSOperation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSOperation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSOperation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSOperation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSOperation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSOperation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSOperation *(^)(id value,NSString *key))set_ValueKey;


@end