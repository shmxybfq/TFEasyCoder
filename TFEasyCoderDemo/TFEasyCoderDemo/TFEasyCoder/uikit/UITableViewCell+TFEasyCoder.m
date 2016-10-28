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

@end