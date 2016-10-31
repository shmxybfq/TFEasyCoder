//
//  UIStackView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIStackView,UIStackView *);

@interface UIStackView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStackView, UIStackView *);
TF_EC_MINSTANCE_INT(UIStackView,UIStackView *);


TF_EC_CHAIN_PROP_INT(UIStackView ,long long,axis);
TF_EC_CHAIN_PROP_INT(UIStackView ,long long,distribution);
TF_EC_CHAIN_PROP_INT(UIStackView ,long long,alignment);
TF_EC_CHAIN_PROP_INT(UIStackView ,double,spacing);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIStackView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIStackView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIStackView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIStackView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIStackView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIStackView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIStackView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIStackView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIStackView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIStackView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIStackView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIStackView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIStackView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIStackView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIStackView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIStackView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIStackView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIStackView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIStackView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIStackView ,long long,accessibilityNavigationStyle)





@end