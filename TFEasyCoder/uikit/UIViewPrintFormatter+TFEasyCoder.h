//
//  UIViewPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIViewPrintFormatter,UIViewPrintFormatter *);

@interface UIViewPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(UIViewPrintFormatter, UIViewPrintFormatter *);
TF_EC_MINSTANCE_INT(UIViewPrintFormatter,UIViewPrintFormatter *);






//superclass pros UIPrintFormatter
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,double,maximumContentHeight);
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,double,maximumContentWidth);
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,UIEdgeInsets,contentInsets);
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,UIEdgeInsets,perPageContentInsets);
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,long long,startPage);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIViewPrintFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIViewPrintFormatter);


@end