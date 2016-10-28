
# TFEasyCoder
===
* 
* 一个可以用copy和paste提高编程效率的框架:为UIKit和Foundation的所有公开类添加了快速创建对象的方法并且为这些类的所有非私有属性添加了链式编程方法.
___

##About coder
* GitHub:[shmxybfq](https://github.com/shmxybfq "shmxybfq's github")
* SinaBlog:[守候ztf](http://blog.sina.com.cn/u/3481024997 "shmxybfq's sinablog")

## Summary
===
* Introduction
* What can do	
* Installation
* How To Use


## Introduction
===
一个可以用copy和paste提高编程效率的框架:为UIKit和Foundation的所有公开类添加了快速创建对象的方法并且为这些类的所有非私有属性添加了链式编程方法.


## What can do
===
 *  快速创建对象.
 *  链式编程式对UIKit 和 Foundation非私有类的所有非私有属性赋值.
 *  利用copy 和 paste 实现快速编程
 
## Installation
===

####所有文件:
>TFEasyCoder
 * TFEasyCoder.h
 * TFEasyCoderConst.h
 * NSObject+TFExecute.h
 * NSObject+TFExecute.m
 * ca(folder)
 * uikit(folder)
 * foundation(folder)
 
#####将"TFEasyCoder"文件夹拖入项目中,然后将TFEasyCoder.h导入项目.
 * Tips:`ca`,`uikit`,`foundation`三个文件夹分别包含uikit和foundation中相关类的Category文件,你可以选择性的导入自己想用的文件夹,然后从TFEasyCoder.h中删除相关的import即可
 

## How To Use
===


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








