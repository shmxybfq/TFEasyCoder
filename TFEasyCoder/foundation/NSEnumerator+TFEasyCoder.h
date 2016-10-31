//
//  NSEnumerator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSEnumerator,NSEnumerator *);

@interface NSEnumerator (TFEasyCoder)

TF_EC_MSTATIC_INT(NSEnumerator, NSEnumerator *);
TF_EC_MINSTANCE_INT(NSEnumerator,NSEnumerator *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSEnumerator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSEnumerator ,long long,accessibilityNavigationStyle)





@end