//
//  NSDataDetector+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDataDetector,NSDataDetector *);

@interface NSDataDetector (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDataDetector, NSDataDetector *);
TF_EC_MINSTANCE_INT(NSDataDetector,NSDataDetector *);






//superclass pros NSRegularExpression
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDataDetector ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDataDetector ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSDataDetector);


@end