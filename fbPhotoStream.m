//
//  fbPhotoStream.m
//  photostream_utility
//
//  Created by Marta Juhasz on 7/14/11.
//  Copyright 2011 asterisk. All rights reserved.
//

#import "fbPhotoStream.h"


@implementation fbPhotoStream

-(id)init
{
    self = [super init];
    if (self == nil)
        return self;
    
    printf("hey you\n");
    facebook = [[Facebook alloc] initWithAppId:APPID];
    if (facebook != nil)
        printf("fb initialized\n");
    NSArray* permissions =  [[NSArray arrayWithObjects:
                      @"read_stream", @"publish_stream", @"offline_access",nil] retain];
    [facebook authorize:permissions delegate:self];
    return self;
}

@end
