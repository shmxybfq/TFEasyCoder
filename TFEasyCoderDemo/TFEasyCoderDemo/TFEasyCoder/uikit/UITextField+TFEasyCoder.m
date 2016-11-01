//
//  UITextField+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextField+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextField (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextField, UITextField *);
TF_EC_MINSTANCE_IMP(UITextField, UITextField *);


TF_EC_CHAIN_PROP_IMP(UITextField ,NSString *,text)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIColor *,textColor)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,textAlignment)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,borderStyle)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSDictionary *,defaultTextAttributes)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSString *,placeholder)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSAttributedString *,attributedPlaceholder)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,clearsOnBeginEditing)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,adjustsFontSizeToFitWidth)
TF_EC_CHAIN_PROP_IMP(UITextField ,double,minimumFontSize)
TF_EC_CHAIN_PROP_IMP(UITextField ,id<UITextFieldDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIImage *,background)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIImage *,disabledBackground)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,allowsEditingTextAttributes)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSDictionary *,typingAttributes)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,clearButtonMode)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIView *,leftView)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,leftViewMode)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIView *,rightView)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,rightViewMode)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIView *,inputView)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIView *,inputAccessoryView)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,clearsOnInsertion)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,autocapitalizationType)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,autocorrectionType)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,spellCheckingType)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,keyboardType)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,keyboardAppearance)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,returnKeyType)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,enablesReturnKeyAutomatically)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,secureTextEntry)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSDictionary *,markedTextStyle)
TF_EC_CHAIN_PROP_IMP(UITextField ,id<UITextInputDelegate>  ,inputDelegate)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,selectionAffinity)




//superclass pros UIControl
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,contentHorizontalAlignment)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UITextField ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UITextField ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UITextField ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITextField ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextField ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextField ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextField ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextField ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextField ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextField ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextField ,long long,accessibilityNavigationStyle)





@end
