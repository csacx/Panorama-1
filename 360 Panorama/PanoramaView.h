//
//  PanoramaView.h
//  Spherical
//
//  Created by Robby Kraft on 8/24/13.
//  Copyright (c) 2013 Robby Kraft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

@interface PanoramaView : GLKView

@property (nonatomic) float fieldOfView;  // 60-90 is average
@property (nonatomic) BOOL pinchZoom;
@property (nonatomic) BOOL orientToDevice;
@property (nonatomic) GLKMatrix4 attitudeMatrix;
@property BOOL celestialSphere;  // bonus: rotating stars

-(void) execute;  // draw screen
-(void) setTexture:(NSString*)fileName;

@end
