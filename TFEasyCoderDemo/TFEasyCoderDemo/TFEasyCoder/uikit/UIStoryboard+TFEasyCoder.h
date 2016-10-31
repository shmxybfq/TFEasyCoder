//
//  UIStoryboard+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIStoryboard,UIStoryboard *);

@interface UIStoryboard (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStoryboard, UIStoryboard *);
TF_EC_MINSTANCE_INT(UIStoryboard,UIStoryboard *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIStoryboard ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIStoryboard ,long long,accessibilityNavigationStyle)





@end