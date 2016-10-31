//
//  NSStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSStream,NSStream *);

@interface NSStream (TFEasyCoder)

TF_EC_MSTATIC_INT(NSStream, NSStream *);
TF_EC_MINSTANCE_INT(NSStream,NSStream *);


TF_EC_CHAIN_PROP_INT(NSStream ,id<NSStreamDelegate> ,delegate);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSStream ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSStream ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSStream ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSStream ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSStream ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSStream ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSStream ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSStream ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSStream ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSStream ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSStream ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSStream ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSStream ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSStream ,long long,accessibilityNavigationStyle)





@end