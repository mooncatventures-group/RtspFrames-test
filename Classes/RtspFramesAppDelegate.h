//
//  RtspFramesAppDelegate.h
//  RtspFrames
//
//  Created by Michelle Cannon on 5/1/12.
//  Copyright 2012 none. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FFmpegDecoder/FrameExtractor.h>



@interface RtspFramesAppDelegate : NSObject <UIApplicationDelegate,CGImageBufferDelegate> {
	UIWindow *window;
	IBOutlet UIImageView *imageView;
    FrameExtractor *video;
	NSTimer* iTimer;
	float lastFrameTime;

		
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) FrameExtractor *video;
-(void)displayNextFrame:(NSTimer *)timer;


@end

