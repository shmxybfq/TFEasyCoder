//
//  UIVisualEffectView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIVisualEffectView (TFEasyCoder)





-(UIVisualEffectView  *(^)(UIVisualEffect *  effect))set_effect;





//superclass pros UIView
-(UIVisualEffectView  *(^)(UIView *  maskView))set_maskView;
-(UIVisualEffectView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIVisualEffectView  *(^)(long long  tag))set_tag;
-(UIVisualEffectView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIVisualEffectView  *(^)(CGPoint  center))set_center;
-(UIVisualEffectView  *(^)(CGRect  frame))set_frame;
-(UIVisualEffectView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIVisualEffectView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIVisualEffectView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIVisualEffectView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIVisualEffectView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIVisualEffectView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIVisualEffectView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIVisualEffectView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIVisualEffectView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIVisualEffectView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIVisualEffectView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIVisualEffectView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIVisualEffectView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIVisualEffectView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIVisualEffectView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIVisualEffectView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
