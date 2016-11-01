//
//  UIActionSheet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_BLOCK(UIActionSheet,UIActionSheet *);

@interface UIActionSheet (TFEasyCoder)

TF_EC_MSTATIC_INT(UIActionSheet, UIActionSheet *);
TF_EC_MINSTANCE_INT(UIActionSheet,UIActionSheet *);


TF_EC_CHAIN_PROP_INT(UIActionSheet ,id<UIActionSheetDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,actionSheetStyle);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,cancelButtonIndex);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,destructiveButtonIndex);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIActionSheet ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,accessibilityNavigationStyle)





@end
