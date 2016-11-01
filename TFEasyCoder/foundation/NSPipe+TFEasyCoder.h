//
//  NSPipe+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPipe,NSPipe *);

@interface NSPipe (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPipe, NSPipe *);
TF_EC_MINSTANCE_INT(NSPipe,NSPipe *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPipe ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPipe ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPipe ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPipe ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPipe ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPipe ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPipe ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPipe ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPipe ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPipe ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPipe ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPipe ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPipe ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPipe ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSPipe);


@end