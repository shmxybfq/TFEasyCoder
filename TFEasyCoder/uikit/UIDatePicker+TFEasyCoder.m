//
//  UIDatePicker+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDatePicker+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDatePicker (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDatePicker, UIDatePicker *);
TF_EC_MINSTANCE_IMP(UIDatePicker, UIDatePicker *);



TF_EC_CHAIN_PROP_IMP(UIDatePicker ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,double,minuteInterval)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,long long,datePickerMode)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSLocale *,locale)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSDate *,date)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSDate *,minimumDate)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSDate *,maximumDate)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,double,countDownDuration)




//superclass pros UIControl
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,long long,contentHorizontalAlignment)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,long long,accessibilityNavigationStyle)





@end
