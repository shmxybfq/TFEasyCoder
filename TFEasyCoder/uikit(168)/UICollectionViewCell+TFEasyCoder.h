//
//  UICollectionViewCell+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionViewCell (TFEasyCoder)





-(UICollectionViewCell  *(^)(BOOL  selected))set_selected;
-(UICollectionViewCell  *(^)(BOOL  highlighted))set_highlighted;
-(UICollectionViewCell  *(^)(UIView *  backgroundView))set_backgroundView;
-(UICollectionViewCell  *(^)(UIView *  selectedBackgroundView))set_selectedBackgroundView;




//superclass pros UICollectionReusableView
//superclass pros UIView
-(UICollectionViewCell  *(^)(UIView *  maskView))set_maskView;
-(UICollectionViewCell  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UICollectionViewCell  *(^)(long long  tag))set_tag;
-(UICollectionViewCell  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UICollectionViewCell  *(^)(CGPoint  center))set_center;
-(UICollectionViewCell  *(^)(CGRect  frame))set_frame;
-(UICollectionViewCell  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UICollectionViewCell  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UICollectionViewCell  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewCell  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewCell  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewCell  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewCell  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewCell  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewCell  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewCell  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewCell  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewCell  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewCell  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewCell  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewCell  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewCell  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
