//
//  UIPickerView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPickerView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPickerView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPickerView, UIPickerView *);
TF_EC_MINSTANCE_IMP(UIPickerView, UIPickerView *);


TF_EC_CHAIN_PROP_IMP(UIPickerView ,id<UIPickerViewDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,id<UIPickerViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,BOOL,showsSelectionIndicator)





//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIPickerView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIPickerView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPickerView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,long long,accessibilityNavigationStyle)





@end
