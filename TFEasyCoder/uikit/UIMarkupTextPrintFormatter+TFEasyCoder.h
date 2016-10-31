//
//  UIMarkupTextPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMarkupTextPrintFormatter,UIMarkupTextPrintFormatter *);

@interface UIMarkupTextPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMarkupTextPrintFormatter, UIMarkupTextPrintFormatter *);
TF_EC_MINSTANCE_INT(UIMarkupTextPrintFormatter,UIMarkupTextPrintFormatter *);


TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSString *,markupText);




//superclass pros UIPrintFormatter
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,double,maximumContentHeight);
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,double,maximumContentWidth);
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,UIEdgeInsets,contentInsets);
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,UIEdgeInsets,perPageContentInsets);
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,long long,startPage);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,long long,accessibilityNavigationStyle)





@end