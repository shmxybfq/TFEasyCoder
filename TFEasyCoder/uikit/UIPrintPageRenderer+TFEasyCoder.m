//
//  UIPrintPageRenderer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintPageRenderer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrintPageRenderer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrintPageRenderer, UIPrintPageRenderer *);
TF_EC_MINSTANCE_IMP(UIPrintPageRenderer, UIPrintPageRenderer *);


TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,double,headerHeight)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,double,footerHeight)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSArray *,printFormatters)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPrintPageRenderer);


@end