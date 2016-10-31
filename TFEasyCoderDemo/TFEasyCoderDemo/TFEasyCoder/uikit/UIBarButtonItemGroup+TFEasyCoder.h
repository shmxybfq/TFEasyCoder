//
//  UIBarButtonItemGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBarButtonItemGroup,UIBarButtonItemGroup *);

@interface UIBarButtonItemGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBarButtonItemGroup, UIBarButtonItemGroup *);
TF_EC_MINSTANCE_INT(UIBarButtonItemGroup,UIBarButtonItemGroup *);


TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSArray *,barButtonItems);
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,UIBarButtonItem *,representativeItem);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,long long,accessibilityNavigationStyle)





@end