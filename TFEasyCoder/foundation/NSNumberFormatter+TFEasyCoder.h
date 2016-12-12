//
//  NSNumberFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSNumberFormatter (TFEasyCoder)





-(NSNumberFormatter  *(^)(long long  formattingContext))set_formattingContext;
-(NSNumberFormatter  *(^)(unsigned long long  numberStyle))set_numberStyle;
-(NSNumberFormatter  *(^)(NSLocale *  locale))set_locale;
-(NSNumberFormatter  *(^)(BOOL  generatesDecimalNumbers))set_generatesDecimalNumbers;
-(NSNumberFormatter  *(^)(unsigned long long  formatterBehavior))set_formatterBehavior;
-(NSNumberFormatter  *(^)(NSString *  negativeFormat))set_negativeFormat;
-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNegativeValues))set_textAttributesForNegativeValues;
-(NSNumberFormatter  *(^)(NSString *  positiveFormat))set_positiveFormat;
-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForPositiveValues))set_textAttributesForPositiveValues;
-(NSNumberFormatter  *(^)(BOOL  allowsFloats))set_allowsFloats;
-(NSNumberFormatter  *(^)(NSString *  decimalSeparator))set_decimalSeparator;
-(NSNumberFormatter  *(^)(BOOL  alwaysShowsDecimalSeparator))set_alwaysShowsDecimalSeparator;
-(NSNumberFormatter  *(^)(NSString *  currencyDecimalSeparator))set_currencyDecimalSeparator;
-(NSNumberFormatter  *(^)(BOOL  usesGroupingSeparator))set_usesGroupingSeparator;
-(NSNumberFormatter  *(^)(NSString *  groupingSeparator))set_groupingSeparator;
-(NSNumberFormatter  *(^)(NSString *  zeroSymbol))set_zeroSymbol;
-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForZero))set_textAttributesForZero;
-(NSNumberFormatter  *(^)(NSString *  nilSymbol))set_nilSymbol;
-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNil))set_textAttributesForNil;
-(NSNumberFormatter  *(^)(NSString *  notANumberSymbol))set_notANumberSymbol;
-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNotANumber))set_textAttributesForNotANumber;
-(NSNumberFormatter  *(^)(NSString *  positiveInfinitySymbol))set_positiveInfinitySymbol;
-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForPositiveInfinity))set_textAttributesForPositiveInfinity;
-(NSNumberFormatter  *(^)(NSString *  negativeInfinitySymbol))set_negativeInfinitySymbol;
-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNegativeInfinity))set_textAttributesForNegativeInfinity;
-(NSNumberFormatter  *(^)(NSString *  positivePrefix))set_positivePrefix;
-(NSNumberFormatter  *(^)(NSString *  positiveSuffix))set_positiveSuffix;
-(NSNumberFormatter  *(^)(NSString *  negativePrefix))set_negativePrefix;
-(NSNumberFormatter  *(^)(NSString *  negativeSuffix))set_negativeSuffix;
-(NSNumberFormatter  *(^)(NSString *  currencyCode))set_currencyCode;
-(NSNumberFormatter  *(^)(NSString *  currencySymbol))set_currencySymbol;
-(NSNumberFormatter  *(^)(NSString *  internationalCurrencySymbol))set_internationalCurrencySymbol;
-(NSNumberFormatter  *(^)(NSString *  percentSymbol))set_percentSymbol;
-(NSNumberFormatter  *(^)(NSString *  perMillSymbol))set_perMillSymbol;
-(NSNumberFormatter  *(^)(NSString *  minusSign))set_minusSign;
-(NSNumberFormatter  *(^)(NSString *  plusSign))set_plusSign;
-(NSNumberFormatter  *(^)(NSString *  exponentSymbol))set_exponentSymbol;
-(NSNumberFormatter  *(^)(unsigned long long  groupingSize))set_groupingSize;
-(NSNumberFormatter  *(^)(unsigned long long  secondaryGroupingSize))set_secondaryGroupingSize;
-(NSNumberFormatter  *(^)(NSNumber *  multiplier))set_multiplier;
-(NSNumberFormatter  *(^)(unsigned long long  formatWidth))set_formatWidth;
-(NSNumberFormatter  *(^)(NSString *  paddingCharacter))set_paddingCharacter;
-(NSNumberFormatter  *(^)(unsigned long long  paddingPosition))set_paddingPosition;
-(NSNumberFormatter  *(^)(unsigned long long  roundingMode))set_roundingMode;
-(NSNumberFormatter  *(^)(NSNumber *  roundingIncrement))set_roundingIncrement;
-(NSNumberFormatter  *(^)(unsigned long long  minimumIntegerDigits))set_minimumIntegerDigits;
-(NSNumberFormatter  *(^)(unsigned long long  maximumIntegerDigits))set_maximumIntegerDigits;
-(NSNumberFormatter  *(^)(unsigned long long  minimumFractionDigits))set_minimumFractionDigits;
-(NSNumberFormatter  *(^)(unsigned long long  maximumFractionDigits))set_maximumFractionDigits;
-(NSNumberFormatter  *(^)(NSNumber *  minimum))set_minimum;
-(NSNumberFormatter  *(^)(NSNumber *  maximum))set_maximum;
-(NSNumberFormatter  *(^)(NSString *  currencyGroupingSeparator))set_currencyGroupingSeparator;
-(NSNumberFormatter  *(^)(BOOL  lenient))set_lenient;
-(NSNumberFormatter  *(^)(BOOL  usesSignificantDigits))set_usesSignificantDigits;
-(NSNumberFormatter  *(^)(unsigned long long  minimumSignificantDigits))set_minimumSignificantDigits;
-(NSNumberFormatter  *(^)(unsigned long long  maximumSignificantDigits))set_maximumSignificantDigits;
-(NSNumberFormatter  *(^)(BOOL  partialStringValidationEnabled))set_partialStringValidationEnabled;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSNumberFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNumberFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNumberFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNumberFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNumberFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNumberFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNumberFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNumberFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNumberFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNumberFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNumberFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNumberFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNumberFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNumberFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end