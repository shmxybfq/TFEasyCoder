//
//  UIPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrintFormatter,UIPrintFormatter *);

@interface UIPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrintFormatter, UIPrintFormatter *);
TF_EC_MINSTANCE_INT(UIPrintFormatter,UIPrintFormatter *);


TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,double,maximumContentHeight);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,double,maximumContentWidth);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,UIEdgeInsets,contentInsets);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,UIEdgeInsets,perPageContentInsets);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,long long,startPage);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,long long,accessibilityNavigationStyle)





@end