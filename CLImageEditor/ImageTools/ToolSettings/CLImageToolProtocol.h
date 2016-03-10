//
//  CLImageToolProtocol.h
//
//  Created by Vytautas Galdikas on 2016/03/10.
//  Copyright (c) 2013 Vytautas. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CLImageToolProtocol

@required
+ (NSString*)defaultIconImagePath;
+ (CGFloat)defaultDockedNumber;
+ (NSString*)defaultTitle;
+ (BOOL)isAvailable;
+ (NSArray*)subtools;
+ (NSDictionary*)optionalInfo;

@end
