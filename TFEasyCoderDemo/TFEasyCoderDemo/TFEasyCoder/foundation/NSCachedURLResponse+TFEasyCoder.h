//
//  NSCachedURLResponse+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCachedURLResponse,NSCachedURLResponse *);

@interface NSCachedURLResponse (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCachedURLResponse, NSCachedURLResponse *);
TF_EC_MINSTANCE_INT(NSCachedURLResponse,NSCachedURLResponse *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCachedURLResponse ,long long,accessibilityNavigationStyle)





@end