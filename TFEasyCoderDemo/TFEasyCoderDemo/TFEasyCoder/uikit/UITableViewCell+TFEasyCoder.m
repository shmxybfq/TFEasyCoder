//
//  UITableViewCell+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewCell+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableViewCell (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableViewCell, UITableViewCell *);
TF_EC_MINSTANCE_IMP(UITableViewCell, UITableViewCell *);


TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIView *,backgroundView)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIView *,selectedBackgroundView)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIView *,multipleSelectionBackgroundView)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,selectionStyle)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,showsReorderControl)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,shouldIndentWhileEditing)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,accessoryType)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIView *,accessoryView)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,editingAccessoryType)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIView *,editingAccessoryView)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,indentationLevel)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,double,indentationWidth)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIEdgeInsets,separatorInset)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,editing)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,focusStyle)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITableViewCell ,long long,accessibilityNavigationStyle)





@end