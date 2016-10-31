//
//  NSPersonNameComponents+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPersonNameComponents,NSPersonNameComponents *);

@interface NSPersonNameComponents (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPersonNameComponents, NSPersonNameComponents *);
TF_EC_MINSTANCE_INT(NSPersonNameComponents,NSPersonNameComponents *);


TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,namePrefix);
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,givenName);
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,middleName);
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,familyName);
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,nameSuffix);
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,nickname);
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSPersonNameComponents *,phoneticRepresentation);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponents ,long long,accessibilityNavigationStyle)





@end