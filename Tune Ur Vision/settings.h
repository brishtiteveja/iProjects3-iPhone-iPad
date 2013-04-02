//
//  settings.h
//  Tune Ur Vision
//
//  Created by ananda on 12/02/08.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "VisionTest.h"


@interface settings : UIViewController{
    AppDelegate* thisAppDelegate;
}
@property (strong, nonatomic) IBOutlet UISwitch *faceS;

@property (strong, nonatomic) IBOutlet UISwitch *planetS;

@property (strong, nonatomic) IBOutlet UISwitch *socialS;


- (IBAction)soundOnOff:(id)sender;
- (IBAction)faceSwitch:(id)sender;
- (IBAction)planetSwitch:(id)sender;
- (IBAction)socialSwitch:(id)sender;

@end
