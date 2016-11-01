//
//  NSDirectoryEnumerator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDirectoryEnumerator,NSDirectoryEnumerator *);

@interface NSDirectoryEnumerator (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDirectoryEnumerator, NSDirectoryEnumerator *);
TF_EC_MINSTANCE_INT(NSDirectoryEnumerator,NSDirectoryEnumerator *);






//superclass pros NSEnumerator
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDirectoryEnumerator ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSDirectoryEnumerator);


@end