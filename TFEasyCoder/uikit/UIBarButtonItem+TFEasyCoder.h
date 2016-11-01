//
//  UIBarButtonItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBarButtonItem,UIBarButtonItem *);

@interface UIBarButtonItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBarButtonItem, UIBarButtonItem *);
TF_EC_MINSTANCE_INT(UIBarButtonItem,UIBarButtonItem *);


TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,enabled)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIEdgeInsets,imageInsets)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,long long,style)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,double,width)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSSet *,possibleTitles)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIView *,customView)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,SEL,action)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIColor *,tintColor)





//superclass pros UIBarItem
//TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIImage *,landscapeImagePhone);
//TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIEdgeInsets,imageInsets);
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIEdgeInsets,landscapeImagePhoneInsets);
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,long long,tag);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIBarButtonItem);


@end
