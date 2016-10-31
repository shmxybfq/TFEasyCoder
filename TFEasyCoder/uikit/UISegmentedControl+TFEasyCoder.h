//
//  UISegmentedControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISegmentedControl,UISegmentedControl *);

@interface UISegmentedControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UISegmentedControl, UISegmentedControl *);
TF_EC_MINSTANCE_INT(UISegmentedControl,UISegmentedControl *);


TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,segmentedControlStyle);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,momentary);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,apportionsSegmentWidthsByContent);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,selectedSegmentIndex);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,UIColor *,tintColor);




//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,tag)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,accessibilityNavigationStyle)





@end