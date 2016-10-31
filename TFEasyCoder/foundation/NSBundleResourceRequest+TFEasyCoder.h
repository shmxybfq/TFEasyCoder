//
//  NSBundleResourceRequest+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSBundleResourceRequest,NSBundleResourceRequest *);

@interface NSBundleResourceRequest (TFEasyCoder)

TF_EC_MSTATIC_INT(NSBundleResourceRequest, NSBundleResourceRequest *);
TF_EC_MINSTANCE_INT(NSBundleResourceRequest,NSBundleResourceRequest *);


TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,double,loadingPriority);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSBundleResourceRequest ,long long,accessibilityNavigationStyle)





@end