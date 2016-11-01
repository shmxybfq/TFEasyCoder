//
//  UISimpleTextPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISimpleTextPrintFormatter,UISimpleTextPrintFormatter *);

@interface UISimpleTextPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(UISimpleTextPrintFormatter, UISimpleTextPrintFormatter *);
TF_EC_MINSTANCE_INT(UISimpleTextPrintFormatter,UISimpleTextPrintFormatter *);


TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSString *,text);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSAttributedString *,attributedText);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,UIFont *,font);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,UIColor *,color);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,long long,textAlignment);




//superclass pros UIPrintFormatter
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,double,maximumContentHeight);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,double,maximumContentWidth);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,UIEdgeInsets,contentInsets);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,UIEdgeInsets,perPageContentInsets);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,long long,startPage);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UISimpleTextPrintFormatter);


@end