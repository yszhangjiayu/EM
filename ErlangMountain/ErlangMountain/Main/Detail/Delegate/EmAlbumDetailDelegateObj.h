//
//  EmAlbumDetailDelegateObj.h
//  ErlangMountain
//
//  Created by lequwuxian1 on 2018/4/26.
//  Copyright © 2018年 luowenx. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 专辑详情
 */
@class EMAlbumDetailViewModel;
@interface EmAlbumDetailDelegateObj : NSObject<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) EMAlbumDetailViewModel * viewModel;

@end
