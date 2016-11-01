//
//  UITextField+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextField,UITextField *);

@interface UITextField (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextField, UITextField *);
TF_EC_MINSTANCE_INT(UITextField,UITextField *);



TF_EC_CHAIN_PROP_INT(UITextField ,NSString *,text)
TF_EC_CHAIN_PROP_INT(UITextField ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_INT(UITextField ,UIColor *,textColor)
TF_EC_CHAIN_PROP_INT(UITextField ,UIFont *,font)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,textAlignment)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,borderStyle)
TF_EC_CHAIN_PROP_INT(UITextField ,NSDictionary *,defaultTextAttributes)
TF_EC_CHAIN_PROP_INT(UITextField ,NSString *,placeholder)
TF_EC_CHAIN_PROP_INT(UITextField ,NSAttributedString *,attributedPlaceholder)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,clearsOnBeginEditing)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,adjustsFontSizeToFitWidth)
TF_EC_CHAIN_PROP_INT(UITextField ,double,minimumFontSize)
TF_EC_CHAIN_PROP_INT(UITextField ,id<UITextFieldDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UITextField ,UIImage *,background)
TF_EC_CHAIN_PROP_INT(UITextField ,UIImage *,disabledBackground)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,allowsEditingTextAttributes)
TF_EC_CHAIN_PROP_INT(UITextField ,NSDictionary *,typingAttributes)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,clearButtonMode)
TF_EC_CHAIN_PROP_INT(UITextField ,UIView *,leftView)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,leftViewMode)
TF_EC_CHAIN_PROP_INT(UITextField ,UIView *,rightView)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,rightViewMode)
TF_EC_CHAIN_PROP_INT(UITextField ,UIView *,inputView)
TF_EC_CHAIN_PROP_INT(UITextField ,UIView *,inputAccessoryView)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,clearsOnInsertion)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,autocapitalizationType)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,autocorrectionType)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,spellCheckingType)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,keyboardType)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,keyboardAppearance)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,returnKeyType)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,enablesReturnKeyAutomatically)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,secureTextEntry)
TF_EC_CHAIN_PROP_INT(UITextField ,NSDictionary *,markedTextStyle)
TF_EC_CHAIN_PROP_INT(UITextField ,id<UITextInputDelegate>  ,inputDelegate)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,selectionAffinity)





//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UITextField ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UITextField ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UITextField ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,tag)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UITextField ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UITextField ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UITextField ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITextField ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextField ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextField ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextField ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextField ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextField ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextField ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextField ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextField ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextField ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextField ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextField ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UITextField);


@end
