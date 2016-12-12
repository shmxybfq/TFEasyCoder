//
//  UICollisionBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollisionBehavior (TFEasyCoder)





-(UICollisionBehavior  *(^)(unsigned long long  collisionMode))set_collisionMode;
-(UICollisionBehavior  *(^)(BOOL  translatesReferenceBoundsIntoBoundary))set_translatesReferenceBoundsIntoBoundary;
-(UICollisionBehavior  *(^)(id<UICollisionBehaviorDelegate>   collisionDelegate))set_collisionDelegate;




//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UICollisionBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollisionBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollisionBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollisionBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollisionBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollisionBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollisionBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollisionBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollisionBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollisionBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollisionBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollisionBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollisionBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollisionBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end