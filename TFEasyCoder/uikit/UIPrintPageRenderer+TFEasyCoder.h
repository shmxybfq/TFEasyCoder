//
//  UIPrintPageRenderer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrintPageRenderer,UIPrintPageRenderer *);

@interface UIPrintPageRenderer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrintPageRenderer, UIPrintPageRenderer *);
TF_EC_MINSTANCE_INT(UIPrintPageRenderer,UIPrintPageRenderer *);


TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,double,headerHeight);
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,double,footerHeight);
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSArray *,printFormatters);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPrintPageRenderer);


@end