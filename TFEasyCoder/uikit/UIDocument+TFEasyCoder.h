//
//  UIDocument+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDocument,UIDocument *);

@interface UIDocument (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDocument, UIDocument *);
TF_EC_MINSTANCE_INT(UIDocument,UIDocument *);


TF_EC_CHAIN_PROP_INT(UIDocument ,NSDate *,fileModificationDate);
TF_EC_CHAIN_PROP_INT(UIDocument ,NSUndoManager *,undoManager);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDocument ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDocument ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDocument ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDocument ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDocument ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDocument ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDocument ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDocument ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDocument ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDocument ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDocument ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDocument ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDocument ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDocument ,long long,accessibilityNavigationStyle)





@end