//
//  NSURLConnection+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLConnection,NSURLConnection *);

@interface NSURLConnection (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLConnection, NSURLConnection *);
TF_EC_MINSTANCE_INT(NSURLConnection,NSURLConnection *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLConnection ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLConnection ,long long,accessibilityNavigationStyle)





@end