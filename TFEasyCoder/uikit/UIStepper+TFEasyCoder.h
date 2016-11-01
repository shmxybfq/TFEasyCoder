//
//  UIStepper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIStepper,UIStepper *);

@interface UIStepper (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStepper, UIStepper *);
TF_EC_MINSTANCE_INT(UIStepper,UIStepper *);


TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,continuous);
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,autorepeat);
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,wraps);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,value);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,minimumValue);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,maximumValue);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,stepValue);
TF_EC_CHAIN_PROP_INT(UIStepper ,UIColor *,tintColor);




//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIStepper ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UIStepper ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIStepper ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIStepper ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIStepper ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIStepper ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIStepper ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIStepper ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIStepper ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIStepper ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIStepper ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIStepper ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIStepper ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIStepper ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIStepper ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIStepper ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIStepper ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIStepper ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIStepper ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIStepper);


@end
