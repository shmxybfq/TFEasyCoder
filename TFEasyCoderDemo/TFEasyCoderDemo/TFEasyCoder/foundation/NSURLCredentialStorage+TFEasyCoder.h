//
//  NSURLCredentialStorage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLCredentialStorage,NSURLCredentialStorage *);

@interface NSURLCredentialStorage (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLCredentialStorage, NSURLCredentialStorage *);
TF_EC_MINSTANCE_INT(NSURLCredentialStorage,NSURLCredentialStorage *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLCredentialStorage ,long long,accessibilityNavigationStyle)





@end