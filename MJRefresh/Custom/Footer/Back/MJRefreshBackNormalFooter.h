//
//  MJRefreshBackNormalFooter.h
//  MJRefresh
//
//  Created by MJ Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#if __has_include(<MJRefresh/MJRefreshBackStateFooter.h>)
#import <MJRefresh/MJRefreshBackStateFooter.h>
#else
#import "MJRefreshBackStateFooter.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface MJRefreshBackNormalFooter : MJRefreshBackStateFooter
@property (weak, nonatomic, readonly) UIImageView *arrowView;
@property (weak, nonatomic, readonly) UIActivityIndicatorView *loadingView;
@end

NS_ASSUME_NONNULL_END
