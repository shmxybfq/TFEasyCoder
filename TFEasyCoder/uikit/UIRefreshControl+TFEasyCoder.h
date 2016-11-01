//
//  UIRefreshControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIRefreshControl,UIRefreshControl *);

@interface UIRefreshControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UIRefreshControl, UIRefreshControl *);
TF_EC_MINSTANCE_INT(UIRefreshControl,UIRefreshControl *);


TF_EC_CHAIN_PROP_INT(UIRefreshControl ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSAttributedString *,attributedTitle);




//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,long long,accessibilityNavigationStyle)





@end
