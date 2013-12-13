//
//  MosaicData.m
//  MosaicCollectionView
//
//  Created by Ezequiel A Becerra on 2/17/13.
//  Copyright (c) 2013 Betzerra. All rights reserved.
//

#import "MosaicData.h"

@implementation MosaicData

- (id)initWithImageName:(NSString*)inImageName title:(NSString*)inTitle {
    NSParameterAssert(inImageName != nil);
    
    self = [self init];
    if (self) {
        self.imageFilename = [inImageName copy];
        self.title = [inTitle copy];
        self.firstTimeShown = YES;
    }
    return self;
}


-(id)initWithDictionary:(NSDictionary *)aDict{
    NSString*   name = [aDict objectForKey:@"imageFilename"];
    NSString*   title = [aDict objectForKey:@"title"];
    return [self initWithImageName:name title:title];
}


-(NSString *)description{
    NSString *retVal = [NSString stringWithFormat:@"%@ %@", [super description], self.title];
    return retVal;
}

@end
