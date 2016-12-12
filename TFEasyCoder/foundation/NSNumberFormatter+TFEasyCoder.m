//
//  NSNumberFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNumberFormatter+TFEasyCoder.h"


@implementation NSNumberFormatter (TFEasyCoder)





-(NSNumberFormatter  *(^)(long long  formattingContext))set_formattingContext{
    __weak typeof(self) weakSelf = self;
    return ^(long long  formattingContext){
        weakSelf.formattingContext = formattingContext;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  numberStyle))set_numberStyle{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  numberStyle){
        weakSelf.numberStyle = numberStyle;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSLocale *  locale))set_locale{
    __weak typeof(self) weakSelf = self;
    return ^(NSLocale *  locale){
        weakSelf.locale = locale;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  generatesDecimalNumbers))set_generatesDecimalNumbers{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  generatesDecimalNumbers){
        weakSelf.generatesDecimalNumbers = generatesDecimalNumbers;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  formatterBehavior))set_formatterBehavior{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  formatterBehavior){
        weakSelf.formatterBehavior = formatterBehavior;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  negativeFormat))set_negativeFormat{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  negativeFormat){
        weakSelf.negativeFormat = negativeFormat;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNegativeValues))set_textAttributesForNegativeValues{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  textAttributesForNegativeValues){
        weakSelf.textAttributesForNegativeValues = textAttributesForNegativeValues;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  positiveFormat))set_positiveFormat{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  positiveFormat){
        weakSelf.positiveFormat = positiveFormat;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForPositiveValues))set_textAttributesForPositiveValues{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  textAttributesForPositiveValues){
        weakSelf.textAttributesForPositiveValues = textAttributesForPositiveValues;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  allowsFloats))set_allowsFloats{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsFloats){
        weakSelf.allowsFloats = allowsFloats;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  decimalSeparator))set_decimalSeparator{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  decimalSeparator){
        weakSelf.decimalSeparator = decimalSeparator;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  alwaysShowsDecimalSeparator))set_alwaysShowsDecimalSeparator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysShowsDecimalSeparator){
        weakSelf.alwaysShowsDecimalSeparator = alwaysShowsDecimalSeparator;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  currencyDecimalSeparator))set_currencyDecimalSeparator{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  currencyDecimalSeparator){
        weakSelf.currencyDecimalSeparator = currencyDecimalSeparator;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  usesGroupingSeparator))set_usesGroupingSeparator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  usesGroupingSeparator){
        weakSelf.usesGroupingSeparator = usesGroupingSeparator;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  groupingSeparator))set_groupingSeparator{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  groupingSeparator){
        weakSelf.groupingSeparator = groupingSeparator;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  zeroSymbol))set_zeroSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  zeroSymbol){
        weakSelf.zeroSymbol = zeroSymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForZero))set_textAttributesForZero{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  textAttributesForZero){
        weakSelf.textAttributesForZero = textAttributesForZero;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  nilSymbol))set_nilSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  nilSymbol){
        weakSelf.nilSymbol = nilSymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNil))set_textAttributesForNil{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  textAttributesForNil){
        weakSelf.textAttributesForNil = textAttributesForNil;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  notANumberSymbol))set_notANumberSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  notANumberSymbol){
        weakSelf.notANumberSymbol = notANumberSymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNotANumber))set_textAttributesForNotANumber{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  textAttributesForNotANumber){
        weakSelf.textAttributesForNotANumber = textAttributesForNotANumber;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  positiveInfinitySymbol))set_positiveInfinitySymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  positiveInfinitySymbol){
        weakSelf.positiveInfinitySymbol = positiveInfinitySymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForPositiveInfinity))set_textAttributesForPositiveInfinity{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  textAttributesForPositiveInfinity){
        weakSelf.textAttributesForPositiveInfinity = textAttributesForPositiveInfinity;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  negativeInfinitySymbol))set_negativeInfinitySymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  negativeInfinitySymbol){
        weakSelf.negativeInfinitySymbol = negativeInfinitySymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSDictionary *  textAttributesForNegativeInfinity))set_textAttributesForNegativeInfinity{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  textAttributesForNegativeInfinity){
        weakSelf.textAttributesForNegativeInfinity = textAttributesForNegativeInfinity;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  positivePrefix))set_positivePrefix{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  positivePrefix){
        weakSelf.positivePrefix = positivePrefix;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  positiveSuffix))set_positiveSuffix{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  positiveSuffix){
        weakSelf.positiveSuffix = positiveSuffix;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  negativePrefix))set_negativePrefix{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  negativePrefix){
        weakSelf.negativePrefix = negativePrefix;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  negativeSuffix))set_negativeSuffix{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  negativeSuffix){
        weakSelf.negativeSuffix = negativeSuffix;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  currencyCode))set_currencyCode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  currencyCode){
        weakSelf.currencyCode = currencyCode;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  currencySymbol))set_currencySymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  currencySymbol){
        weakSelf.currencySymbol = currencySymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  internationalCurrencySymbol))set_internationalCurrencySymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  internationalCurrencySymbol){
        weakSelf.internationalCurrencySymbol = internationalCurrencySymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  percentSymbol))set_percentSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  percentSymbol){
        weakSelf.percentSymbol = percentSymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  perMillSymbol))set_perMillSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  perMillSymbol){
        weakSelf.perMillSymbol = perMillSymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  minusSign))set_minusSign{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  minusSign){
        weakSelf.minusSign = minusSign;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  plusSign))set_plusSign{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  plusSign){
        weakSelf.plusSign = plusSign;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  exponentSymbol))set_exponentSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  exponentSymbol){
        weakSelf.exponentSymbol = exponentSymbol;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  groupingSize))set_groupingSize{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  groupingSize){
        weakSelf.groupingSize = groupingSize;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  secondaryGroupingSize))set_secondaryGroupingSize{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  secondaryGroupingSize){
        weakSelf.secondaryGroupingSize = secondaryGroupingSize;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSNumber *  multiplier))set_multiplier{
    __weak typeof(self) weakSelf = self;
    return ^(NSNumber *  multiplier){
        weakSelf.multiplier = multiplier;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  formatWidth))set_formatWidth{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  formatWidth){
        weakSelf.formatWidth = formatWidth;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  paddingCharacter))set_paddingCharacter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  paddingCharacter){
        weakSelf.paddingCharacter = paddingCharacter;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  paddingPosition))set_paddingPosition{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  paddingPosition){
        weakSelf.paddingPosition = paddingPosition;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  roundingMode))set_roundingMode{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  roundingMode){
        weakSelf.roundingMode = roundingMode;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSNumber *  roundingIncrement))set_roundingIncrement{
    __weak typeof(self) weakSelf = self;
    return ^(NSNumber *  roundingIncrement){
        weakSelf.roundingIncrement = roundingIncrement;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  minimumIntegerDigits))set_minimumIntegerDigits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  minimumIntegerDigits){
        weakSelf.minimumIntegerDigits = minimumIntegerDigits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  maximumIntegerDigits))set_maximumIntegerDigits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  maximumIntegerDigits){
        weakSelf.maximumIntegerDigits = maximumIntegerDigits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  minimumFractionDigits))set_minimumFractionDigits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  minimumFractionDigits){
        weakSelf.minimumFractionDigits = minimumFractionDigits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  maximumFractionDigits))set_maximumFractionDigits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  maximumFractionDigits){
        weakSelf.maximumFractionDigits = maximumFractionDigits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSNumber *  minimum))set_minimum{
    __weak typeof(self) weakSelf = self;
    return ^(NSNumber *  minimum){
        weakSelf.minimum = minimum;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSNumber *  maximum))set_maximum{
    __weak typeof(self) weakSelf = self;
    return ^(NSNumber *  maximum){
        weakSelf.maximum = maximum;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  currencyGroupingSeparator))set_currencyGroupingSeparator{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  currencyGroupingSeparator){
        weakSelf.currencyGroupingSeparator = currencyGroupingSeparator;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  lenient))set_lenient{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  lenient){
        weakSelf.lenient = lenient;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  usesSignificantDigits))set_usesSignificantDigits{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  usesSignificantDigits){
        weakSelf.usesSignificantDigits = usesSignificantDigits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  minimumSignificantDigits))set_minimumSignificantDigits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  minimumSignificantDigits){
        weakSelf.minimumSignificantDigits = minimumSignificantDigits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  maximumSignificantDigits))set_maximumSignificantDigits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  maximumSignificantDigits){
        weakSelf.maximumSignificantDigits = maximumSignificantDigits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  partialStringValidationEnabled))set_partialStringValidationEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  partialStringValidationEnabled){
        weakSelf.partialStringValidationEnabled = partialStringValidationEnabled;
        return weakSelf;
    };
}





//superclass pros NSFormatter
//superclass pros NSObject
-(NSNumberFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSNumberFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end