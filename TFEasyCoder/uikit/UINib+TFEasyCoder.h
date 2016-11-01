//
//  UINib+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UINib,UINib *);

@interface UINib (TFEasyCoder)

TF_EC_MSTATIC_INT(UINib, UINib *);
TF_EC_MINSTANCE_INT(UINib,UINib *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UINib ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UINib ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UINib ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UINib ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UINib ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UINib ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UINib ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UINib ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UINib ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UINib ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UINib ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UINib ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UINib ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UINib ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UINib);


@end