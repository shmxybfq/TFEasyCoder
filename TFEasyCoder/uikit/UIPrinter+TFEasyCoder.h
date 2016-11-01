//
//  UIPrinter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrinter,UIPrinter *);

@interface UIPrinter (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrinter, UIPrinter *);
TF_EC_MINSTANCE_INT(UIPrinter,UIPrinter *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPrinter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPrinter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPrinter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPrinter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPrinter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPrinter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPrinter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPrinter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPrinter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPrinter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPrinter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPrinter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPrinter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPrinter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPrinter);


@end