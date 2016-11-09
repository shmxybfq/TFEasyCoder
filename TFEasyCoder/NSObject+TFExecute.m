//
//  NSObject+TFExecute.m
//  两大框架继承
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSObject+TFExecute.h"
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"




#define TF_ASSOCIATED_KYE(__CLASS, __PROPERTY) static char Lazy_Associated_Key_##__CLASS##_##__PROPERTY

#define TF_ASSOCIATED_OBJC_GET(__CLASS, __PROPERTY)\
TF_ASSOCIATED_KYE(__CLASS, __PROPERTY);\
-(__CLASS *)__PROPERTY{return objc_getAssociatedObject(self, &Lazy_Associated_Key_##__CLASS##_##__PROPERTY);}

#define TF_ASSOCIATED_OBJC_SET(__CLASS, __PROPERTY)\
objc_setAssociatedObject(self,&Lazy_Associated_Key_##__CLASS##_##__PROPERTY,__PROPERTY,OBJC_ASSOCIATION_RETAIN);


@implementation UIView (TFDevHelper)

TF_ASSOCIATED_OBJC_GET(UIView,                      lgview)
TF_ASSOCIATED_OBJC_GET(NSMutableDictionary,   lgproperties)
TF_ASSOCIATED_OBJC_GET(NSMutableArray,          lgsubviews)
TF_ASSOCIATED_OBJC_GET(NSMutableDictionary,     lgdesCache)
-(void)setLgview:(UIView *)lgview{TF_ASSOCIATED_OBJC_SET(UIView,lgview);}
-(void)setLgproperties:(NSMutableDictionary *)lgproperties{TF_ASSOCIATED_OBJC_SET(NSMutableDictionary,lgproperties);}
-(void)setLgsubviews:(NSMutableArray *)lgsubviews{TF_ASSOCIATED_OBJC_SET(NSMutableArray,lgsubviews);}
-(void)setLgdesCache:(NSMutableDictionary *)lgdesCache{TF_ASSOCIATED_OBJC_SET(NSMutableDictionary,lgdesCache);}


/**
 *  打印所有子视图
 *
 *  @param block 回传需要打印的view的属性名列表
 *
 *  @return 打印信息字典
 */
-(NSDictionary *)logSubviews:(LGTreeBlock)block
{
    NSArray *ps = block();
    if (ps == nil || ps.count == 0) {
        ps = @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"];
    }
    TFLogTreeContainer *container = [TFLogTreeContainer initWithView:self];
    NSDictionary *log = [container descriptionContainer:ps];NSLog(@"\n\n\n\n\n%@\n\n\n\n\n",log);
    return log;
}

/**
 *  获取所有子视图
 *
 *  @return 所有子视图数组
 */
-(NSMutableArray *)allSubviews
{
    NSMutableArray *allSubviews = [NSMutableArray array];
    NSMutableArray *curSubviews = [NSMutableArray arrayWithArray:self.subviews];
    while (curSubviews.count!=0) {
        NSMutableArray *temSubviews = [NSMutableArray array];
        for (UIView *view in curSubviews) {
            [allSubviews addObject:view];
            if (view.subviews.count !=0) {
                [temSubviews addObjectsFromArray:view.subviews];
            }
        }
        [curSubviews removeAllObjects];
        [curSubviews addObjectsFromArray:temSubviews];
    }
    [allSubviews addObject:self];
    return allSubviews;
}

/**
 *  设置所有子视图为随机色
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)allSubviewsBackgroundColorRandom:(CGFloat)alpha
{
    NSMutableArray *allSubviews = [self allSubviews];
    for (UIView *view in allSubviews) {
        if ([view respondsToSelector:@selector(setBackgroundColor:)]) {
            view.backgroundColor = [UIColor colorWithRed:arc4random()%255/255.0
                                                   green:arc4random()%255/255.0
                                                    blue:arc4random()%255/255.0
                                                   alpha:alpha];
        }
    }
    return allSubviews;
}

/**
 *  获取所有父视图(!注意不是子视图)
 *
 *  @return 所有父视图数组
 */
-(NSMutableArray *)allSuperviews{
    NSMutableArray *allSuperviews = [NSMutableArray array];
    UIView *tmpView = self;
    while (tmpView.superview) {
        [allSuperviews addObject:tmpView.superview];
        tmpView = tmpView.superview;
    }
    return allSuperviews;
}

/**
 *  设置所有父视图为随机色(!注意不是子视图)
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的父视图
 */
-(NSMutableArray *)allSupviewsBackgroundColorRandom:(CGFloat)alpha
{
    NSMutableArray *allSuperviews = [self allSuperviews];
    for (UIView *view in allSuperviews) {
        if ([view respondsToSelector:@selector(setBackgroundColor:)]) {
            view.backgroundColor = [UIColor colorWithRed:arc4random()%255/255.0
                                                   green:arc4random()%255/255.0
                                                    blue:arc4random()%255/255.0
                                                   alpha:alpha];
        }
    }
    return allSuperviews;
}



@end


@implementation NSObject (TFExecute)

+(instancetype)easyCoderCustem:(ClassEasyCoderBlock)block{
    return  [NSObject tf_execute:[self class] initMethod:nil params:nil back:^(id ins) {
        if (block) {
            block(ins);
        }
    }];
}
+(instancetype)easyCoderCustemInitMethod:(SEL)sel params:(NSArray *)param back:(ClassEasyCoderBlock)block{
    return [NSObject tf_execute:[self class] initMethod:sel params:param back:^(id ins) {
        if (block) {
            block(ins);
        }
    }];
}

-(instancetype)easyCoderCustem:(ClassEasyCoderBlock)block{
    if (block) {
        TF_WEAK_OBJ(self, weakSelf);
        block(weakSelf);
    }
    return self;
}

+(id)tf_execute:(__unsafe_unretained Class)cls back:(ClassEasyCoderBlock)block
{
    return [self tf_execute:cls
                 initMethod:nil
                     params:nil
                       back:^(id ins) {
                           if (block) {
                               block(ins);
                           }
                       }];
}

+(id)tf_execute:(__unsafe_unretained Class)cls initMethod:(SEL)sel params:(NSArray *)param back:(ClassEasyCoderBlock)block
{
    id ins;
    if (sel)ins = [NSObject tf_executeSelector:sel
                                    withTarget:[cls alloc]
                               withParamsArray:param];
    else ins =[[cls alloc]init];
    TF_WEAK_OBJ(ins, weakIns);
    if (block)
        block(weakIns);
    return weakIns;
}


+(void)tf_setTargetValue:(id)_target withValue:(id)_value forKey:(NSString *)_key
{
    NSCAssert(_target,@"tf_setTargetValue: target can't be nil!");
    NSCAssert(_value,@"tf_setTargetValue: value can't be nil!");
    NSCAssert(_key,@"tf_setTargetValue: key can't be nil!");
 
    Ivar ivar = class_getInstanceVariable([_target class], [[_key hasPrefix:@"_"]?_key:[@"_" stringByAppendingString:_key] UTF8String]);
    if (!ivar) {
        NSCAssert(_key,@"tf_setTargetValue: target:%@ don't contain attribute:%@",[_target class],_key);
    }else{
        
        NSString *pro_setter = [NSString stringWithFormat:@"set%@",firstCharUpper(_key)];
        BOOL responds = [_target respondsToSelector:NSSelectorFromString(pro_setter)];
        if (responds) {
            [NSObject tf_executeSelector:NSSelectorFromString(pro_setter)
                              withTarget:_target
                         withParamsArray:@[_value]];
            return;
        }else{
            objc_property_t property = class_getProperty([_target class],[_key cStringUsingEncoding:NSASCIIStringEncoding]);
            if (property && property_getAttributes(property)) {
                
                NSString *att_string = [NSString stringWithUTF8String:property_getAttributes(property)];
                NSArray  *att_array = [att_string componentsSeparatedByString:@","];
                
                for (NSString *type in att_array) {
                    if ([type hasPrefix:@"S"]) {
                        pro_setter = [type substringFromIndex:1];
                        BOOL responds = [_target respondsToSelector:NSSelectorFromString(pro_setter)];
                        if (responds) {
                            [NSObject tf_executeSelector:NSSelectorFromString(pro_setter)
                                              withTarget:_target
                                         withParamsArray:@[_value]];
                        }else[_target setValue:_value forKey:_key];
                        return;
                    }
                }
                [_target setValue:_value forKey:_key];return;
            }else[_target setValue:_value forKey:_key];return;
        }
    }
    [_target setValue:_value forKey:_key];
}



+(id)tf_executeSelector:(SEL)_sel withTarget:(id)_target  withParams:(id)params,...
{
    id arg;
    //define a pointer to the mutable paramter
    va_list _p_list;
    //va_start:get the first address of paramter
    va_start(_p_list, params);
    NSMutableArray *_obj_params = arrayCapacity(5);
    if (params) {
        //add the first paramter to array
        id pre = params;
        [_obj_params addObject:pre];
        @try {
            //point to the next address
            while ((arg = va_arg(_p_list, id))) {
                if (arg) {
                    [_obj_params addObject:arg];
                }
            }
        } @catch (NSException *exception) {
            NSCAssert(NO,@"%s paramter type error!",__func__);
        } @finally {}
    }
    //clear
    va_end(_p_list);
    return  [self tf_executeSelector:_sel withTarget:_target withParamsArray:_obj_params];
}



+(id)tf_executeSelector:(SEL)_sel withTarget:(id)_target  withParamsArray:(NSArray*)_params
{
    NSCAssert(_target,@"tf_executeSelector: target can't be nil!");
    NSCAssert(_sel,@"tf_executeSelector: selector can't be nil!");
    
    Class cls = [_target class];
    //const char *cls_name = class_getName(cls);
    //const char *sel_name = sel_getName(_sel);
    Method method = class_getInstanceMethod(cls, _sel);
    
    //param total count
    unsigned int param_count_total = method_getNumberOfArguments(method);
    //param user custem count
    unsigned int param_count_user  = param_count_total - 2;
    //check params count
    NSCAssert((param_count_user == _params.count), @"selector %@ for instance %@ params count must be same", selToString(_sel), _target);
    
    //get signature
    NSMethodSignature  *signature = [cls instanceMethodSignatureForSelector:_sel];
    //check sel exsit
    NSCAssert(signature, @"unrecognized selector %@ for instance %@", selToString(_sel), _target);
    
    //get NSInvocation
    //其实NSInvocation就是将一个方法变成一个对象
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
    invocation.target = _target;
    invocation.selector = _sel;
    
    for (unsigned int i = 2; i < param_count_total; i++) {
        id param_sel = [_params objectAtIndex:i - 2];//get parameter
        
        //get parameter types
        const char *a_type = [signature getArgumentTypeAtIndex:i];
        NSString   *a_type_str = [NSString stringWithUTF8String:a_type];
        //NSLog(@"a_type_str:%@",a_type_str);
        if ([a_type_str rangeOfString:@"?"].location!=NSNotFound) {
            
            BOOL can_parse = [param_sel isKindOfClass:[NSValue class]];
            NSCAssert(can_parse,@"%@ execute selector %@ error! please Convert special types (block..) paramter to NSValue", clsToString(cls), selToString(_sel));
            id param_value;
            NSValue *value = param_sel;
            [value getValue:&param_value];
            [invocation setArgument:&param_value atIndex:i];
            continue;
        }
        
        const char  a_type_c = a_type[0] == 'r' ? a_type[1] : a_type[0];
        
        switch (a_type_c) {
                
#define TF_EXECUTE_PARAM_CASE(TYPE_STRING,TYPE,SELECTOR)\
case TYPE_STRING:{\
NSNumber *num_param;\
if ([param_sel isKindOfClass:[NSNumber class]]) {\
num_param = param_sel;\
}else if([param_sel isKindOfClass:[NSString class]]){\
num_param = numberFromString(param_sel);\
}\
BOOL can_parse = [num_param respondsToSelector:@selector(SELECTOR)];\
NSCAssert(can_parse,@"%@ execute selector %@ error! please Convert basic types paramter to NSNumber or NSString", clsToString(cls), selToString(_sel));\
TYPE value = [num_param SELECTOR];\
[invocation setArgument:&value atIndex:i];\
}break;
                
                TF_EXECUTE_PARAM_CASE('c', char,charValue)
                TF_EXECUTE_PARAM_CASE('C', unsigned char, unsignedCharValue)
                TF_EXECUTE_PARAM_CASE('s', short, shortValue)
                TF_EXECUTE_PARAM_CASE('S', unsigned short, unsignedShortValue)
                TF_EXECUTE_PARAM_CASE('i', int, intValue)
                TF_EXECUTE_PARAM_CASE('I', unsigned int, unsignedIntValue)
                TF_EXECUTE_PARAM_CASE('l', long, longValue)
                TF_EXECUTE_PARAM_CASE('L', unsigned long, unsignedLongValue)
                TF_EXECUTE_PARAM_CASE('q', long long, longLongValue)
                TF_EXECUTE_PARAM_CASE('Q', unsigned long long, unsignedLongLongValue)
                TF_EXECUTE_PARAM_CASE('f', float, floatValue)
                TF_EXECUTE_PARAM_CASE('d', double, doubleValue)
                TF_EXECUTE_PARAM_CASE('B', BOOL, boolValue)
                
            case ':':{
                
                BOOL can_parse = [param_sel isKindOfClass:[NSString class]];
                NSCAssert(can_parse,@"%@ execute selector %@ error! please Convert SEL paramter to NSString", clsToString(cls), selToString(_sel));
                SEL value = NSSelectorFromString(param_sel);
                [invocation setArgument:&value atIndex:i];
                
            }break;
                
            case '{': {
                
                BOOL can_parse = [param_sel isKindOfClass:[NSString class]];
                NSCAssert(can_parse,@"%@ execute selector %@ error! please Convert struct paramter to NSString", clsToString(cls), selToString(_sel));
                NSString *typeString = parseStructName([NSString stringWithUTF8String:a_type]);
                typeString = [typeString stringByReplacingOccurrencesOfString:@"_" withString:@""];
                
#define TF_EXECUTE_PARAM_STRUCT(STRUCT_NAME)\
STRUCT_NAME value = STRUCT_NAME##FromString(param_sel);\
[invocation setArgument:&value atIndex:i];
                
            }break;
            case '*':
            case '^': {
                void * value = (__bridge void *)(param_sel);
                [invocation setArgument:&value atIndex:i];
            }
            case '#': {
                BOOL can_parse = [param_sel isKindOfClass:[NSString class]];
                NSCAssert(can_parse,@"%@ execute selector %@ error! please Convert Class paramter to NSString", clsToString(cls), selToString(_sel));
                Class value = NSClassFromString(param_sel);
                [invocation setArgument:&value atIndex:i];
            }
            case '@': {
                [invocation setArgument:&param_sel atIndex:i];
            }
            default: {
                if (param_sel == NULL) {
                    NSNull *value = [NSNull null];
                    [invocation setArgument:&value atIndex:i];
                    break;
                }
                if (([param_sel isKindOfClass:[NSNumber class]] &&
                     strcmp([param_sel objCType], "c") == 0 &&
                     ![param_sel boolValue])) {
                    id value = nil;
                    [invocation setArgument:&value atIndex:i];
                    break;
                }
            }
        }
    }
    //execute
    [invocation invoke];
    //get returntype
    const char *r_type = signature.methodReturnType;
    if (strcmp(r_type, @encode(void))==0) {return nil;}
    
    id r_value;
    if (strcmp(r_type, @encode(id)) == 0) {
        void *result;
        [invocation getReturnValue:&result];
        NSString *sel_str = NSStringFromSelector(_sel);
        if ([sel_str isEqualToString:@"alloc"] || [sel_str isEqualToString:@"new"] ||
            [sel_str isEqualToString:@"copy"] || [sel_str isEqualToString:@"mutableCopy"]) {
            r_value = (__bridge_transfer id)result;
        } else {
            r_value = (__bridge id)result;
        }
        return r_value;
    }else{
        //get return value length
        NSUInteger r_length = [signature methodReturnLength];
        //apply memory
        void *_r_buffer = (void *)malloc(r_length);
        //get return value
        [invocation getReturnValue:_r_buffer];
        //get return value value
        r_value = [NSValue valueWithBytes:_r_buffer objCType:r_type];
        //NSLog(@"r_type:%@",[NSString stringWithUTF8String:r_type]);
        return r_value;
    }
    return nil;
}


static inline NSString *clsToString(Class cls){
    return NSStringFromClass(cls);
}
//static inline Class stringToCls(NSString *str){
//    return NSClassFromString(str);
//}
static inline NSString *selToString(SEL sel){
    return NSStringFromSelector(sel);
}
//static inline SEL stringToSel(NSString *str){
//    return NSSelectorFromString(str);
//}
//in {CGRect={CGPoint=dd}{CGSize=dd}} out CGRect
static inline NSString *parseStructName(NSString *typeEncodeString)
{
    NSArray *array = [typeEncodeString componentsSeparatedByString:@"="];
    NSString *typeString = array[0];
    int firstValidIndex = 0;
    for (int i = 0; i< typeString.length; i++) {
        char c = [typeString characterAtIndex:i];
        if (c == '{' || c=='_') {
            firstValidIndex++;
        }else {
            break;
        }
    }
    return [typeString substringFromIndex:firstValidIndex];
}
static inline NSMutableArray *arrayCapacity(NSUInteger cap){
    NSMutableArray *array = [NSMutableArray arrayWithCapacity:cap];
    return array;
}

//static inline NSString *stringFromNumber(NSNumber *number){
//    NSNumberFormatter *numberFormatter = [[NSNumberFormatter alloc] init];
//    NSString *string =[numberFormatter stringFromNumber:number];
//    return string;
//}
static inline NSNumber *numberFromString(NSString *string){
    NSNumberFormatter *numberFormatter = [[NSNumberFormatter alloc] init];
    [numberFormatter setNumberStyle:NSNumberFormatterDecimalStyle];
    NSNumber *number = [numberFormatter numberFromString:string];
    return number;
}

static inline NSString *firstCharUpper(NSString *string){
    
    NSMutableString *mu_string = [NSMutableString string];
    [mu_string appendString:[NSString stringWithFormat:@"%c", [string characterAtIndex:0]].uppercaseString];
    if (string.length >= 2) [mu_string appendString:[string substringFromIndex:1]];
    return [NSString stringWithFormat:@"%@",mu_string];
    
}


@end


@implementation TFLogTreeContainer



+(instancetype)initWithView:(UIView *)view
{
    TFLogTreeContainer *ins = [[TFLogTreeContainer alloc]init];
    ins.view = view;
    [ins doWithSubViews];
    return ins;
}

-(void)doWithSubViews
{
    [self.subviews removeAllObjects];
    NSArray *subviews = self.view.subviews;
    for (UIView *subview in subviews) {
        TFLogTreeContainer *container = [TFLogTreeContainer initWithView:subview];
        [self.subviews addObject:container];
    }
}

-(NSMutableDictionary *)descriptionContainer:(NSArray *)propertyKeys
{
    [self.desCache removeAllObjects];
    NSMutableDictionary *properties = [NSMutableDictionary dictionaryWithCapacity:propertyKeys.count];
    
    for (NSString *pkey in propertyKeys) {
        id pvalue = @"";
        @try {
            pvalue = [self.view valueForKey:pkey];
        } @catch (NSException *exception) {
            pvalue = [NSString stringWithFormat:@"unknow key(%@) for class(%@)",pkey,self.view];
        } @finally {
            if (pvalue == nil)pvalue = @"null";
        }
        //NSLog(@">>>>>0000000000000000:%@:%@:%@",pkey,pvalue,self.view.backgroundColor);
        [properties setObject:pvalue forKey:pkey];
    }
    
    NSMutableArray *subviews = [NSMutableArray arrayWithCapacity:self.subviews.count];
    for (TFLogTreeContainer *subview in self.subviews) {
        NSMutableDictionary *dic = [subview descriptionContainer:propertyKeys];
        [subviews addObject:dic];
    }
    
    [self.desCache setObject:properties forKey:@"properties"];
    [self.desCache setObject:subviews forKey:@"subviews"];
    
    NSMutableDictionary *front = [NSMutableDictionary dictionary];
    [front setObject:self.desCache forKey:NSStringFromClass([self.view class])];
    return front;
}


-(NSMutableDictionary *)desCache
{
    if (_desCache == nil) {
        _desCache = [NSMutableDictionary dictionary];
    }
    return _desCache;
}
-(NSMutableArray *)subviews
{
    if (_subviews == nil) {
        _subviews = [NSMutableArray arrayWithCapacity:5];
    }
    return _subviews;
}


@end

