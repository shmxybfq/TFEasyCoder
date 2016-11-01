//
//  UIInputView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIInputView,UIInputView *);

@interface UIInputView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIInputView, UIInputView *);
TF_EC_MINSTANCE_INT(UIInputView,UIInputView *);


TF_EC_CHAIN_PROP_INT(UIInputView ,BOOL,allowsSelfSizing);





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIInputView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIInputView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIInputView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIInputView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIInputView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIInputView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIInputView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIInputView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIInputView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIInputView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIInputView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIInputView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIInputView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIInputView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIInputView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIInputView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIInputView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIInputView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIInputView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIInputView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIInputView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIInputView ,long long,accessibilityNavigationStyle)





@end
