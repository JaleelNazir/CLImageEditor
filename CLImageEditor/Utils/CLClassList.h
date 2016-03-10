//
//  CLClassList.h
//
//  Created by Vytautas Galdikas on 2016/03/10.
//  Copyright (c) 2013 Vytautas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CLClassList : NSObject

+ (NSArray*)subclassesOfClass:(Class)parentClass;

@end
