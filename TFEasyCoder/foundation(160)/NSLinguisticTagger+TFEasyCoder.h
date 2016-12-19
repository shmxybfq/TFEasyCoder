//
//  NSLinguisticTagger+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLinguisticTagger (TFEasyCoder)





-(NSLinguisticTagger  *(^)(NSString *  string))set_string;




//superclass pros NSObject
-(NSLinguisticTagger  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLinguisticTagger  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLinguisticTagger  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLinguisticTagger  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLinguisticTagger  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLinguisticTagger  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLinguisticTagger  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLinguisticTagger  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLinguisticTagger  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLinguisticTagger  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLinguisticTagger  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLinguisticTagger  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLinguisticTagger  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLinguisticTagger  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end