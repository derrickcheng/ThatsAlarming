//
//  thatsAlarmingViewController.h
//  thatsAlarming
//
//  Created by Derrick Cheng on 4/6/14.
//  Copyright (c) 2014 Derrick Cheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface cameraViewController : UIViewController<UIGestureRecognizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>

@property (strong, nonatomic) IBOutlet UIView *previewView;
@property (strong, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (strong, nonatomic) AVCaptureVideoDataOutput *videoDataOutput;
@property BOOL detectFaces;
@property (strong, nonatomic) dispatch_queue_t videoDataOutputQueue;
@property (strong, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (strong, nonatomic) UIView *flashView;
@property (strong, nonatomic) UIImage *square;
@property BOOL isUsingFrontFacingCamera;
@property (strong, nonatomic) CIDetector *faceDetector;
@property CGFloat beginGestureScale;
@property CGFloat effectiveScale;
@property AVCaptureSession * session;


@end
