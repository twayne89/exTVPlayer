//
//  IGRExItemCell.h
//  exTVPlayer
//
//  Created by Vitalii Parovishnyk on 12/17/15.
//  Copyright © 2015 IGR Software. All rights reserved.
//

@class IGRExTrack;
@class DACircularProgressView;

@interface IGRExItemCell : UITableViewCell

@property (weak  , nonatomic) IBOutlet UILabel *title;
@property (weak  , nonatomic) IBOutlet DACircularProgressView *trackStatus;
@property (weak  , nonatomic) IBOutlet UIProgressView *saveProgress;
@property (weak  , nonatomic) IBOutlet UIImageView *savedIcon;

@end
