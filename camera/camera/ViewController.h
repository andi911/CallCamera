//
//  ViewController.h
//  camera
//
//  Created by liangyu on 15-3-30.
//  Copyright (c) 2015年 cheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIActionSheetDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *useImage;
- (IBAction)startAction:(id)sender;
@end

