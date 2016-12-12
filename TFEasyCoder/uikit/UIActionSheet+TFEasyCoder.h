//
//  UIActionSheet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"




@interface UIActionSheet (TFEasyCoder)





-(UIActionSheet  *(^)(id<UIActionSheetDelegate>   delegate))set_delegate;
-(UIActionSheet  *(^)(NSString *  title))set_title;
-(UIActionSheet  *(^)(long long  actionSheetStyle))set_actionSheetStyle;
-(UIActionSheet  *(^)(long long  cancelButtonIndex))set_cancelButtonIndex;
-(UIActionSheet  *(^)(long long  destructiveButtonIndex))set_destructiveButtonIndex;




//superclass pros UIView
-(UIActionSheet  *(^)(UIView *  maskView))set_maskView;
-(UIActionSheet  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIActionSheet  *(^)(long long  tag))set_tag;
-(UIActionSheet  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIActionSheet  *(^)(CGPoint  center))set_center;
-(UIActionSheet  *(^)(CGRect  frame))set_frame;
-(UIActionSheet  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIActionSheet  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIActionSheet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIActionSheet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIActionSheet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIActionSheet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIActionSheet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIActionSheet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIActionSheet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIActionSheet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIActionSheet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIActionSheet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIActionSheet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIActionSheet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIActionSheet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIActionSheet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
