//
//  UISimpleTextPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISimpleTextPrintFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISimpleTextPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISimpleTextPrintFormatter, UISimpleTextPrintFormatter *);
TF_EC_MINSTANCE_IMP(UISimpleTextPrintFormatter, UISimpleTextPrintFormatter *);


TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSString *,text)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,UIColor *,color)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,long long,textAlignment)




//superclass pros UIPrintFormatter
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,double,maximumContentHeight)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,double,maximumContentWidth)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,UIEdgeInsets,contentInsets)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,UIEdgeInsets,perPageContentInsets)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,long long,startPage)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,long long,accessibilityNavigationStyle)





@end