//
//  NSSortDescriptor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSSortDescriptor,NSSortDescriptor *);

@interface NSSortDescriptor (TFEasyCoder)

TF_EC_MSTATIC_INT(NSSortDescriptor, NSSortDescriptor *);
TF_EC_MINSTANCE_INT(NSSortDescriptor,NSSortDescriptor *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSSortDescriptor ,long long,accessibilityNavigationStyle)





@end