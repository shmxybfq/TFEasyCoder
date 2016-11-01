//
//  UITextChecker+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextChecker,UITextChecker *);

@interface UITextChecker (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextChecker, UITextChecker *);
TF_EC_MINSTANCE_INT(UITextChecker,UITextChecker *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextChecker ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextChecker ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextChecker ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextChecker ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextChecker ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextChecker ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextChecker ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextChecker ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextChecker ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextChecker ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextChecker ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextChecker ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextChecker ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextChecker ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UITextChecker);


@end