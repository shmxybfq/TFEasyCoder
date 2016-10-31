//
//  UIAccelerometer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

TF_EC_BLOCK(UIAccelerometer,UIAccelerometer *);

@interface UIAccelerometer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAccelerometer, UIAccelerometer *);
TF_EC_MINSTANCE_INT(UIAccelerometer,UIAccelerometer *);


TF_EC_CHAIN_PROP_INT(UIAccelerometer ,double,updateInterval);
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,id<UIAccelerometerDelegate> ,delegate);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,long long,accessibilityNavigationStyle)





@end