//
//  NSOrthography+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSOrthography,NSOrthography *);

@interface NSOrthography (TFEasyCoder)

TF_EC_MSTATIC_INT(NSOrthography, NSOrthography *);
TF_EC_MINSTANCE_INT(NSOrthography,NSOrthography *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSOrthography ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSOrthography ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSOrthography ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSOrthography ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSOrthography ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSOrthography ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSOrthography ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSOrthography ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSOrthography ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSOrthography ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSOrthography ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSOrthography ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSOrthography ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSOrthography ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSOrthography);


@end