//
//  NSTextContainer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSTextContainer (TFEasyCoder)





-(NSTextContainer  *(^)(NSLayoutManager *  layoutManager))set_layoutManager;
-(NSTextContainer  *(^)(CGSize  size))set_size;
-(NSTextContainer  *(^)(NSArray *  exclusionPaths))set_exclusionPaths;
-(NSTextContainer  *(^)(long long  lineBreakMode))set_lineBreakMode;
-(NSTextContainer  *(^)(double  lineFragmentPadding))set_lineFragmentPadding;
-(NSTextContainer  *(^)(unsigned long long  maximumNumberOfLines))set_maximumNumberOfLines;
-(NSTextContainer  *(^)(BOOL  widthTracksTextView))set_widthTracksTextView;
-(NSTextContainer  *(^)(BOOL  heightTracksTextView))set_heightTracksTextView;




//superclass pros NSObject
-(NSTextContainer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSTextContainer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSTextContainer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSTextContainer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSTextContainer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSTextContainer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSTextContainer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSTextContainer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSTextContainer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSTextContainer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSTextContainer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSTextContainer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSTextContainer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSTextContainer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end