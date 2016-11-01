//
//  UIImage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIImage,UIImage *);

@interface UIImage (TFEasyCoder)

TF_EC_MSTATIC_INT(UIImage, UIImage *);
TF_EC_MINSTANCE_INT(UIImage,UIImage *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIImage ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIImage ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIImage ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIImage ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIImage ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIImage ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIImage ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIImage ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIImage ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIImage ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIImage ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIImage ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIImage ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIImage ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIImage);


@end