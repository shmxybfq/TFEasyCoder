//
//  NSMassFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMassFormatter,NSMassFormatter *);

@interface NSMassFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMassFormatter, NSMassFormatter *);
TF_EC_MINSTANCE_INT(NSMassFormatter,NSMassFormatter *);


TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSNumberFormatter *,numberFormatter);
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,long long,unitStyle);
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,BOOL,forPersonMassUse);




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMassFormatter);


@end