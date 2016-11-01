//
//  NSURLAuthenticationChallenge+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLAuthenticationChallenge,NSURLAuthenticationChallenge *);

@interface NSURLAuthenticationChallenge (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLAuthenticationChallenge, NSURLAuthenticationChallenge *);
TF_EC_MINSTANCE_INT(NSURLAuthenticationChallenge,NSURLAuthenticationChallenge *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLAuthenticationChallenge ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSURLAuthenticationChallenge);


@end