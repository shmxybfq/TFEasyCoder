//
//  UIDynamicItemGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDynamicItemGroup,UIDynamicItemGroup *);

@interface UIDynamicItemGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDynamicItemGroup, UIDynamicItemGroup *);
TF_EC_MINSTANCE_INT(UIDynamicItemGroup,UIDynamicItemGroup *);


TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,CGPoint,center);
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,CGAffineTransform,transform)




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIDynamicItemGroup);


@end