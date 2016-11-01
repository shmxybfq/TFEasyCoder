//
//  UIActionSheet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActionSheet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIActionSheet (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActionSheet, UIActionSheet *);
TF_EC_MINSTANCE_IMP(UIActionSheet, UIActionSheet *);


TF_EC_CHAIN_PROP_IMP(UIActionSheet ,id<UIActionSheetDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,actionSheetStyle)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,cancelButtonIndex)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,destructiveButtonIndex)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIActionSheet);


@end
