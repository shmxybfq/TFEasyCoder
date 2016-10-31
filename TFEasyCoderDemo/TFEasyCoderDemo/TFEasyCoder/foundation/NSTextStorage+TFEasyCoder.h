//
//  NSTextStorage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTextStorage,NSTextStorage *);

@interface NSTextStorage (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTextStorage, NSTextStorage *);
TF_EC_MINSTANCE_INT(NSTextStorage,NSTextStorage *);


TF_EC_CHAIN_PROP_INT(NSTextStorage ,id<NSTextStorageDelegate> ,delegate);




//superclass pros NSMutableAttributedString
//superclass pros NSAttributedString
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSTextStorage ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSTextStorage ,long long,accessibilityNavigationStyle)





@end