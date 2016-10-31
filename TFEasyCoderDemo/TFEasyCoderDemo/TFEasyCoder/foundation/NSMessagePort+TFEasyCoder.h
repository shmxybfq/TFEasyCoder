//
//  NSMessagePort+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMessagePort,NSMessagePort *);

@interface NSMessagePort (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMessagePort, NSMessagePort *);
//TF_EC_MINSTANCE_INT(NSMessagePort,NSMessagePort *);






//superclass pros NSPort
//superclass pros NSObject
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,NSArray *,accessibilityElements)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,NSArray *,accessibilityCustomActions)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,BOOL,isAccessibilityElement)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,NSString *,accessibilityLabel)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,NSString *,accessibilityHint)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,NSString *,accessibilityValue)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,unsigned long long,accessibilityTraits)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,UIBezierPath *,accessibilityPath)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,CGPoint,accessibilityActivationPoint)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,NSString *,accessibilityLanguage)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,BOOL,accessibilityElementsHidden)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,BOOL,accessibilityViewIsModal)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,BOOL,shouldGroupAccessibilityChildren)
//TF_EC_CHAIN_PROP_INT(NSMessagePort ,long long,accessibilityNavigationStyle)





@end