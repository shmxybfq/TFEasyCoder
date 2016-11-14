//
//  NSFileCoordinator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSFileCoordinatorEasyCoderBlock) (NSFileCoordinator * ins);

@interface NSFileCoordinator (TFEasyCoder)

+( NSFileCoordinator *)easyCoder:(NSFileCoordinatorEasyCoderBlock)block;
-(NSFileCoordinator *)easyCoder:(NSFileCoordinatorEasyCoderBlock)block;


-(NSFileCoordinator  *(^)(NSString *  purposeIdentifier))set_purposeIdentifier;




//superclass pros NSObject
-(NSFileCoordinator  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileCoordinator  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileCoordinator  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileCoordinator  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileCoordinator  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileCoordinator  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileCoordinator  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileCoordinator  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileCoordinator  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileCoordinator  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileCoordinator  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileCoordinator  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileCoordinator  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileCoordinator  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSFileCoordinator *(^)(id value,NSString *key))set_ValueKey;


@end