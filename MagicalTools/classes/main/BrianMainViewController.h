//
//  BrianMainViewController.h
//  MagicalTools
//
//  Created by 陆 文杰 on 14-4-26.
//  Copyright (c) 2014年 陆 文杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import <AVFoundation/AVFoundation.h>

@interface BrianMainViewController : BaseViewController
{
    AVCaptureSession * AVSession;
    BOOL lightOn;
}

@end
