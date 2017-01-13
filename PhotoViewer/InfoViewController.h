//
//  InfoViewController.h
//  PhotoViewer
//
//  Created by pcadmin on 1/12/17.
//  Copyright © 2017 pcadmin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Photo.h"

@interface InfoViewController : UIViewController
// Used to pass data between Scenes
@property (nonatomic) Photo *currentPhoto;

@end
