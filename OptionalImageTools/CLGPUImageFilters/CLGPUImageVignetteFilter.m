//
//  CLGPUImageVignetteFilter.m
//
//  Created by Vytautas Galdikas on 2016/03/10.
//  Copyright (c) 2013 Vytautas. All rights reserved.
//

#if __has_include("GPUImage.h")

#import "CLGPUImageVignetteFilter.h"

#import "GPUImage.h"

@implementation CLGPUImageVignetteFilter

+ (CGFloat)defaultDockedNumber
{
    return 2.5;
}

+ (NSString*)defaultTitle
{
    return [CLImageEditorTheme localizedString:@"CLGPUImageVignetteFilter_DefaultTitle" withDefault:@"Vignette2"];
}

+ (BOOL)isAvailable
{
    return ([UIDevice iosVersion] >= 5);
}

#pragma mark-

+ (UIImage*)applyFilter:(UIImage*)image
{
    GPUImagePicture *imageSource = [[GPUImagePicture alloc] initWithImage:image];
    GPUImageVignetteFilter *filter = [[GPUImageVignetteFilter alloc] init];
    
    [imageSource addTarget:filter];
    [imageSource processImage];
    
    return [filter imageFromCurrentlyProcessedOutput];
}

@end

#endif
