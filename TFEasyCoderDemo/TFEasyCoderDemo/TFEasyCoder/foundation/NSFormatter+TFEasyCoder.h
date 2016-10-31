//
//  NSFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFormatter,NSFormatter *);

@interface NSFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFormatter, NSFormatter *);
TF_EC_MINSTANCE_INT(NSFormatter,NSFormatter *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFormatter ,long long,accessibilityNavigationStyle)





@end