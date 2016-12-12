//
//  UICollectionReusableView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionReusableView (TFEasyCoder)









//superclass pros UIView
-(UICollectionReusableView  *(^)(UIView *  maskView))set_maskView;
-(UICollectionReusableView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UICollectionReusableView  *(^)(long long  tag))set_tag;
-(UICollectionReusableView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UICollectionReusableView  *(^)(CGPoint  center))set_center;
-(UICollectionReusableView  *(^)(CGRect  frame))set_frame;
-(UICollectionReusableView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UICollectionReusableView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UICollectionReusableView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionReusableView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionReusableView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionReusableView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionReusableView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionReusableView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionReusableView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionReusableView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionReusableView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionReusableView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionReusableView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionReusableView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionReusableView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionReusableView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
