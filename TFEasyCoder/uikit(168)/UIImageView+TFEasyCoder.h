//
//  UIImageView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIImageView (TFEasyCoder)





-(UIImageView  *(^)(UIImage *  image))set_image;
-(UIImageView  *(^)(UIImage *  highlightedImage))set_highlightedImage;
//TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,userInteractionEnabled);
-(UIImageView  *(^)(BOOL  highlighted))set_highlighted;
-(UIImageView  *(^)(NSArray *  animationImages))set_animationImages;
-(UIImageView  *(^)(NSArray *  highlightedAnimationImages))set_highlightedAnimationImages;
-(UIImageView  *(^)(double  animationDuration))set_animationDuration;
-(UIImageView  *(^)(long long  animationRepeatCount))set_animationRepeatCount;
-(UIImageView  *(^)(UIColor *  tintColor))set_tintColor;





//superclass pros UIView
-(UIImageView  *(^)(UIView *  maskView))set_maskView;
-(UIImageView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIImageView  *(^)(long long  tag))set_tag;
-(UIImageView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIImageView  *(^)(CGPoint  center))set_center;
-(UIImageView  *(^)(CGRect  frame))set_frame;
-(UIImageView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIImageView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIImageView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIImageView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIImageView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIImageView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIImageView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIImageView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIImageView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIImageView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIImageView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIImageView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIImageView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIImageView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIImageView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIImageView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
