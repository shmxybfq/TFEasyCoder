//
//  NSNumberFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNumberFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNumberFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNumberFormatter, NSNumberFormatter *);
TF_EC_MINSTANCE_IMP(NSNumberFormatter, NSNumberFormatter *);


TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,long long,formattingContext)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,numberStyle)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSLocale *,locale)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,generatesDecimalNumbers)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,formatterBehavior)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,negativeFormat)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSDictionary *,textAttributesForNegativeValues)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,positiveFormat)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSDictionary *,textAttributesForPositiveValues)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,allowsFloats)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,decimalSeparator)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,alwaysShowsDecimalSeparator)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,currencyDecimalSeparator)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,usesGroupingSeparator)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,groupingSeparator)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,zeroSymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSDictionary *,textAttributesForZero)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,nilSymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSDictionary *,textAttributesForNil)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,notANumberSymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSDictionary *,textAttributesForNotANumber)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,positiveInfinitySymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSDictionary *,textAttributesForPositiveInfinity)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,negativeInfinitySymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSDictionary *,textAttributesForNegativeInfinity)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,positivePrefix)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,positiveSuffix)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,negativePrefix)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,negativeSuffix)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,currencyCode)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,currencySymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,internationalCurrencySymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,percentSymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,perMillSymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,minusSign)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,plusSign)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,exponentSymbol)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,groupingSize)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,secondaryGroupingSize)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSNumber *,multiplier)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,formatWidth)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,paddingCharacter)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,paddingPosition)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,roundingMode)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSNumber *,roundingIncrement)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,minimumIntegerDigits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,maximumIntegerDigits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,minimumFractionDigits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,maximumFractionDigits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSNumber *,minimum)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSNumber *,maximum)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,currencyGroupingSeparator)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,lenient)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,usesSignificantDigits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,minimumSignificantDigits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,maximumSignificantDigits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,partialStringValidationEnabled)




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNumberFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSNumberFormatter);


@end