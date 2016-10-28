//
//  NSNumberFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNumberFormatter,NSNumberFormatter *);

@interface NSNumberFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNumberFormatter, NSNumberFormatter *);
TF_EC_MINSTANCE_INT(NSNumberFormatter,NSNumberFormatter *);


TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,long long,formattingContext);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,numberStyle);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSLocale *,locale);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,BOOL,generatesDecimalNumbers);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,formatterBehavior);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,negativeFormat);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSDictionary *,textAttributesForNegativeValues);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,positiveFormat);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSDictionary *,textAttributesForPositiveValues);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,BOOL,allowsFloats);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,decimalSeparator);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,BOOL,alwaysShowsDecimalSeparator);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,currencyDecimalSeparator);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,BOOL,usesGroupingSeparator);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,groupingSeparator);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,zeroSymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSDictionary *,textAttributesForZero);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,nilSymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSDictionary *,textAttributesForNil);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,notANumberSymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSDictionary *,textAttributesForNotANumber);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,positiveInfinitySymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSDictionary *,textAttributesForPositiveInfinity);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,negativeInfinitySymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSDictionary *,textAttributesForNegativeInfinity);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,positivePrefix);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,positiveSuffix);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,negativePrefix);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,negativeSuffix);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,currencyCode);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,currencySymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,internationalCurrencySymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,percentSymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,perMillSymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,minusSign);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,plusSign);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,exponentSymbol);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,groupingSize);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,secondaryGroupingSize);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSNumber *,multiplier);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,formatWidth);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,paddingCharacter);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,paddingPosition);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,roundingMode);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSNumber *,roundingIncrement);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,minimumIntegerDigits);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,maximumIntegerDigits);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,minimumFractionDigits);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,maximumFractionDigits);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSNumber *,minimum);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSNumber *,maximum);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,NSString *,currencyGroupingSeparator);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,BOOL,lenient);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,BOOL,usesSignificantDigits);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,minimumSignificantDigits);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,unsigned long long,maximumSignificantDigits);
TF_EC_CHAIN_PROP_INT(NSNumberFormatter ,BOOL,partialStringValidationEnabled);

@end