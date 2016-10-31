//
//  NSStringDrawingContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSStringDrawingContext,NSStringDrawingContext *);

@interface NSStringDrawingContext (TFEasyCoder)

TF_EC_MSTATIC_INT(NSStringDrawingContext, NSStringDrawingContext *);
TF_EC_MINSTANCE_INT(NSStringDrawingContext,NSStringDrawingContext *);

TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,double,minimumTrackingAdjustment)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,double,minimumScaleFactor)




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,long long,accessibilityNavigationStyle)





@end