//
//  NSParagraphStyle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSParagraphStyle,NSParagraphStyle *);

@interface NSParagraphStyle (TFEasyCoder)

TF_EC_MSTATIC_INT(NSParagraphStyle, NSParagraphStyle *);
TF_EC_MINSTANCE_INT(NSParagraphStyle,NSParagraphStyle *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSParagraphStyle ,long long,accessibilityNavigationStyle)





@end