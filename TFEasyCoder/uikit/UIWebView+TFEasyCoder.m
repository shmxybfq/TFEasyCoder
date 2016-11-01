//
//  UIWebView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIWebView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UIWebView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIWebView, UIWebView *);
TF_EC_MINSTANCE_IMP(UIWebView, UIWebView *);


TF_EC_CHAIN_PROP_IMP(UIWebView ,id<UIWebViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,scalesPageToFit)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,detectsPhoneNumbers)
TF_EC_CHAIN_PROP_IMP(UIWebView ,unsigned long long,dataDetectorTypes)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,allowsInlineMediaPlayback)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,mediaPlaybackRequiresUserAction)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,mediaPlaybackAllowsAirPlay)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,suppressesIncrementalRendering)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,keyboardDisplayRequiresUserAction)
TF_EC_CHAIN_PROP_IMP(UIWebView ,long long,paginationMode)
TF_EC_CHAIN_PROP_IMP(UIWebView ,long long,paginationBreakingMode)
TF_EC_CHAIN_PROP_IMP(UIWebView ,double,pageLength)
TF_EC_CHAIN_PROP_IMP(UIWebView ,double,gapBetweenPages)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,allowsPictureInPictureMediaPlayback)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,allowsLinkPreview)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIWebView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIWebView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIWebView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIWebView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIWebView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIWebView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIWebView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIWebView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIWebView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIWebView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIWebView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIWebView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIWebView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIWebView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIWebView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIWebView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIWebView ,long long,accessibilityNavigationStyle)





@end
