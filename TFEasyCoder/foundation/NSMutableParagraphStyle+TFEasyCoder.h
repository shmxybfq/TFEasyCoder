//
//  NSMutableParagraphStyle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableParagraphStyle (TFEasyCoder)





-(NSMutableParagraphStyle  *(^)(double  lineSpacing))set_lineSpacing;
-(NSMutableParagraphStyle  *(^)(double  paragraphSpacing))set_paragraphSpacing;
-(NSMutableParagraphStyle  *(^)(long long  alignment))set_alignment;
-(NSMutableParagraphStyle  *(^)(double  firstLineHeadIndent))set_firstLineHeadIndent;
-(NSMutableParagraphStyle  *(^)(double  headIndent))set_headIndent;
-(NSMutableParagraphStyle  *(^)(double  tailIndent))set_tailIndent;
-(NSMutableParagraphStyle  *(^)(long long  lineBreakMode))set_lineBreakMode;
-(NSMutableParagraphStyle  *(^)(double  minimumLineHeight))set_minimumLineHeight;
-(NSMutableParagraphStyle  *(^)(double  maximumLineHeight))set_maximumLineHeight;
-(NSMutableParagraphStyle  *(^)(long long  baseWritingDirection))set_baseWritingDirection;
-(NSMutableParagraphStyle  *(^)(double  lineHeightMultiple))set_lineHeightMultiple;
-(NSMutableParagraphStyle  *(^)(double  paragraphSpacingBefore))set_paragraphSpacingBefore;
-(NSMutableParagraphStyle  *(^)(float  hyphenationFactor))set_hyphenationFactor;
-(NSMutableParagraphStyle  *(^)(NSArray *  tabStops))set_tabStops;
-(NSMutableParagraphStyle  *(^)(double  defaultTabInterval))set_defaultTabInterval;
-(NSMutableParagraphStyle  *(^)(BOOL  allowsDefaultTighteningForTruncation))set_allowsDefaultTighteningForTruncation;




//superclass pros NSParagraphStyle
//superclass pros NSObject
-(NSMutableParagraphStyle  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableParagraphStyle  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableParagraphStyle  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableParagraphStyle  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableParagraphStyle  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableParagraphStyle  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableParagraphStyle  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableParagraphStyle  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableParagraphStyle  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableParagraphStyle  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end