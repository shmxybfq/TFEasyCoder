//
//  NSURLResponse+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLResponse,NSURLResponse *);

@interface NSURLResponse (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLResponse, NSURLResponse *);
TF_EC_MINSTANCE_INT(NSURLResponse,NSURLResponse *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLResponse ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLResponse ,long long,accessibilityNavigationStyle)





@end