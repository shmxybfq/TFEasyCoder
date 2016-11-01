
# TFEasyCoder

* 一个可以用copy和paste提高编程效率的框架:为UIKit和Foundation的所有公开类添加了快速创建对象的方法并且为这些类的所有非私有属性添加了链式编程方法.
___

## Summary

* Introduction
* What can do	
* Installation
* How To Use
* All the support classess
* About coder


## Introduction

一个可以用copy和paste来提高编程效率的框架:
* 为UIKit和Foundation的所有公开类添加了快速创建对象的方法
* 为以上所有类的所有非私有属性添加了链式编程方法.

## What can do

 *  快速创建对象.
 *  链式编程式对UIKit 和 Foundation非私有类的所有非私有属性赋值.
 *  利用copy 和 paste 实现快速编程
 
## Installation


####所有文件:
>TFEasyCoder
 * TFEasyCoder.h
 * TFEasyCoderConst.h
 * NSObject+TFExecute.h
 * NSObject+TFExecute.m
 * ca(Folder:(All the categories files:46))
 * uikit(Folder:(All the categories files:336))
 * foundation(Folder:(All the categories files:322))
 
#####将"TFEasyCoder"文件夹拖入项目中,然后将TFEasyCoder.h导入项目.
 * Tips:`ca`,`uikit`,`foundation`三个文件夹分别包含:
 <br/>uikit:uikit - category 文件夹
 <br/>foundation:foundation - category 文件夹
 <br/>ca:ca - category 文件夹
 
`你可以选择性的导入自己想用的文件夹,然后从TFEasyCoder.h中删除相关的import即可`
 

## How To Use



###快速创建一个对象

```Objective-c

   __weak typeof(self) weakSelf = self;
    [UILabel easyCoder:^(UILabel *ins) {
        
        weakSelf.titleLabel = ins;
        [weakSelf.view addSubview:ins];
        
        ins.textAlignment = NSTextAlignmentCenter;
        ins.textColor = [UIColor blackColor];
        ins.font = [UIFont systemFontOfSize:14.f];
        ins.backgroundColor = [UIColor grayColor];
        ins.text = @"我是文字框~";
        ins.frame = CGRectMake(0, 0, 100, 100);
        ins.center = weakSelf.view.center;
        
    }];
    

```


###快速操作一个对象

```Objective-c

    __weak typeof(self) weakSelf = self;

    [self.actionButton easyCoder:^(UIButton *ins) {
        
        [weakSelf.view addSubview:ins];
        
        ins.frame = CGRectMake(0, 0, 100, 100);
        ins.center = CGPointMake(weakSelf.view.center.x, weakSelf.view.center.y - 150);
        
        [ins setTitle:@"点我" forState:UIControlStateNormal];
        [ins setTitle:@"点我" forState:UIControlStateHighlighted];
        
        [ins setImage:[UIImage imageNamed:@"test"] forState:UIControlStateNormal];
        [ins setImage:[UIImage imageNamed:@"test"] forState:UIControlStateHighlighted];
       
        [ins addTarget:weakSelf
                action:@selector(tectAction)
      forControlEvents:UIControlEventTouchUpInside];
        
    }];
    

```



###链式为属性赋值

```Objective-c

        __weak typeof(self) weakSelf = self;
        [UILabel easyCoder:^(UILabel *ins) {
    
            weakSelf.titleLabel = ins;
            [weakSelf.view addSubview:ins];
    
            ins
            .set_textAlignment(NSTextAlignmentCenter)
            .set_textColor([UIColor brownColor])
            .set_text(@"哈哈")
            .set_font([UIFont systemFontOfSize:14.0])
            .set_backgroundColor([UIColor redColor])
            .set_frame(CGRectMake(0, 0, 100, 100));
            
        }];
    

```

## All the support classess

### ca - category classes (46-files)
___
```Objective-c

CAAnimation+TFEasyCoder.h
CAAnimationGroup+TFEasyCoder.h
CABasicAnimation+TFEasyCoder.h
CADisplayLink+TFEasyCoder.h
CAEAGLLayer+TFEasyCoder.h
CAEmitterBehavior+TFEasyCoder.h
CAEmitterCell+TFEasyCoder.h
CAEmitterLayer+TFEasyCoder.h
CAGradientLayer+TFEasyCoder.h
CAKeyframeAnimation+TFEasyCoder.h
CALayer+TFEasyCoder.h
CAMediaTimingFunction+TFEasyCoder.h
CAPropertyAnimation+TFEasyCoder.h
CAReplicatorLayer+TFEasyCoder.h
CAScrollLayer+TFEasyCoder.h
CAShapeLayer+TFEasyCoder.h
CASpringAnimation+TFEasyCoder.h
CATextLayer+TFEasyCoder.h
CATiledLayer+TFEasyCoder.h
CATransaction+TFEasyCoder.h
CATransformLayer+TFEasyCoder.h
CATransition+TFEasyCoder.h
CAValueFunction+TFEasyCoder.h


```


### uikit - category classes (336-files)
___
```Objective-c

UIAcceleration+TFEasyCoder.h
UIAccelerometer+TFEasyCoder.h
UIAccessibilityCustomAction+TFEasyCoder.h
UIAccessibilityElement+TFEasyCoder.h
UIActionSheet+TFEasyCoder.h
UIActivity+TFEasyCoder.h
UIActivity+TFEasyCoder.h
UIActivityIndicatorView+TFEasyCoder.h
UIActivityItemProvider+TFEasyCoder.h
UIActivityViewController+TFEasyCoder.h
UIAlertAction+TFEasyCoder.h
UIAlertController+TFEasyCoder.h
UIAlertView+TFEasyCoder.h
UIApplication+TFEasyCoder.h
UIApplicationShortcutIcon+TFEasyCoder.h
UIApplicationShortcutItem+TFEasyCoder.h
UIAttachmentBehavior+TFEasyCoder.h
UIBarButtonItem+TFEasyCoder.h
UIBarButtonItemGroup+TFEasyCoder.h
UIBarItem+TFEasyCoder.h
UIBezierPath+TFEasyCoder.h
UIBlurEffect+TFEasyCoder.h
UIButton+TFEasyCoder.h
UICollectionReusableView+TFEasyCoder.h
UICollectionView+TFEasyCoder.h
UICollectionViewCell+TFEasyCoder.h
UICollectionViewController+TFEasyCoder.h
UICollectionViewFlowLayout+TFEasyCoder.h
UICollectionViewFocusUpdateContext+TFEasyCoder.h
UICollectionViewLayout+TFEasyCoder.h
UICollectionViewLayoutAttributes+TFEasyCoder.h
UICollectionViewLayoutInvalidationContext+TFEasyCoder.h
UICollectionViewTransitionLayout+TFEasyCoder.h
UICollectionViewUpdateItem+TFEasyCoder.h
UICollisionBehavior+TFEasyCoder.h
UIColor+TFEasyCoder.h
UIControl+TFEasyCoder.h
UIDatePicker+TFEasyCoder.h
UIDevice+TFEasyCoder.h
UIDictationPhrase+TFEasyCoder.h
UIDocument+TFEasyCoder.h
UIDocumentInteractionController+TFEasyCoder.h
UIDocumentMenuViewController+TFEasyCoder.h
UIDocumentPickerExtensionViewController+TFEasyCoder.h
UIDynamicAnimator+TFEasyCoder.h
UIDynamicBehavior+TFEasyCoder.h
UIDynamicItemBehavior+TFEasyCoder.h
UIDynamicItemGroup+TFEasyCoder.h
UIEvent+TFEasyCoder.h
UIFieldBehavior+TFEasyCoder.h
UIFocusAnimationCoordinator+TFEasyCoder.h
UIFocusGuide+TFEasyCoder.h
UIFocusUpdateContext+TFEasyCoder.h
UIFont+TFEasyCoder.h
UIFontDescriptor+TFEasyCoder.h
UIGestureRecognizer+TFEasyCoder.h
UIGravityBehavior+TFEasyCoder.h
UIImage+TFEasyCoder.h
UIImageAsset+TFEasyCoder.h
UIImagePickerController+TFEasyCoder.h
UIImageView+TFEasyCoder.h
UIInputView+TFEasyCoder.h
UIInputViewController+TFEasyCoder.h
UIInterpolatingMotionEffect+TFEasyCoder.h
UIKeyCommand+TFEasyCoder.h
UILabel+TFEasyCoder.h
UILayoutGuide+TFEasyCoder.h
UILexicon+TFEasyCoder.h
UILexiconEntry+TFEasyCoder.h
UILocalNotification+TFEasyCoder.h
UILocalizedIndexedCollation+TFEasyCoder.h
UILongPressGestureRecognizer+TFEasyCoder.h
UIManagedDocument+TFEasyCoder.h
UIMarkupTextPrintFormatter+TFEasyCoder.h
UIMenuController+TFEasyCoder.h
UIMenuItem+TFEasyCoder.h
UIMotionEffect+TFEasyCoder.h
UIMotionEffectGroup+TFEasyCoder.h
UIMutableApplicationShortcutItem+TFEasyCoder.h
UIMutableUserNotificationAction+TFEasyCoder.h
UIMutableUserNotificationCategory+TFEasyCoder.h
UINavigationBar+TFEasyCoder.h
UINavigationController+TFEasyCoder.h
UINavigationItem+TFEasyCoder.h
UINib+TFEasyCoder.h
UIPageControl+TFEasyCoder.h
UIPageViewController+TFEasyCoder.h
UIPanGestureRecognizer+TFEasyCoder.h
UIPasteboard+TFEasyCoder.h
UIPercentDrivenInteractiveTransition+TFEasyCoder.h
UIPickerView+TFEasyCoder.h
UIPinchGestureRecognizer+TFEasyCoder.h
UIPopoverBackgroundView+TFEasyCoder.h
UIPopoverController+TFEasyCoder.h
UIPopoverPresentationController+TFEasyCoder.h
UIPresentationController+TFEasyCoder.h
UIPress+TFEasyCoder.h
UIPressesEvent+TFEasyCoder.h
UIPreviewAction+TFEasyCoder.h
UIPreviewActionGroup+TFEasyCoder.h
UIPrintFormatter+TFEasyCoder.h
UIPrintInfo+TFEasyCoder.h
UIPrintInteractionController+TFEasyCoder.h
UIPrintPageRenderer+TFEasyCoder.h
UIPrintPaper+TFEasyCoder.h
UIPrinter+TFEasyCoder.h
UIPrinterPickerController+TFEasyCoder.h
UIProgressView+TFEasyCoder.h
UIPushBehavior+TFEasyCoder.h
UIReferenceLibraryViewController+TFEasyCoder.h
UIRefreshControl+TFEasyCoder.h
UIRegion+TFEasyCoder.h
UIResponder+TFEasyCoder.h
UIRotationGestureRecognizer+TFEasyCoder.h
UIScreen+TFEasyCoder.h
UIScreenEdgePanGestureRecognizer+TFEasyCoder.h
UIScreenMode+TFEasyCoder.h
UIScrollView+TFEasyCoder.h
UISearchBar+TFEasyCoder.h
UISearchContainerViewController+TFEasyCoder.h
UISearchController+TFEasyCoder.h
UISearchDisplayController+TFEasyCoder.h
UISegmentedControl+TFEasyCoder.h
UISimpleTextPrintFormatter+TFEasyCoder.h
UISlider+TFEasyCoder.h
UISnapBehavior+TFEasyCoder.h
UISplitViewController+TFEasyCoder.h
UIStackView+TFEasyCoder.h
UIStepper+TFEasyCoder.h
UIStoryboard+TFEasyCoder.h
UIStoryboardPopoverSegue+TFEasyCoder.h
UIStoryboardSegue+TFEasyCoder.h
UIStoryboardUnwindSegueSource+TFEasyCoder.h
UISwipeGestureRecognizer+TFEasyCoder.h
UISwitch+TFEasyCoder.h
UITabBar+TFEasyCoder.h
UITabBarController+TFEasyCoder.h
UITabBarItem+TFEasyCoder.h
UITableView+TFEasyCoder.h
UITableViewCell+TFEasyCoder.h
UITableViewController+TFEasyCoder.h
UITableViewFocusUpdateContext+TFEasyCoder.h
UITableViewHeaderFooterView+TFEasyCoder.h
UITableViewRowAction+TFEasyCoder.h
UITapGestureRecognizer+TFEasyCoder.h
UITextChecker+TFEasyCoder.h
UITextField+TFEasyCoder.h
UITextInputAssistantItem+TFEasyCoder.h
UITextInputMode+TFEasyCoder.h
UITextInputStringTokenizer+TFEasyCoder.h
UITextPosition+TFEasyCoder.h
UITextRange+TFEasyCoder.h
UITextSelectionRect+TFEasyCoder.h
UITextView+TFEasyCoder.h
UIToolbar+TFEasyCoder.h
UITouch+TFEasyCoder.h
UITraitCollection+TFEasyCoder.h
UIUserNotificationAction+TFEasyCoder.h
UIUserNotificationCategory+TFEasyCoder.h
UIUserNotificationSettings+TFEasyCoder.h
UIVibrancyEffect+TFEasyCoder.h
UIVideoEditorController+TFEasyCoder.h
UIView+TFEasyCoder.h
UIViewController+TFEasyCoder.h
UIViewPrintFormatter+TFEasyCoder.h
UIVisualEffect+TFEasyCoder.h
UIVisualEffectView+TFEasyCoder.h
UIWebView+TFEasyCoder.h
UIWindow+TFEasyCoder.h

```


### foundation - category classes (322-files)
___
```Objective-c

NSArray+TFEasyCoder.h
NSAssertionHandler+TFEasyCoder.h
NSAttributedString+TFEasyCoder.h
NSBlockOperation+TFEasyCoder.h
NSBundle+TFEasyCoder.h
NSBundleResourceRequest+TFEasyCoder.h
NSByteCountFormatter+TFEasyCoder.h
NSCache+TFEasyCoder.h
NSCachedURLResponse+TFEasyCoder.h
NSCalendar+TFEasyCoder.h
NSCharacterSet+TFEasyCoder.h
NSCoder+TFEasyCoder.h
NSComparisonPredicate+TFEasyCoder.h
NSCompoundPredicate+TFEasyCoder.h
NSCondition+TFEasyCoder.h
NSConditionLock+TFEasyCoder.h
NSConstantString+TFEasyCoder.h
NSCountedSet+TFEasyCoder.h
NSData+TFEasyCoder.h
NSDataAsset+TFEasyCoder.h
NSDataDetector+TFEasyCoder.h
NSDate+TFEasyCoder.h
NSDateComponents+TFEasyCoder.h
NSDateComponentsFormatter+TFEasyCoder.h
NSDateFormatter+TFEasyCoder.h
NSDateIntervalFormatter+TFEasyCoder.h
NSDecimalNumber+TFEasyCoder.h
NSDecimalNumberHandler+TFEasyCoder.h
NSDictionary+TFEasyCoder.h
NSDirectoryEnumerator+TFEasyCoder.h
NSEnergyFormatter+TFEasyCoder.h
NSEnumerator+TFEasyCoder.h
NSError+TFEasyCoder.h
NSException+TFEasyCoder.h
NSExpression+TFEasyCoder.h
NSExtensionContext+TFEasyCoder.h
NSExtensionItem+TFEasyCoder.h
NSFileAccessIntent+TFEasyCoder.h
NSFileCoordinator+TFEasyCoder.h
NSFileHandle+TFEasyCoder.h
NSFileManager+TFEasyCoder.h
NSFileProviderExtension+TFEasyCoder.h
NSFileSecurity+TFEasyCoder.h
NSFileVersion+TFEasyCoder.h
NSFileWrapper+TFEasyCoder.h
NSFormatter+TFEasyCoder.h
NSHTTPCookie+TFEasyCoder.h
NSHTTPCookieStorage+TFEasyCoder.h
NSHTTPURLResponse+TFEasyCoder.h
NSHashTable+TFEasyCoder.h
NSIndexPath+TFEasyCoder.h
NSIndexSet+TFEasyCoder.h
NSInputStream+TFEasyCoder.h
NSInvocation+TFEasyCoder.h
NSInvocationOperation+TFEasyCoder.h
NSItemProvider+TFEasyCoder.h
NSJSONSerialization+TFEasyCoder.h
NSKeyedArchiver+TFEasyCoder.h
NSKeyedUnarchiver+TFEasyCoder.h
NSLayoutAnchor+TFEasyCoder.h
NSLayoutConstraint+TFEasyCoder.h
NSLayoutDimension+TFEasyCoder.h
NSLayoutManager+TFEasyCoder.h
NSLayoutXAxisAnchor+TFEasyCoder.h
NSLayoutYAxisAnchor+TFEasyCoder.h
NSLengthFormatter+TFEasyCoder.h
NSLinguisticTagger+TFEasyCoder.h
NSLocale+TFEasyCoder.h
NSLock+TFEasyCoder.h
NSMachPort+TFEasyCoder.h
NSMapTable+TFEasyCoder.h
NSMassFormatter+TFEasyCoder.h
NSMessagePort+TFEasyCoder.h
NSMetadataItem+TFEasyCoder.h
NSMetadataQuery+TFEasyCoder.h
NSMetadataQueryAttributeValueTuple+TFEasyCoder.h
NSMetadataQueryResultGroup+TFEasyCoder.h
NSMethodSignature+TFEasyCoder.h
NSMutableArray+TFEasyCoder.h
NSMutableAttributedString+TFEasyCoder.h
NSMutableCharacterSet+TFEasyCoder.h
NSMutableData+TFEasyCoder.h
NSMutableDictionary+TFEasyCoder.h
NSMutableIndexSet+TFEasyCoder.h
NSMutableOrderedSet+TFEasyCoder.h
NSMutableParagraphStyle+TFEasyCoder.h
NSMutableSet+TFEasyCoder.h
NSMutableString+TFEasyCoder.h
NSMutableURLRequest+TFEasyCoder.h
NSNetService+TFEasyCoder.h
NSNetServiceBrowser+TFEasyCoder.h
NSNotification+TFEasyCoder.h
NSNotificationCenter+TFEasyCoder.h
NSNotificationQueue+TFEasyCoder.h
NSNull+TFEasyCoder.h
NSNumber+TFEasyCoder.h
NSNumberFormatter+TFEasyCoder.h
NSObject+TFEasyCoder.h
NSOperation+TFEasyCoder.h
NSOperationQueue+TFEasyCoder.h
NSOrderedSet+TFEasyCoder.h
NSOrthography+TFEasyCoder.h
NSOutputStream+TFEasyCoder.h
NSParagraphStyle+TFEasyCoder.h
NSPersonNameComponents+TFEasyCoder.h
NSPersonNameComponentsFormatter+TFEasyCoder.h
NSPipe+TFEasyCoder.h
NSPointerArray+TFEasyCoder.h
NSPointerFunctions+TFEasyCoder.h
NSPort+TFEasyCoder.h
NSPredicate+TFEasyCoder.h
NSProcessInfo+TFEasyCoder.h
NSProgress+TFEasyCoder.h
NSPropertyListSerialization+TFEasyCoder.h
NSProxy+TFEasyCoder.h
NSPurgeableData+TFEasyCoder.h
NSRecursiveLock+TFEasyCoder.h
NSRegularExpression+TFEasyCoder.h
NSRunLoop+TFEasyCoder.h
NSScanner+TFEasyCoder.h
NSSet+TFEasyCoder.h
NSShadow+TFEasyCoder.h
NSSimpleCString+TFEasyCoder.h
NSSocketPort+TFEasyCoder.h
NSSortDescriptor+TFEasyCoder.h
NSStream+TFEasyCoder.h
NSString+TFEasyCoder.h
NSStringDrawingContext+TFEasyCoder.h
NSTextAttachment+TFEasyCoder.h
NSTextCheckingResult+TFEasyCoder.h
NSTextContainer+TFEasyCoder.h
NSTextStorage+TFEasyCoder.h
NSTextTab+TFEasyCoder.h
NSThread+TFEasyCoder.h
NSTimeZone+TFEasyCoder.h
NSTimer+TFEasyCoder.h
NSURL+TFEasyCoder.h
NSURLAuthenticationChallenge+TFEasyCoder.h
NSURLCache+TFEasyCoder.h
NSURLComponents+TFEasyCoder.h
NSURLConnection+TFEasyCoder.h
NSURLCredential+TFEasyCoder.h
NSURLCredentialStorage+TFEasyCoder.h
NSURLProtectionSpace+TFEasyCoder.h
NSURLProtocol+TFEasyCoder.h
NSURLQueryItem+TFEasyCoder.h
NSURLRequest+TFEasyCoder.h
NSURLResponse+TFEasyCoder.h
NSURLSession+TFEasyCoder.h
NSURLSessionConfiguration+TFEasyCoder.h
NSURLSessionDataTask+TFEasyCoder.h
NSURLSessionDownloadTask+TFEasyCoder.h
NSURLSessionStreamTask+TFEasyCoder.h
NSURLSessionTask+TFEasyCoder.h
NSURLSessionUploadTask+TFEasyCoder.h
NSUUID+TFEasyCoder.h
NSUbiquitousKeyValueStore+TFEasyCoder.h
NSUndoManager+TFEasyCoder.h
NSUserActivity+TFEasyCoder.h
NSUserDefaults+TFEasyCoder.h
NSValue+TFEasyCoder.h
NSValueTransformer+TFEasyCoder.h
NSXMLParser+TFEasyCoder.h

```


##About coder
* GitHub:[shmxybfq](https://github.com/shmxybfq "shmxybfq's github")
* SinaBlog:[守候ztf](http://blog.sina.com.cn/u/3481024997 "shmxybfq's sinablog")






