//
//  NSHTTPURLResponse+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSHTTPURLResponse,NSHTTPURLResponse *);

@interface NSHTTPURLResponse (TFEasyCoder)

TF_EC_MSTATIC_INT(NSHTTPURLResponse, NSHTTPURLResponse *);
TF_EC_MINSTANCE_INT(NSHTTPURLResponse,NSHTTPURLResponse *);






//superclass pros NSURLResponse
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSHTTPURLResponse ,long long,accessibilityNavigationStyle)





@end