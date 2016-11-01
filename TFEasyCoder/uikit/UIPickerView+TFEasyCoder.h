//
//  UIPickerView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPickerView,UIPickerView *);

@interface UIPickerView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPickerView, UIPickerView *);
TF_EC_MINSTANCE_INT(UIPickerView,UIPickerView *);


TF_EC_CHAIN_PROP_INT(UIPickerView ,id<UIPickerViewDataSource>,dataSource);
TF_EC_CHAIN_PROP_INT(UIPickerView ,id<UIPickerViewDelegate>,delegate);
TF_EC_CHAIN_PROP_INT(UIPickerView ,BOOL,showsSelectionIndicator);





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIPickerView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIPickerView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIPickerView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIPickerView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIPickerView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIPickerView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIPickerView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIPickerView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPickerView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPickerView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPickerView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPickerView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPickerView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPickerView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPickerView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPickerView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPickerView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPickerView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPickerView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPickerView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPickerView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPickerView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPickerView);


@end
