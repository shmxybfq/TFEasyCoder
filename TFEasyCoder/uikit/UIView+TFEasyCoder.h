//
//  UIView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIViewEasyCoderBlock) (UIView * ins);

@interface UIView (TFEasyCoder)

+( UIView *)easyCoder:(UIViewEasyCoderBlock)block;
-(UIView *)easyCoder:(UIViewEasyCoderBlock)block;


-(UIView  *(^)(UIView *  maskView))set_maskView;
-(UIView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIView  *(^)(long long  tag))set_tag;
-(UIView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIView  *(^)(CGPoint  center))set_center;
-(UIView  *(^)(CGRect  frame))set_frame;
-(UIView  *(^)(UIColor *  backgroundColor))set_backgroundColor;



//superclass pros UIResponder
-(UIView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIView *(^)(id value,NSString *key))set_ValueKey;


@end