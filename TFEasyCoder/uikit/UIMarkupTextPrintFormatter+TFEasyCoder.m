//
//  UIMarkupTextPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMarkupTextPrintFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMarkupTextPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMarkupTextPrintFormatter, UIMarkupTextPrintFormatter *);
TF_EC_MINSTANCE_IMP(UIMarkupTextPrintFormatter, UIMarkupTextPrintFormatter *);


TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,NSString *,markupText)




//superclass pros UIPrintFormatter
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,double,maximumContentHeight)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,double,maximumContentWidth)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,UIEdgeInsets,contentInsets)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,UIEdgeInsets,perPageContentInsets)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,long long,startPage)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMarkupTextPrintFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIMarkupTextPrintFormatter);


@end