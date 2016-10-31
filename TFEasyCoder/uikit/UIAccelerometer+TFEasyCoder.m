//
//  UIAccelerometer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAccelerometer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAccelerometer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAccelerometer, UIAccelerometer *);
TF_EC_MINSTANCE_IMP(UIAccelerometer, UIAccelerometer *);


TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,double,updateInterval)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,id<UIAccelerometerDelegate>  ,delegate)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,long long,accessibilityNavigationStyle)





@end