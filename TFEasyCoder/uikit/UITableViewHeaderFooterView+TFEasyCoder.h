//
//  UITableViewHeaderFooterView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableViewHeaderFooterView,UITableViewHeaderFooterView *);

@interface UITableViewHeaderFooterView (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableViewHeaderFooterView, UITableViewHeaderFooterView *);
TF_EC_MINSTANCE_INT(UITableViewHeaderFooterView,UITableViewHeaderFooterView *);


TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,UIView *,backgroundView)




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,long long,accessibilityNavigationStyle)





@end
