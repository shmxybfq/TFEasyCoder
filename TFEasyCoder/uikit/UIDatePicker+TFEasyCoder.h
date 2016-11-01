//
//  UIDatePicker+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDatePicker,UIDatePicker *);

@interface UIDatePicker (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDatePicker, UIDatePicker *);
TF_EC_MINSTANCE_INT(UIDatePicker,UIDatePicker *);


TF_EC_CHAIN_PROP_INT(UIDatePicker ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,double,minuteInterval)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,long long,datePickerMode)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSLocale *,locale)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSDate *,date)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSDate *,minimumDate)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSDate *,maximumDate)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,double,countDownDuration)





//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIDatePicker ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UIDatePicker ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIDatePicker ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,long long,accessibilityNavigationStyle)





@end
