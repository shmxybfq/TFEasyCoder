//
//  NSShadow+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSShadow,NSShadow *);

@interface NSShadow (TFEasyCoder)

TF_EC_MSTATIC_INT(NSShadow, NSShadow *);
TF_EC_MINSTANCE_INT(NSShadow,NSShadow *);


TF_EC_CHAIN_PROP_INT(NSShadow ,CGSize,shadowOffset);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSShadow ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSShadow ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSShadow ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSShadow ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSShadow ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSShadow ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSShadow ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSShadow ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSShadow ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSShadow ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSShadow ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSShadow ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSShadow ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSShadow ,long long,accessibilityNavigationStyle)





@end