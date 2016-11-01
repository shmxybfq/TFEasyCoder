//
//  NSFileSecurity+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileSecurity,NSFileSecurity *);

@interface NSFileSecurity (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileSecurity, NSFileSecurity *);
TF_EC_MINSTANCE_INT(NSFileSecurity,NSFileSecurity *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileSecurity ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSFileSecurity);


@end