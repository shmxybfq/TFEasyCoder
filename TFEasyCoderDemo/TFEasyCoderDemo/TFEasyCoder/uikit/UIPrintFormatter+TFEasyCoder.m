//
//  UIPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrintFormatter, UIPrintFormatter *);
TF_EC_MINSTANCE_IMP(UIPrintFormatter, UIPrintFormatter *);


TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,double,maximumContentHeight)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,double,maximumContentWidth)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,UIEdgeInsets,contentInsets)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,UIEdgeInsets,perPageContentInsets)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,long long,startPage)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,long long,accessibilityNavigationStyle)





@end