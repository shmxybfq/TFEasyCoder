//
//  UIViewPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIViewPrintFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIViewPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIViewPrintFormatter, UIViewPrintFormatter *);
TF_EC_MINSTANCE_IMP(UIViewPrintFormatter, UIViewPrintFormatter *);






//superclass pros UIPrintFormatter
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,double,maximumContentHeight)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,double,maximumContentWidth)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,UIEdgeInsets,contentInsets)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,UIEdgeInsets,perPageContentInsets)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,long long,startPage)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIViewPrintFormatter ,long long,accessibilityNavigationStyle)





@end