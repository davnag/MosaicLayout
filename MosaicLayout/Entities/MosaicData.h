//
//  MosaicData.h
//  MosaicCollectionView
//
//  Created by Ezequiel A Becerra on 2/17/13.
//  Copyright (c) 2013 Betzerra. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MosaicLayoutType) {
    kMosaicLayoutTypeUndefined,
    kMosaicLayoutTypeSingle,
    kMosaicLayoutTypeDouble
};


@interface MosaicData : NSObject

/**
 *  Initializes a MosaicData object with the given image name and title.
 *
 *  Added by Hsoi 2013-12-13.
 *
 *  @param imageName An image resource reference. Can be an http URL to a remote image, or a name, which will be loaded by +[UIImage imageNamed:].
 *  @param title     The title to display.
 *
 *  @return Returns the newly allocated MosaicData object (or nil on error).
 */
- (id)initWithImageName:(NSString*)imageName title:(NSString*)title;

- (id)initWithDictionary:(NSDictionary*)aDict;

@property (nonatomic, strong) NSString*             imageFilename;
@property (nonatomic, strong) NSString*             title;
@property (nonatomic, assign) BOOL                  firstTimeShown;
@property (nonatomic, assign) MosaicLayoutType      layoutType;
@property (nonatomic, assign) CGFloat               relativeHeight;

@end
