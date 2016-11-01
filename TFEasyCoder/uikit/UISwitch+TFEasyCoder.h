//
//  UISwitch+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISwitch,UISwitch *);

@interface UISwitch (TFEasyCoder)

TF_EC_MSTATIC_INT(UISwitch, UISwitch *);
TF_EC_MINSTANCE_INT(UISwitch,UISwitch *);


TF_EC_CHAIN_PROP_INT(UISwitch ,UIColor *,onTintColor);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIColor *,thumbTintColor);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIImage *,onImage);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIImage *,offImage);
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,on);





//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UISwitch ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UISwitch ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UISwitch ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UISwitch ,long long,tag)
TF_EC_CHAIN_PROP_INT(UISwitch ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UISwitch ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UISwitch ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UISwitch ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UISwitch ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISwitch ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISwitch ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISwitch ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISwitch ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISwitch ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISwitch ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISwitch ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISwitch ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISwitch ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISwitch ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UISwitch);


@end
