//
//  NSMutableData+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSMutableDataEasyCoderBlock) (NSMutableData * ins);

@interface NSMutableData (TFEasyCoder)

+( NSMutableData *)easyCoder:(NSMutableDataEasyCoderBlock)block;
-(NSMutableData *)easyCoder:(NSMutableDataEasyCoderBlock)block;


-(NSMutableData  *(^)(unsigned long long  length))set_length;




//superclass pros NSData
//superclass pros NSObject
-(NSMutableData  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableData  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableData  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableData  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableData  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableData  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableData  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableData  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableData  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableData  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableData  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableData  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableData  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableData  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSMutableData *(^)(id value,NSString *key))set_ValueKey;


@end