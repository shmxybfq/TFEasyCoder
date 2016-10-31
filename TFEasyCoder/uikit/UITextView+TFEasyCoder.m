//
//  UITextView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextView, UITextView *);
TF_EC_MINSTANCE_IMP(UITextView, UITextView *);


TF_EC_CHAIN_PROP_IMP(UITextView ,id<UITextViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSString *,text)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIColor *,textColor)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,textAlignment)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,editable)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,selectable)
TF_EC_CHAIN_PROP_IMP(UITextView ,unsigned long long,dataDetectorTypes)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,allowsEditingTextAttributes)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSDictionary *,typingAttributes)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIView *,inputView)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIView *,inputAccessoryView)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,clearsOnInsertion)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIEdgeInsets,textContainerInset)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSDictionary *,linkTextAttributes)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,autocapitalizationType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,autocorrectionType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,spellCheckingType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,keyboardType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,keyboardAppearance)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,returnKeyType)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,enablesReturnKeyAutomatically)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,secureTextEntry)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSDictionary *,markedTextStyle)
TF_EC_CHAIN_PROP_IMP(UITextView ,id<UITextInputDelegate>  ,inputDelegate)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,selectionAffinity)




//superclass pros UIScrollView
TF_EC_CHAIN_PROP_IMP(UITextView ,CGPoint,contentOffset)
TF_EC_CHAIN_PROP_IMP(UITextView ,CGSize,contentSize)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIEdgeInsets,contentInset)
TF_EC_CHAIN_PROP_IMP(UITextView ,id<UIScrollViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,directionalLockEnabled)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,bounces)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,alwaysBounceVertical)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,alwaysBounceHorizontal)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,pagingEnabled)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,scrollEnabled)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,showsHorizontalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,showsVerticalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIEdgeInsets,scrollIndicatorInsets)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,indicatorStyle)
TF_EC_CHAIN_PROP_IMP(UITextView ,double,decelerationRate)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,delaysContentTouches)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,canCancelContentTouches)
TF_EC_CHAIN_PROP_IMP(UITextView ,double,minimumZoomScale)
TF_EC_CHAIN_PROP_IMP(UITextView ,double,maximumZoomScale)
TF_EC_CHAIN_PROP_IMP(UITextView ,double,zoomScale)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,bouncesZoom)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,scrollsToTop)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,keyboardDismissMode)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UITextView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UITextView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITextView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,accessibilityNavigationStyle)





@end