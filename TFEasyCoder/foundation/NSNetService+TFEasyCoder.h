//
//  NSNetService+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNetService,NSNetService *);

@interface NSNetService (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNetService, NSNetService *);
TF_EC_MINSTANCE_INT(NSNetService,NSNetService *);


TF_EC_CHAIN_PROP_INT(NSNetService ,id<NSNetServiceDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSNetService ,BOOL,includesPeerToPeer);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSNetService ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSNetService ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSNetService ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSNetService ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSNetService ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSNetService ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSNetService ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSNetService ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSNetService ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSNetService ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSNetService ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSNetService ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSNetService ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSNetService ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSNetService);


@end