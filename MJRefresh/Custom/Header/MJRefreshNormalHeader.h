//
//  MJRefreshNormalHeader.h
//  MJRefresh
//
//  Created by MJ Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#if __has_include(<MJRefresh/MJRefreshStateHeader.h>)
#import <MJRefresh/MJRefreshStateHeader.h>
#else
#import "MJRefreshStateHeader.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface MJRefreshNormalHeader : MJRefreshStateHeader
@property (weak, nonatomic, readonly) UIImageView *arrowView;
@property (weak, nonatomic, readonly) UIActivityIndicatorView *loadingView;
@end

NS_ASSUME_NONNULL_END
