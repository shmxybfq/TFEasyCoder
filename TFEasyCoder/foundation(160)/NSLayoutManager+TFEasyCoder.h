//
//  NSLayoutManager+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLayoutManager (TFEasyCoder)





-(NSLayoutManager  *(^)(NSTextStorage *  textStorage))set_textStorage;
-(NSLayoutManager  *(^)(id<NSLayoutManagerDelegate>   delegate))set_delegate;
-(NSLayoutManager  *(^)(BOOL  showsInvisibleCharacters))set_showsInvisibleCharacters;
-(NSLayoutManager  *(^)(BOOL  showsControlCharacters))set_showsControlCharacters;
-(NSLayoutManager  *(^)(double  hyphenationFactor))set_hyphenationFactor;
-(NSLayoutManager  *(^)(BOOL  usesFontLeading))set_usesFontLeading;
-(NSLayoutManager  *(^)(BOOL  allowsNonContiguousLayout))set_allowsNonContiguousLayout;




//superclass pros NSObject
-(NSLayoutManager  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLayoutManager  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLayoutManager  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLayoutManager  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLayoutManager  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLayoutManager  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLayoutManager  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLayoutManager  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLayoutManager  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLayoutManager  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLayoutManager  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLayoutManager  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLayoutManager  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLayoutManager  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end