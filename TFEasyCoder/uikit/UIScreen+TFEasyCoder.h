//
//  UIScreen+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIScreen,UIScreen *);

@interface UIScreen (TFEasyCoder)

TF_EC_MSTATIC_INT(UIScreen, UIScreen *);
TF_EC_MINSTANCE_INT(UIScreen,UIScreen *);

TF_EC_CHAIN_PROP_INT(UIScreen ,UIScreenMode *,currentMode)
TF_EC_CHAIN_PROP_INT(UIScreen ,long long,overscanCompensation)
TF_EC_CHAIN_PROP_INT(UIScreen ,double,brightness)
TF_EC_CHAIN_PROP_INT(UIScreen ,BOOL,wantsSoftwareDimming)






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIScreen ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIScreen ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIScreen ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIScreen ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIScreen ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIScreen ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIScreen ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIScreen ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIScreen ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIScreen ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIScreen ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIScreen ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIScreen ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIScreen ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIScreen);


@end