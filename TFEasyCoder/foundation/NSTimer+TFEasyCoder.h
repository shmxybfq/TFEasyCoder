//
//  NSTimer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTimer,NSTimer *);

@interface NSTimer (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTimer, NSTimer *);
TF_EC_MINSTANCE_INT(NSTimer,NSTimer *);


TF_EC_CHAIN_PROP_INT(NSTimer ,NSDate *,fireDate);
TF_EC_CHAIN_PROP_INT(NSTimer ,double,tolerance);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSTimer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSTimer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSTimer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSTimer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSTimer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSTimer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSTimer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSTimer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSTimer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSTimer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSTimer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSTimer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSTimer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSTimer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSTimer);


@end