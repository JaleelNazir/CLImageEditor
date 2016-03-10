//
//  CLImageEditorTheme+Private.h
//
//  Created by Vytautas Galdikas on 2016/03/10.
//  Copyright (c) 2013 Vytautas. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "CLImageEditorTheme.h"

#import "CLToolbarMenuItem.h"

@interface CLImageEditorTheme (Private)

+ (NSString*)bundleName;
+ (NSBundle*)bundle;
+ (UIImage*)imageNamed:(Class)path image:(NSString*)image;
+ (NSString*)localizedString:(NSString*)key withDefault:defaultValue;

+ (UIColor*)backgroundColor;
+ (UIColor*)toolbarColor;
+ (UIColor*)toolbarTextColor;
+ (UIColor*)toolbarSelectedButtonColor;

+ (UIFont*)toolbarTextFont;

+ (UIActivityIndicatorView*)indicatorView;
+ (CLToolbarMenuItem*)menuItemWithFrame:(CGRect)frame target:(id)target action:(SEL)action toolInfo:(CLImageToolInfo*)toolInfo;

@end
