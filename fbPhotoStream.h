//
//  fbPhotoStream.h
//  photostream_utility
//
//  Created by Marta Juhasz on 7/14/11.
//  Copyright 2011 asterisk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FBConnect.h"
#import "FBSecrets.h"

@interface fbPhotoStream : NSObject <FBSessionDelegate>{
    Facebook* facebook;
}

-(id)init;

@end
