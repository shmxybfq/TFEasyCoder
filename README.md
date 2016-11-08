
# TFEasyCoder

* 一个可以用copy和paste提高编程效率的框架:为UIKit和Foundation的所有公开类添加了快速创建对象的方法并且为这些类的所有非私有属性添加了链式编程方法.



## 摘要

* 简单介绍
* 可以做什么?
* 安装
* 怎么使用
* 所有的支持的类
* 关于作者


## 简单介绍

一个可以用copy和paste来提高编程效率的框架:
* 为UIKit和Foundation的所有公开类添加了快速创建对象的方法
* 为以上所有类的所有非私有属性添加了链式编程方法.

## 可以做什么?

 *  快速创建对象.
 *  链式编程式对UIKit 和 Foundation非私有类的所有非私有属性赋值.
 *  利用copy 和 paste 实现快速编程
 
## 安装


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
 

## 怎么使用

 * 快速创建一个对象
 * 快速操作一个对象
 * 对象公有属性的链式编程
 * 对象私有属性/变量的链式编程
 * 创建一个自定义对象
 * 用自定义init方法创建一个自定义一个对象
 * 开发调试工具(1):view-Tree 显示随机色
 * 开发调试工具(2):获取某 view 的所有subviews
 * 开发调试工具(3):打印 view-Tree

###快速创建一个对象

```Objective-c

    __weak typeof(self) weakSelf = self;
    [UILabel easyCoder:^(UILabel *ins) {
        
        weakSelf.titleLabel = ins;
        [weakSelf.view addSubview:ins];
        
        ins.frame = CGRectMake(0, 0, 100, 100);
        ins.textAlignment = NSTextAlignmentCenter;
        ins.textColor = [UIColor blackColor];
        ins.font = [UIFont systemFontOfSize:14.f];
        ins.backgroundColor = [UIColor grayColor];
        ins.text = @"我是文字框~";
        ins.center = weakSelf.view.center;
    }];    

```



###快速操作一个对象

```Objective-c

  [self.titleLabel easyCoder:^(UILabel *ins) {
        
        ins.frame = CGRectMake(0, 0, 100, 100);
        ins.textAlignment = NSTextAlignmentCenter;
        ins.textColor = [UIColor blackColor];
        ins.font = [UIFont systemFontOfSize:14.f];
        ins.backgroundColor = [UIColor grayColor];
        ins.text = @"我是文字框~";
        ins.center = weakSelf.view.center;
    }];
    

```

###对象公有属性的链式编程

```Objective-c

    [UILabel easyCoder:^(UILabel *ins) {
        
        ins
        .set_frame(CGRectMake(0, 0, 100, 100))
        .set_textAlignment(NSTextAlignmentCenter)
        .set_textColor([UIColor brownColor])
        .set_text(@"哈哈")
        .set_font([UIFont systemFontOfSize:14.0])
        .set_backgroundColor([UIColor redColor]);
    }];

```


###对象私有属性/变量的链式编程

```Objective-c

   [UILabel easyCoder:^(UILabel *ins) {
        
        ins
        //它不同于系统API [ins setValue:@"value" forKey:@"key"];
        .set_ValueKey(@"value1",@"key1")
        .set_ValueKey(@"value1",@"key1")
        .set_ValueKey(@"value1",@"key1")
        .set_ValueKey(@"value1",@"key1");
        
    }];

```

###创建一个自定义对象

```Objective-c

 [CustemLabel easyCoderCustem:^(CustemLabel * ins) {
        
        ins.cusProperty1 = @"";
        ins.cusProperty2 = @"";
        ins.cusProperty3 = @"";
        
    }];

```


###用自定义init方法创建一个自定义一个对象

```Objective-c

 NSArray *param = @[@"111",@"222",[[UIView alloc]init],@('A'),@(YES),@"333",NSStringFromCGPoint(CGPointZero),@(NSTextAlignmentLeft)];
    [CustemLabel easyCoderCustemInitMethod:@selector(initWithParam1:Param2:Param3:Param4:Param5:Param6:Param7:Param8:)
                                    params:param
                                      back:^(CustemLabel * ins) {
                                          
                                          ins.cusProperty1 = @"";
                                          ins.cusProperty2 = @"";
                                          ins.cusProperty3 = @"";
                                          
                                      }];

```

###开发调试工具(1):view-Tree 显示随机色
```Objective-c

   /**
     *  为当前已存在的视图tree 加上随机颜色(UI开发工具)
     */
    [self.view allSubviewsBackgroundColorRandom:0.5];


```

###开发调试工具(2):获取某 view 的所有subviews
```Objective-c

    /**
     *  获取view的所有子视图(UI开发工具)
     */
    NSArray *allSubviews = [self.view allSubviews];
    NSLog(@"\n\n\n\n\n%@\n\n\n\n\n",allSubviews);
        
```
>打印结果:
(
    "<_UILayoutGuide: 0x7fdd91c0e150; frame = (0 0; 0 20); hidden = YES; layer = <CALayer: 0x7fdd91c10050>>",
    "<_UILayoutGuide: 0x7fdd91c1b2e0; frame = (0 667; 0 0); hidden = YES; layer = <CALayer: 0x7fdd91c10d40>>",
    "<UITableView: 0x7fdd92025400; frame = (0 0; 375 667); clipsToBounds = YES; gestureRecognizers = <NSArray: 0x7fdd91c19930>; layer = <CALayer: 0x7fdd91c30190>; contentOffset: {0, 0}; contentSize: {375, 467}>",
    "<UITableViewWrapperView: 0x7fdd92003800; frame = (0 0; 375 667); gestureRecognizers = <NSArray: 0x7fdd91c353b0>; layer = <CALayer: 0x7fdd91c349b0>; contentOffset: {0, 0}; contentSize: {375, 667}>",
    "<TableviewHeader: 0x7fdd91c0dd60; frame = (0 0; 375 275); layer = <CALayer: 0x7fdd91c193b0>>",
    "<UIImageView: 0x7fdd91e3a810; frame = (3 661.5; 369 2.5); alpha = 0; opaque = NO; autoresize = TM; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91e3ad90>>",
    "<UIImageView: 0x7fdd91e2b3e0; frame = (369.5 395; 2.5 269); alpha = 0; opaque = NO; autoresize = LM; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91e2cce0>>",
    "<TableviewCell: 0x7fdd93c14620; baseClass = UITableViewCell; frame = (0 419; 375 48); autoresize = W; layer = <CALayer: 0x7fdd93c13b00>>",
    "<TableviewCell: 0x7fdd93c09ce0; baseClass = UITableViewCell; frame = (0 371; 375 48); autoresize = W; layer = <CALayer: 0x7fdd93c093b0>>",
    "<TableviewCell: 0x7fdd939fb310; baseClass = UITableViewCell; frame = (0 323; 375 48); autoresize = W; layer = <CALayer: 0x7fdd939a2910>>",
    "<TableviewCell: 0x7fdd91d257a0; baseClass = UITableViewCell; frame = (0 275; 375 48); autoresize = W; layer = <CALayer: 0x7fdd91d24d20>>",
    "<UIImageView: 0x7fdd91c1c7b0; frame = (0 0; 375 275); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91c102a0>>",
    "<UIImageView: 0x7fdd91d1eee0; frame = (25 210; 40 40); clipsToBounds = YES; opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91d18e00>>",
    "<UIImageView: 0x7fdd91d241a0; frame = (12 197; 66 66); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91d08020>>",
    "<UIImageView: 0x7fdd91c268e0; frame = (20 251.5; 50 17.5); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91c25680>>",
    "<UIImageView: 0x7fdd91c2bc20; frame = (285 242; 75 18); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91c2ada0>>",
    "<UITableViewCellContentView: 0x7fdd93c14a10; frame = (0 0; 375 48); gestureRecognizers = <NSArray: 0x7fdd93c15230>; layer = <CALayer: 0x7fdd93c14200>>",
    "<UITableViewCellContentView: 0x7fdd93c0a0d0; frame = (0 0; 375 48); gestureRecognizers = <NSArray: 0x7fdd93c0a740>; layer = <CALayer: 0x7fdd93c09ad0>>",
    "<UITableViewCellContentView: 0x7fdd939fb700; frame = (0 0; 375 48); gestureRecognizers = <NSArray: 0x7fdd93c00060>; layer = <CALayer: 0x7fdd939fb880>>",
    "<UITableViewCellContentView: 0x7fdd91d27d50; frame = (0 0; 375 48); gestureRecognizers = <NSArray: 0x7fdd91d28f40>; layer = <CALayer: 0x7fdd91d281e0>>",
    "<UIImageView: 0x7fdd93c15340; frame = (15 11.5; 25 25); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c154f0>>",
    "<UILabel: 0x7fdd93c17310; frame = (50 11.5; 150 25); text = '\U60c5\U4fa3\U7a7a\U95f4'; userInteractionEnabled = NO; layer = <_UILabelLayer: 0x7fdd93c17520>>",
    "<UIImageView: 0x7fdd93c185f0; frame = (350 19; 10 10); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c163f0>>",
    "<UIImageView: 0x7fdd93c19740; frame = (50 47; 325 0.5); userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c18ab0>>",
    "<UIImageView: 0x7fdd93c0a850; frame = (15 11.5; 25 25); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c0aa00>>",
    "<UILabel: 0x7fdd93c0c820; frame = (50 11.5; 150 25); text = '\U80cc\U666f\U97f3\U4e50'; userInteractionEnabled = NO; layer = <_UILabelLayer: 0x7fdd93c0ca30>>",
    "<UIImageView: 0x7fdd93c0dac0; frame = (350 19; 10 10); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c0cd60>>",
    "<UIImageView: 0x7fdd93c0ec10; frame = (50 47; 325 0.5); userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c0df80>>",
    "<UIImageView: 0x7fdd93c00170; frame = (15 11.5; 25 25); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c00320>>",
    "<UILabel: 0x7fdd93c02140; frame = (50 11.5; 150 25); text = '\U597d\U53cb\U751f\U65e5'; userInteractionEnabled = NO; layer = <_UILabelLayer: 0x7fdd93c02350>>",
    "<UIImageView: 0x7fdd93c03460; frame = (350 19; 10 10); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c02700>>",
    "<UIImageView: 0x7fdd93c045b0; frame = (50 47; 325 0.5); userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93c03920>>",
    "<UIImageView: 0x7fdd91d29050; frame = (15 11.5; 25 25); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91d29200>>",
    "<UILabel: 0x7fdd91d2b140; frame = (50 11.5; 150 25); text = '\U6211\U7684\U8bbf\U5ba2'; userInteractionEnabled = NO; layer = <_UILabelLayer: 0x7fdd91d2b730>>",
    "<UIImageView: 0x7fdd91d2dd20; frame = (350 19; 10 10); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x7fdd91d2cfc0>>",
    "<UIImageView: 0x7fdd939f7620; frame = (50 47; 325 0.5); userInteractionEnabled = NO; layer = <CALayer: 0x7fdd93906d70>>",
    "<UIView: 0x7fdd91c15940; frame = (0 0; 375 667); autoresize = W+H; layer = <CALayer: 0x7fdd91c0c4a0>>"
)


###打印 view-Tree
```Objective-c


   /**
     *  打印当前已存在的视图tree(UI开发工具)
     */
    [self.view logSubviews:^NSArray *{
        /**
         *  这里返回你要在视图tree里面显示的视图属性,返回nil则默认打印 @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"]
         */
        return @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"];
    }];
    
    
```
>打印结果:

{
    UIView =     {
        properties =         {
            backgroundColor = "UIDeviceRGBColorSpace 1 1 1 1";
            frame = "NSRect: {{0, 0}, {375, 667}}";
            hidden = 0;
            userInteractionEnabled = 1;
        };
        subviews =         (
                        {
                "_UILayoutGuide" =                 {
                    properties =                     {
                        backgroundColor = null;
                        frame = "NSRect: {{0, 0}, {0, 20}}";
                        hidden = 1;
                        userInteractionEnabled = 1;
                    };
                    subviews =                     (
                    );
                };
            },
                        {
                "_UILayoutGuide" =                 {
                    properties =                     {
                        backgroundColor = null;
                        frame = "NSRect: {{0, 667}, {0, 0}}";
                        hidden = 1;
                        userInteractionEnabled = 1;
                    };
                    subviews =                     (
                    );
                };
            },
                        {
                UITableView =                 {
                    properties =                     {
                        backgroundColor = "UIDeviceWhiteColorSpace 0.666667 0.1";
                        frame = "NSRect: {{0, 0}, {375, 667}}";
                        hidden = 0;
                        userInteractionEnabled = 1;
                    };
                    subviews =                     (
                                                {
                            UITableViewWrapperView =                             {
                                properties =                                 {
                                    backgroundColor = null;
                                    frame = "NSRect: {{0, 0}, {375, 667}}";
                                    hidden = 0;
                                    userInteractionEnabled = 1;
                                };
                                subviews =                                 (
                                                                        {
                                        TableviewCell =                                         {
                                            properties =                                             {
                                                backgroundColor = "UIDeviceRGBColorSpace 1 1 1 1";
                                                frame = "NSRect: {{0, 419}, {375, 48}}";
                                                hidden = 0;
                                                userInteractionEnabled = 1;
                                            };
                                            subviews =                                             (
                                                                                                {
                                                    UITableViewCellContentView =                                                     {
                                                        properties =                                                         {
                                                            backgroundColor = null;
                                                            frame = "NSRect: {{0, 0}, {375, 48}}";
                                                            hidden = 0;
                                                            userInteractionEnabled = 1;
                                                        };
                                                        subviews =                                                         (
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{15, 11.5}, {25, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UILabel =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0 0";
                                                                        frame = "NSRect: {{50, 11.5}, {150, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{350, 19}, {10, 10}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0.666667 0.5";
                                                                        frame = "NSRect: {{50, 47}, {325, 0.5}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            }
                                                        );
                                                    };
                                                }
                                            );
                                        };
                                    },
                                                                        {
                                        TableviewCell =                                         {
                                            properties =                                             {
                                                backgroundColor = "UIDeviceRGBColorSpace 1 1 1 1";
                                                frame = "NSRect: {{0, 371}, {375, 48}}";
                                                hidden = 0;
                                                userInteractionEnabled = 1;
                                            };
                                            subviews =                                             (
                                                                                                {
                                                    UITableViewCellContentView =                                                     {
                                                        properties =                                                         {
                                                            backgroundColor = null;
                                                            frame = "NSRect: {{0, 0}, {375, 48}}";
                                                            hidden = 0;
                                                            userInteractionEnabled = 1;
                                                        };
                                                        subviews =                                                         (
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{15, 11.5}, {25, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UILabel =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0 0";
                                                                        frame = "NSRect: {{50, 11.5}, {150, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{350, 19}, {10, 10}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0.666667 0.5";
                                                                        frame = "NSRect: {{50, 47}, {325, 0.5}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            }
                                                        );
                                                    };
                                                }
                                            );
                                        };
                                    },
                                                                        {
                                        TableviewCell =                                         {
                                            properties =                                             {
                                                backgroundColor = "UIDeviceRGBColorSpace 1 1 1 1";
                                                frame = "NSRect: {{0, 323}, {375, 48}}";
                                                hidden = 0;
                                                userInteractionEnabled = 1;
                                            };
                                            subviews =                                             (
                                                                                                {
                                                    UITableViewCellContentView =                                                     {
                                                        properties =                                                         {
                                                            backgroundColor = null;
                                                            frame = "NSRect: {{0, 0}, {375, 48}}";
                                                            hidden = 0;
                                                            userInteractionEnabled = 1;
                                                        };
                                                        subviews =                                                         (
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{15, 11.5}, {25, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UILabel =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0 0";
                                                                        frame = "NSRect: {{50, 11.5}, {150, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{350, 19}, {10, 10}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0.666667 0.5";
                                                                        frame = "NSRect: {{50, 47}, {325, 0.5}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            }
                                                        );
                                                    };
                                                }
                                            );
                                        };
                                    },
                                                                        {
                                        TableviewCell =                                         {
                                            properties =                                             {
                                                backgroundColor = "UIDeviceRGBColorSpace 1 1 1 1";
                                                frame = "NSRect: {{0, 275}, {375, 48}}";
                                                hidden = 0;
                                                userInteractionEnabled = 1;
                                            };
                                            subviews =                                             (
                                                                                                {
                                                    UITableViewCellContentView =                                                     {
                                                        properties =                                                         {
                                                            backgroundColor = null;
                                                            frame = "NSRect: {{0, 0}, {375, 48}}";
                                                            hidden = 0;
                                                            userInteractionEnabled = 1;
                                                        };
                                                        subviews =                                                         (
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{15, 11.5}, {25, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UILabel =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0 0";
                                                                        frame = "NSRect: {{50, 11.5}, {150, 25}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = null;
                                                                        frame = "NSRect: {{350, 19}, {10, 10}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            },
                                                                                                                        {
                                                                UIImageView =                                                                 {
                                                                    properties =                                                                     {
                                                                        backgroundColor = "UIDeviceWhiteColorSpace 0.666667 0.5";
                                                                        frame = "NSRect: {{50, 47}, {325, 0.5}}";
                                                                        hidden = 0;
                                                                        userInteractionEnabled = 0;
                                                                    };
                                                                    subviews =                                                                     (
                                                                    );
                                                                };
                                                            }
                                                        );
                                                    };
                                                }
                                            );
                                        };
                                    }
                                );
                            };
                        },
                                                {
                            TableviewHeader =                             {
                                properties =                                 {
                                    backgroundColor = null;
                                    frame = "NSRect: {{0, 0}, {375, 275}}";
                                    hidden = 0;
                                    userInteractionEnabled = 1;
                                };
                                subviews =                                 (
                                                                        {
                                        UIImageView =                                         {
                                            properties =                                             {
                                                backgroundColor = null;
                                                frame = "NSRect: {{0, 0}, {375, 275}}";
                                                hidden = 0;
                                                userInteractionEnabled = 0;
                                            };
                                            subviews =                                             (
                                            );
                                        };
                                    },
                                                                        {
                                        UIImageView =                                         {
                                            properties =                                             {
                                                backgroundColor = null;
                                                frame = "NSRect: {{25, 210}, {40, 40}}";
                                                hidden = 0;
                                                userInteractionEnabled = 0;
                                            };
                                            subviews =                                             (
                                            );
                                        };
                                    },
                                                                        {
                                        UIImageView =                                         {
                                            properties =                                             {
                                                backgroundColor = null;
                                                frame = "NSRect: {{12, 197}, {66, 66}}";
                                                hidden = 0;
                                                userInteractionEnabled = 0;
                                            };
                                            subviews =                                             (
                                            );
                                        };
                                    },
                                                                        {
                                        UIImageView =                                         {
                                            properties =                                             {
                                                backgroundColor = null;
                                                frame = "NSRect: {{20, 251.5}, {50, 17.5}}";
                                                hidden = 0;
                                                userInteractionEnabled = 0;
                                            };
                                            subviews =                                             (
                                            );
                                        };
                                    },
                                                                        {
                                        UIImageView =                                         {
                                            properties =                                             {
                                                backgroundColor = null;
                                                frame = "NSRect: {{285, 242}, {75, 18}}";
                                                hidden = 0;
                                                userInteractionEnabled = 0;
                                            };
                                            subviews =                                             (
                                            );
                                        };
                                    }
                                );
                            };
                        },
                                                {
                            UIImageView =                             {
                                properties =                                 {
                                    backgroundColor = null;
                                    frame = "NSRect: {{3, 661.5}, {369, 2.5}}";
                                    hidden = 0;
                                    userInteractionEnabled = 0;
                                };
                                subviews =                                 (
                                );
                            };
                        },
                                                {
                            UIImageView =                             {
                                properties =                                 {
                                    backgroundColor = null;
                                    frame = "NSRect: {{369.5, 395}, {2.5, 269}}";
                                    hidden = 0;
                                    userInteractionEnabled = 0;
                                };
                                subviews =                                 (
                                );
                            };
                        }
                    );
                };
            }
        );
    };
}


## 所有的支持的类

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


##关于作者
* GitHub:[shmxybfq](https://github.com/shmxybfq "shmxybfq's github")
* SinaBlog:[守候ztf](http://blog.sina.com.cn/u/3481024997 "shmxybfq's sinablog")






