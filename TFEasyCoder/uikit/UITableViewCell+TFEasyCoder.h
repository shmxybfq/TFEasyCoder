//
//  UITableViewCell+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableViewCell,UITableViewCell *);

@interface UITableViewCell (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableViewCell, UITableViewCell *);
TF_EC_MINSTANCE_INT(UITableViewCell,UITableViewCell *);


TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIView *,backgroundView);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIView *,selectedBackgroundView);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIView *,multipleSelectionBackgroundView);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,selectionStyle);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,showsReorderControl);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,shouldIndentWhileEditing);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,accessoryType);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIView *,accessoryView);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,editingAccessoryType);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIView *,editingAccessoryView);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,indentationLevel);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,double,indentationWidth);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIEdgeInsets,separatorInset);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,editing);
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,focusStyle);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,tag)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITableViewCell ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITableViewCell ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITableViewCell ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UITableViewCell);


@end
